﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include <memory>

#include "XamlTypeInfo.xaml.g.h"

#include "App.xaml.h"
#include "MainWindow.xaml.h"
#include "XamlBindingInfo.xaml.g.hpp"
#include "App.xaml.g.hpp"
#include "MainWindow.xaml.g.hpp"

namespace winrt::WordCounter::implementation
{
using IXamlMember = ::winrt::Microsoft::UI::Xaml::Markup::IXamlMember;
using IXamlType = ::winrt::Microsoft::UI::Xaml::Markup::IXamlType;
using TypeKind = ::winrt::Windows::UI::Xaml::Interop::TypeKind;

template <typename T>
::winrt::Windows::Foundation::IInspectable ActivateType()
{
    return T();
}

template <typename T>
::winrt::Windows::Foundation::IInspectable ActivateLocalType()
{
    return ::winrt::make<T>();
}

template<typename TInstance, typename TItem>
void CollectionAdd(
    ::winrt::Windows::Foundation::IInspectable const& instance, 
    ::winrt::Windows::Foundation::IInspectable const& item)
{
    instance.as<TInstance>().Append(::winrt::unbox_value<TItem>(item));
}

template<typename TInstance, typename TKey, typename TItem>
void DictionaryAdd(
    ::winrt::Windows::Foundation::IInspectable const& instance,
    ::winrt::Windows::Foundation::IInspectable const& key,
    ::winrt::Windows::Foundation::IInspectable const& item)
{
    instance.as<TInstance>().Insert(::winrt::unbox_value<TKey>(key), ::winrt::unbox_value<TItem>(item));
}

template<typename T>
::winrt::Windows::Foundation::IInspectable FromStringConverter(
    XamlUserType const& userType, 
    ::winrt::hstring const& input)
{
    return ::winrt::box_value(static_cast<T>(userType.CreateEnumUIntFromString(input)));
}

template<typename TDeclaringType, typename TValue>
::winrt::Windows::Foundation::IInspectable GetValueTypeMember_UseCompactResources(::winrt::Windows::Foundation::IInspectable const& instance)
{
    return ::winrt::box_value<TValue>(instance.as<TDeclaringType>().UseCompactResources());
}

template<typename TDeclaringType, typename TValue>
void SetValueTypeMember_UseCompactResources(
    ::winrt::Windows::Foundation::IInspectable const& instance, 
    ::winrt::Windows::Foundation::IInspectable const& value)
{
    instance.as<TDeclaringType>().UseCompactResources(::winrt::unbox_value<TValue>(value));
}

enum TypeInfo_Flags
{
    TypeInfo_Flags_None                 = 0x00,
    TypeInfo_Flags_IsLocalType          = 0x01,
    TypeInfo_Flags_IsSystemType         = 0x02,
    TypeInfo_Flags_IsReturnTypeStub     = 0x04,
    TypeInfo_Flags_IsBindable           = 0x08,
    TypeInfo_Flags_IsMarkupExtension    = 0x10, 
};

struct TypeInfo
{
    const wchar_t* typeName{nullptr};
    const wchar_t* contentPropertyName{nullptr};
    ::winrt::Windows::Foundation::IInspectable (*activator)();
    void (*collectionAdd)(::winrt::Windows::Foundation::IInspectable const&, ::winrt::Windows::Foundation::IInspectable const&);
    void (*dictionaryAdd)(::winrt::Windows::Foundation::IInspectable const&, ::winrt::Windows::Foundation::IInspectable const&, ::winrt::Windows::Foundation::IInspectable const&);
    ::winrt::Windows::Foundation::IInspectable (*fromStringConverter)(XamlUserType const&, ::winrt::hstring const& );
    int     baseTypeIndex;
    int     firstMemberIndex;
    int     firstEnumValueIndex;
    int     createFromStringIndex;
    TypeKind kindOfType;
    unsigned int flags;
    int boxedTypeIndex;
};


const TypeInfo TypeInfos[] = 
{
    //   0
    L"Object", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    -1,
    //   1
    L"Boolean", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    -1,
    //   2
    L"WordCounter.MainWindow", L"",
    &ActivateLocalType<::winrt::WordCounter::implementation::MainWindow>, nullptr, nullptr, nullptr,
    3, // Microsoft.UI.Xaml.Window
    0, 0, -1, TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    -1,
    //   3
    L"Microsoft.UI.Xaml.Window", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    -1,
    //   4
    L"Microsoft.UI.Xaml.ResourceDictionary", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    -1,
    //   5
    L"Microsoft.UI.Xaml.Controls.XamlControlsResources", L"",
    &ActivateType<::winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources>, nullptr, &DictionaryAdd<::winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources, ::winrt::Windows::Foundation::IInspectable, ::winrt::Windows::Foundation::IInspectable>, nullptr,
    4, // Microsoft.UI.Xaml.ResourceDictionary
    0, 0, -1, TypeKind::Metadata,
    TypeInfo_Flags_None,
    -1,
    //  Last type here is for padding
    L"", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1, 
    1, 0, -1, TypeKind::Custom,
    TypeInfo_Flags_None,
};

constexpr uint32_t TypeInfoLookup[] = { 
      0,   //   0
      0,   //   1
      0,   //   2
      0,   //   3
      0,   //   4
      0,   //   5
      0,   //   6
      1,   //   7
      2,   //   8
      2,   //   9
      2,   //  10
      2,   //  11
      2,   //  12
      2,   //  13
      2,   //  14
      2,   //  15
      2,   //  16
      2,   //  17
      2,   //  18
      2,   //  19
      2,   //  20
      2,   //  21
      2,   //  22
      3,   //  23
      3,   //  24
      4,   //  25
      4,   //  26
      4,   //  27
      4,   //  28
      4,   //  29
      4,   //  30
      4,   //  31
      4,   //  32
      4,   //  33
      4,   //  34
      4,   //  35
      4,   //  36
      5,   //  37
      5,   //  38
      5,   //  39
      5,   //  40
      5,   //  41
      5,   //  42
      5,   //  43
      5,   //  44
      5,   //  45
      5,   //  46
      5,   //  47
      5,   //  48
      6,   //  49
};

struct MemberInfo 
{
    const wchar_t* shortName{nullptr};
    ::winrt::Windows::Foundation::IInspectable (*getter)(::winrt::Windows::Foundation::IInspectable const&);
    void (*setter)(::winrt::Windows::Foundation::IInspectable const&, ::winrt::Windows::Foundation::IInspectable const&);
    int typeIndex;
    int targetTypeIndex;
    bool isReadOnly;
    bool isDependencyProperty;
    bool isAttachable;
};

const MemberInfo MemberInfos[] = 
{
    //   0 - Microsoft.UI.Xaml.Controls.XamlControlsResources.UseCompactResources
    L"UseCompactResources",
    &GetValueTypeMember_UseCompactResources<::winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources, bool>,
    &SetValueTypeMember_UseCompactResources<::winrt::Microsoft::UI::Xaml::Controls::XamlControlsResources, bool>,
    1, // Boolean
    -1,
    false, true,  false,
};

const wchar_t* GetShortName(const wchar_t* longName)
{
    const auto separator = wcsrchr(longName, '.');
    return separator ? separator + 1: longName;
}

const TypeInfo* GetTypeInfo(::winrt::hstring const& typeName)
{
    size_t typeNameLength = typeName.size();
    if (typeNameLength < _countof(TypeInfoLookup) - 1)
    {
        const auto begin = TypeInfos + TypeInfoLookup[typeNameLength];
        const auto end = TypeInfos + TypeInfoLookup[typeNameLength + 1];
        auto pos = std::find_if(begin, end, [&typeName](TypeInfo const& elem)
        {
            return wcscmp(typeName.data(), elem.typeName) == 0;
        });
        if (pos != end)
        {
            return pos;
        }
    }
    return nullptr;
}

const MemberInfo* GetMemberInfo(::winrt::hstring const& longMemberName)
{
    const auto dotPosition = std::find(longMemberName.crbegin(), longMemberName.crend(), L'.').base();
    if (dotPosition != longMemberName.end())
    {
        const auto sizeBeforeDot = static_cast<::winrt::hstring::size_type>(dotPosition - longMemberName.begin()) - 1;
        const TypeInfo* pTypeInfo = GetTypeInfo(::winrt::hstring{longMemberName.data(), sizeBeforeDot});
        if (pTypeInfo)
        {
            const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
            const auto shortMemberName = GetShortName(longMemberName.data());
            const auto begin = MemberInfos + pTypeInfo->firstMemberIndex;
            const auto end = MemberInfos + pNextTypeInfo->firstMemberIndex;
            auto info = std::find_if(begin, end,
                [shortMemberName](const MemberInfo& elem)
            {
                return wcscmp(shortMemberName, elem.shortName) == 0;
            });
            if (info != end)
            {
                return info;
            }
        }
    }
    return nullptr;
}

std::vector<::winrt::Microsoft::UI::Xaml::Markup::IXamlMetadataProvider> const& XamlTypeInfoProvider::OtherProviders()
{
    std::lock_guard<std::recursive_mutex> lock(_xamlTypesCriticalSection);
    if (_otherProviders.empty())
    {
        _otherProviders.push_back(::winrt::Microsoft::UI::Xaml::XamlTypeInfo::XamlControlsXamlMetaDataProvider());
    }
    return _otherProviders;
}

IXamlType XamlTypeInfoProvider::CreateXamlType(::winrt::hstring const& typeName)
{
    const TypeInfo* pTypeInfo = GetTypeInfo(typeName);
    const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
    if (!pTypeInfo || !pNextTypeInfo)
    {
        return nullptr;
    }
    else if (pTypeInfo->flags & TypeInfo_Flags_IsSystemType)
    {
        return ::winrt::make<XamlSystemBaseType>(typeName);
    }
    else
    {
        ::winrt::hstring baseName { pTypeInfo->baseTypeIndex >= 0 ? TypeInfos[pTypeInfo->baseTypeIndex].typeName : L""};
        ::winrt::hstring boxedName { pTypeInfo->boxedTypeIndex >= 0 ? TypeInfos[pTypeInfo->boxedTypeIndex].typeName : L""};
        auto userType = ::winrt::make_self<XamlUserType>(shared_from_this(), pTypeInfo->typeName, GetXamlTypeByName(baseName));
        userType->_kindOfType = pTypeInfo->kindOfType;
        userType->_activator = pTypeInfo->activator;
        userType->_collectionAdd = pTypeInfo->collectionAdd;
        userType->_dictionaryAdd = pTypeInfo->dictionaryAdd;
        userType->_fromStringConverter = pTypeInfo->fromStringConverter;
        userType->ContentPropertyName(pTypeInfo->contentPropertyName);
        userType->IsLocalType(pTypeInfo->flags & TypeInfo_Flags_IsLocalType);
        userType->IsReturnTypeStub(pTypeInfo->flags & TypeInfo_Flags_IsReturnTypeStub);
        userType->IsBindable(pTypeInfo->flags & TypeInfo_Flags_IsBindable);
        userType->IsMarkupExtension(pTypeInfo->flags & TypeInfo_Flags_IsMarkupExtension);
        userType->_createFromStringMethod = nullptr;
        userType->SetBoxedType(GetXamlTypeByName(boxedName));
        for (int i = pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; ++i)
        {
            userType->AddMemberName(MemberInfos[i].shortName);
        }
        return userType.as<IXamlType>();
    }
}

IXamlMember XamlTypeInfoProvider::CreateXamlMember(::winrt::hstring const& longMemberName)
{
    const MemberInfo* pMemberInfo = GetMemberInfo(longMemberName);
    if (!pMemberInfo)
    {
        return nullptr;
    }
    auto xamlMember = ::winrt::make_self<XamlMember>(shared_from_this(),
        pMemberInfo->shortName, TypeInfos[pMemberInfo->typeIndex].typeName);
    xamlMember->_getter = pMemberInfo->getter;
    xamlMember->_setter = pMemberInfo->setter;
    xamlMember->TargetTypeName(pMemberInfo->targetTypeIndex >= 0 ? TypeInfos[pMemberInfo->targetTypeIndex].typeName : L"");
    xamlMember->IsReadOnly(pMemberInfo->isReadOnly);
    xamlMember->IsDependencyProperty(pMemberInfo->isDependencyProperty);
    xamlMember->IsAttachable(pMemberInfo->isAttachable);

    return xamlMember.as<IXamlMember>();
}
} // namespace
