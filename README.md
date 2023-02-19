# Word Counter in C++/WinRT using WinUI3

This is a project that counts the number of words in a text. It was written in C++ to test and learn more about WinUI3, a modern UI framework for building Windows desktop applications.

WinUI3 offers some benefits for C++ developers, but there are many limitations to be aware of. For example, WinUI3 has some issues related to data binding that can make it more difficult to work with than C# and XAML. Additionally, there are more details to configure in WinUI3 than in C# and XAML for creating something simple like this Word Counter app. Another example, there is no `DataGrid` in C++/WinRT and because of that, it isn't straightforward to implement a table.

Knowing those challenges, one way out for larger projects might be creating a C# based project and consume that from the C++ project as shown in the [C# Island in C++/WinRT Sample](https://github.com/CommunityToolkit/Sample-Windows-CppWinRT).

#### How to use it:
1. Type or paste some text into the input box.
2. Click the "Submit" button to count the number of words in the text.
3. The result will be displayed on the right side of the window.

#### Showcase
<img src="/resources/showcase.gif" width="75%" height="75%"/>

## Build

To build and run this project, you'll need the following Visual Studio 2022 with the "Desktop development with C++" workload.

#### Building and running the project:
1. Clone this repository or download the source code as a ZIP file.
2. Open the solution file (`WordCounter.sln`) in Visual Studio.
3. Build and run the solution.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
