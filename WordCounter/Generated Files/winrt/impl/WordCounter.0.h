// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_WordCounter_0_H
#define WINRT_WordCounter_0_H
WINRT_EXPORT namespace winrt::Microsoft::UI::Xaml::Markup
{
    struct IXamlMetadataProvider;
}
WINRT_EXPORT namespace winrt::WordCounter
{
    struct IMainWindow;
    struct MainWindow;
    struct XamlMetaDataProvider;
}
namespace winrt::impl
{
    template <> struct category<winrt::WordCounter::IMainWindow>{ using type = interface_category; };
    template <> struct category<winrt::WordCounter::MainWindow>{ using type = class_category; };
    template <> struct category<winrt::WordCounter::XamlMetaDataProvider>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::WordCounter::MainWindow> = L"WordCounter.MainWindow";
    template <> inline constexpr auto& name_v<winrt::WordCounter::XamlMetaDataProvider> = L"WordCounter.XamlMetaDataProvider";
    template <> inline constexpr auto& name_v<winrt::WordCounter::IMainWindow> = L"WordCounter.IMainWindow";
    template <> inline constexpr guid guid_v<winrt::WordCounter::IMainWindow>{ 0xA3F3FE36,0xA615,0x58C0,{ 0xBB,0x47,0x77,0x26,0x27,0x5F,0xCA,0xD0 } }; // A3F3FE36-A615-58C0-BB47-7726275FCAD0
    template <> struct default_interface<winrt::WordCounter::MainWindow>{ using type = winrt::WordCounter::IMainWindow; };
    template <> struct default_interface<winrt::WordCounter::XamlMetaDataProvider>{ using type = winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider; };
    template <> struct abi<winrt::WordCounter::IMainWindow>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <typename D>
    struct consume_WordCounter_IMainWindow
    {
    };
    template <> struct consume<winrt::WordCounter::IMainWindow>
    {
        template <typename D> using type = consume_WordCounter_IMainWindow<D>;
    };
}
#endif
