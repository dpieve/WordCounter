// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once

#include "MainWindow.g.h"

namespace winrt::WordCounter::implementation
{
	struct MainWindow : MainWindowT<MainWindow>
	{
		MainWindow();

		void SubmitButton_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);

		void CreateDefault();

		void PushWords(winrt::hstring const& text);
		void CleanTable();
	};
}

namespace winrt::WordCounter::factory_implementation
{
	struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
	{
	};
}
