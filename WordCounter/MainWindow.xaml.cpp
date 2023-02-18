// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

#include <winrt/base.h>
#include <sstream>
#include <locale>

#include <winrt/Microsoft.UI.Xaml.Controls.h>
#include <map>
#include <algorithm>

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::WordCounter::implementation
{
	MainWindow::MainWindow()
	{
		InitializeComponent();

		winrt::Microsoft::UI::Xaml::Controls::ListView WordsList = WordsListView().as<winrt::Microsoft::UI::Xaml::Controls::ListView>();

		CreateDefault();
	}

	winrt::Windows::Foundation::Collections::IObservableVector<int32_t> Position = winrt::single_threaded_observable_vector<int32_t>();
	winrt::Windows::Foundation::Collections::IObservableVector<int32_t> Count = winrt::single_threaded_observable_vector<int32_t>();
	winrt::Windows::Foundation::Collections::IObservableVector<winrt::hstring> Words = winrt::single_threaded_observable_vector<winrt::hstring>();
}

static std::vector<winrt::hstring> GetWordsFromText(const winrt::hstring& text)
{
	std::vector<winrt::hstring> words;

	std::string wstr = winrt::to_string(text);
	std::stringstream stream(wstr);
	stream.imbue(std::locale(""));

	std::string word;
	while (stream >> word)
		words.push_back(winrt::to_hstring(word));

	return words;
}

static std::vector< std::pair<winrt::hstring, int32_t> > GetWordsAndCounterSortedByCounter(std::vector<winrt::hstring> words)
{
	std::map<winrt::hstring, uint32_t> counter;
	for (const auto& word : words)
		counter[word]++;

	std::vector< std::pair<winrt::hstring, int32_t> > sorted_counter;
	std::copy(counter.begin(), counter.end(), std::back_inserter<std::vector<std::pair<winrt::hstring, int32_t>>>(sorted_counter));

	std::sort(sorted_counter.begin(), sorted_counter.end(),
		[](const std::pair<winrt::hstring, int32_t>& l, const std::pair<winrt::hstring, int32_t>& r)
		{
			if (l.second != r.second)
				return l.second > r.second;
			return l.first < r.first;
		});

	return sorted_counter;
}

void winrt::WordCounter::implementation::MainWindow::CreateDefault()
{
	winrt::hstring default_text = L"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nunc suscipit auctor nisi, eget molestie nulla dignissim nec. Nulla aliquet sapien eu elit placerat, ut mattis nisl gravida. Nunc urna nulla, tincidunt in felis ac, imperdiet pharetra dolor.";
	WordsTextBox().Text(default_text);
	PushWords(default_text);
}

void winrt::WordCounter::implementation::MainWindow::CleanTable()
{
	Position.Clear();
	Count.Clear();
	Words.Clear();
}

void winrt::WordCounter::implementation::MainWindow::PushWords(winrt::hstring const& text)
{
	// SPLIT
	const auto words = GetWordsFromText(text);
	const auto wordsAndCounterSorted = GetWordsAndCounterSortedByCounter(words);

	uint32_t i = 0;

	for (const auto& w_c : wordsAndCounterSorted)
	{
		const auto word = w_c.first;
		const auto count = w_c.second;
		++i;

		Position.Append(i);
		Count.Append(count);
		Words.Append(word);
	}

	PositionListView().ItemsSource(Position);
	CountListView().ItemsSource(Count);
	WordsListView().ItemsSource(Words);
}

void winrt::WordCounter::implementation::MainWindow::SubmitButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
	winrt::hstring text = WordsTextBox().Text();
	PushWords(text);
}