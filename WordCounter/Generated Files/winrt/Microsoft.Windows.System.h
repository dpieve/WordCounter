// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Microsoft_Windows_System_H
#define WINRT_Microsoft_Windows_System_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220929.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220929.3"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Microsoft.Windows.System.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManager<D>::GetEnvironmentVariables() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManager)->GetEnvironmentVariables(&result));
        return winrt::Windows::Foundation::Collections::IMapView<hstring, hstring>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManager<D>::GetEnvironmentVariable(param::hstring const& name) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManager)->GetEnvironmentVariable(*(void**)(&name), &result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManager<D>::SetEnvironmentVariable(param::hstring const& name, param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManager)->SetEnvironmentVariable(*(void**)(&name), *(void**)(&value)));
    }
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManager<D>::AppendToPath(param::hstring const& path) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManager)->AppendToPath(*(void**)(&path)));
    }
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManager<D>::RemoveFromPath(param::hstring const& path) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManager)->RemoveFromPath(*(void**)(&path)));
    }
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManager<D>::AddExecutableFileExtension(param::hstring const& pathExt) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManager)->AddExecutableFileExtension(*(void**)(&pathExt)));
    }
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManager<D>::RemoveExecutableFileExtension(param::hstring const& pathExt) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManager)->RemoveExecutableFileExtension(*(void**)(&pathExt)));
    }
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManagerStatics<D>::GetForProcess() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManagerStatics)->GetForProcess(&result));
        return winrt::Microsoft::Windows::System::EnvironmentManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManagerStatics<D>::GetForUser() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManagerStatics)->GetForUser(&result));
        return winrt::Microsoft::Windows::System::EnvironmentManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManagerStatics<D>::GetForMachine() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManagerStatics)->GetForMachine(&result));
        return winrt::Microsoft::Windows::System::EnvironmentManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Microsoft_Windows_System_IEnvironmentManagerStatics<D>::IsSupported() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Microsoft::Windows::System::IEnvironmentManagerStatics)->get_IsSupported(&value));
        return value;
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::System::IEnvironmentManager> : produce_base<D, winrt::Microsoft::Windows::System::IEnvironmentManager>
    {
        int32_t __stdcall GetEnvironmentVariables(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::Collections::IMapView<hstring, hstring>>(this->shim().GetEnvironmentVariables());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetEnvironmentVariable(void* name, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().GetEnvironmentVariable(*reinterpret_cast<hstring const*>(&name)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetEnvironmentVariable(void* name, void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetEnvironmentVariable(*reinterpret_cast<hstring const*>(&name), *reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AppendToPath(void* path) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AppendToPath(*reinterpret_cast<hstring const*>(&path));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveFromPath(void* path) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveFromPath(*reinterpret_cast<hstring const*>(&path));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall AddExecutableFileExtension(void* pathExt) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddExecutableFileExtension(*reinterpret_cast<hstring const*>(&pathExt));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RemoveExecutableFileExtension(void* pathExt) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RemoveExecutableFileExtension(*reinterpret_cast<hstring const*>(&pathExt));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Microsoft::Windows::System::IEnvironmentManagerStatics> : produce_base<D, winrt::Microsoft::Windows::System::IEnvironmentManagerStatics>
    {
        int32_t __stdcall GetForProcess(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Microsoft::Windows::System::EnvironmentManager>(this->shim().GetForProcess());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetForUser(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Microsoft::Windows::System::EnvironmentManager>(this->shim().GetForUser());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetForMachine(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Microsoft::Windows::System::EnvironmentManager>(this->shim().GetForMachine());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Microsoft::Windows::System
{
    inline auto EnvironmentManager::GetForProcess()
    {
        return impl::call_factory_cast<winrt::Microsoft::Windows::System::EnvironmentManager(*)(IEnvironmentManagerStatics const&), EnvironmentManager, IEnvironmentManagerStatics>([](IEnvironmentManagerStatics const& f) { return f.GetForProcess(); });
    }
    inline auto EnvironmentManager::GetForUser()
    {
        return impl::call_factory_cast<winrt::Microsoft::Windows::System::EnvironmentManager(*)(IEnvironmentManagerStatics const&), EnvironmentManager, IEnvironmentManagerStatics>([](IEnvironmentManagerStatics const& f) { return f.GetForUser(); });
    }
    inline auto EnvironmentManager::GetForMachine()
    {
        return impl::call_factory_cast<winrt::Microsoft::Windows::System::EnvironmentManager(*)(IEnvironmentManagerStatics const&), EnvironmentManager, IEnvironmentManagerStatics>([](IEnvironmentManagerStatics const& f) { return f.GetForMachine(); });
    }
    inline auto EnvironmentManager::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IEnvironmentManagerStatics const&), EnvironmentManager, IEnvironmentManagerStatics>([](IEnvironmentManagerStatics const& f) { return f.IsSupported(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Microsoft::Windows::System::IEnvironmentManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::System::IEnvironmentManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Microsoft::Windows::System::EnvironmentManager> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
