// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Windows_Gaming_Input_Custom_H
#define WINRT_Windows_Gaming_Input_Custom_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.220929.3"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.220929.3"
#include "winrt/Windows.Gaming.Input.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Gaming.Input.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Gaming.Input.Custom.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Gaming_Input_Custom_ICustomGameControllerFactory<D>::CreateGameController(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory)->CreateGameController(*(void**)(&provider), &value));
        return winrt::Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_ICustomGameControllerFactory<D>::OnGameControllerAdded(winrt::Windows::Gaming::Input::IGameController const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory)->OnGameControllerAdded(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_ICustomGameControllerFactory<D>::OnGameControllerRemoved(winrt::Windows::Gaming::Input::IGameController const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory)->OnGameControllerRemoved(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForGipInterface(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, winrt::guid const& interfaceId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics)->RegisterCustomFactoryForGipInterface(*(void**)(&factory), impl::bind_in(interfaceId)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForHardwareId(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics)->RegisterCustomFactoryForHardwareId(*(void**)(&factory), hardwareVendorId, hardwareProductId));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics<D>::RegisterCustomFactoryForXusbType(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, winrt::Windows::Gaming::Input::Custom::XusbDeviceType const& xusbType, winrt::Windows::Gaming::Input::Custom::XusbDeviceSubtype const& xusbSubtype) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics)->RegisterCustomFactoryForXusbType(*(void**)(&factory), static_cast<int32_t>(xusbType), static_cast<int32_t>(xusbSubtype)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerFactoryManagerStatics2<D>::TryGetFactoryControllerFromGameController(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, winrt::Windows::Gaming::Input::IGameController const& gameController) const
    {
        void* factoryController{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2)->TryGetFactoryControllerFromGameController(*(void**)(&factory), *(void**)(&gameController), &factoryController));
        return winrt::Windows::Gaming::Input::IGameController{ factoryController, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerInputSink<D>::OnInputResumed(uint64_t timestamp) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink)->OnInputResumed(timestamp));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerInputSink<D>::OnInputSuspended(uint64_t timestamp) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink)->OnInputSuspended(timestamp));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>::FirmwareVersionInfo() const
    {
        winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider)->get_FirmwareVersionInfo(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>::HardwareProductId() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider)->get_HardwareProductId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>::HardwareVendorId() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider)->get_HardwareVendorId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>::HardwareVersionInfo() const
    {
        winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider)->get_HardwareVersionInfo(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGameControllerProvider<D>::IsConnected() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGameControllerProvider)->get_IsConnected(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult<D>::ExtendedErrorCode() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult)->get_ExtendedErrorCode(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult<D>::FinalComponentId() const
    {
        uint32_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult)->get_FinalComponentId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGipFirmwareUpdateResult<D>::Status() const
    {
        winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGipGameControllerInputSink<D>::OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink)->OnKeyReceived(timestamp, keyCode, isPressed));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGipGameControllerInputSink<D>::OnMessageReceived(uint64_t timestamp, winrt::Windows::Gaming::Input::Custom::GipMessageClass const& messageClass, uint8_t messageId, uint8_t sequenceId, array_view<uint8_t const> messageBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink)->OnMessageReceived(timestamp, static_cast<int32_t>(messageClass), messageId, sequenceId, messageBuffer.size(), get_abi(messageBuffer)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGipGameControllerProvider<D>::SendMessage(winrt::Windows::Gaming::Input::Custom::GipMessageClass const& messageClass, uint8_t messageId, array_view<uint8_t const> messageBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGipGameControllerProvider)->SendMessage(static_cast<int32_t>(messageClass), messageId, messageBuffer.size(), get_abi(messageBuffer)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGipGameControllerProvider<D>::SendReceiveMessage(winrt::Windows::Gaming::Input::Custom::GipMessageClass const& messageClass, uint8_t messageId, array_view<uint8_t const> requestMessageBuffer, array_view<uint8_t> responseMessageBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGipGameControllerProvider)->SendReceiveMessage(static_cast<int32_t>(messageClass), messageId, requestMessageBuffer.size(), get_abi(requestMessageBuffer), responseMessageBuffer.size(), put_abi(responseMessageBuffer)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IGipGameControllerProvider<D>::UpdateFirmwareAsync(winrt::Windows::Storage::Streams::IInputStream const& firmwareImage) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IGipGameControllerProvider)->UpdateFirmwareAsync(*(void**)(&firmwareImage), &result));
        return winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IHidGameControllerInputSink<D>::OnInputReportReceived(uint64_t timestamp, uint8_t reportId, array_view<uint8_t const> reportBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IHidGameControllerInputSink)->OnInputReportReceived(timestamp, reportId, reportBuffer.size(), get_abi(reportBuffer)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>::UsageId() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider)->get_UsageId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>::UsagePage() const
    {
        uint16_t value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider)->get_UsagePage(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>::GetFeatureReport(uint8_t reportId, array_view<uint8_t> reportBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider)->GetFeatureReport(reportId, reportBuffer.size(), put_abi(reportBuffer)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>::SendFeatureReport(uint8_t reportId, array_view<uint8_t const> reportBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider)->SendFeatureReport(reportId, reportBuffer.size(), get_abi(reportBuffer)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IHidGameControllerProvider<D>::SendOutputReport(uint8_t reportId, array_view<uint8_t const> reportBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider)->SendOutputReport(reportId, reportBuffer.size(), get_abi(reportBuffer)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IXusbGameControllerInputSink<D>::OnInputReceived(uint64_t timestamp, uint8_t reportId, array_view<uint8_t const> inputBuffer) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink)->OnInputReceived(timestamp, reportId, inputBuffer.size(), get_abi(inputBuffer)));
    }
    template <typename D> auto consume_Windows_Gaming_Input_Custom_IXusbGameControllerProvider<D>::SetVibration(double lowFrequencyMotorSpeed, double highFrequencyMotorSpeed) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Gaming::Input::Custom::IXusbGameControllerProvider)->SetVibration(lowFrequencyMotorSpeed, highFrequencyMotorSpeed));
    }
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory> : produce_base<D, winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory>
    {
        int32_t __stdcall CreateGameController(void* provider, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::IInspectable>(this->shim().CreateGameController(*reinterpret_cast<winrt::Windows::Gaming::Input::Custom::IGameControllerProvider const*>(&provider)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OnGameControllerAdded(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnGameControllerAdded(*reinterpret_cast<winrt::Windows::Gaming::Input::IGameController const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OnGameControllerRemoved(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnGameControllerRemoved(*reinterpret_cast<winrt::Windows::Gaming::Input::IGameController const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics>
    {
        int32_t __stdcall RegisterCustomFactoryForGipInterface(void* factory, winrt::guid interfaceId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterCustomFactoryForGipInterface(*reinterpret_cast<winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const*>(&factory), *reinterpret_cast<winrt::guid const*>(&interfaceId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterCustomFactoryForHardwareId(void* factory, uint16_t hardwareVendorId, uint16_t hardwareProductId) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterCustomFactoryForHardwareId(*reinterpret_cast<winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const*>(&factory), hardwareVendorId, hardwareProductId);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RegisterCustomFactoryForXusbType(void* factory, int32_t xusbType, int32_t xusbSubtype) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RegisterCustomFactoryForXusbType(*reinterpret_cast<winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const*>(&factory), *reinterpret_cast<winrt::Windows::Gaming::Input::Custom::XusbDeviceType const*>(&xusbType), *reinterpret_cast<winrt::Windows::Gaming::Input::Custom::XusbDeviceSubtype const*>(&xusbSubtype));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2>
    {
        int32_t __stdcall TryGetFactoryControllerFromGameController(void* factory, void* gameController, void** factoryController) noexcept final try
        {
            clear_abi(factoryController);
            typename D::abi_guard guard(this->shim());
            *factoryController = detach_from<winrt::Windows::Gaming::Input::IGameController>(this->shim().TryGetFactoryControllerFromGameController(*reinterpret_cast<winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const*>(&factory), *reinterpret_cast<winrt::Windows::Gaming::Input::IGameController const*>(&gameController)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink>
    {
        int32_t __stdcall OnInputResumed(uint64_t timestamp) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnInputResumed(timestamp);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OnInputSuspended(uint64_t timestamp) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnInputSuspended(timestamp);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IGameControllerProvider> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IGameControllerProvider>
    {
        int32_t __stdcall get_FirmwareVersionInfo(struct struct_Windows_Gaming_Input_Custom_GameControllerVersionInfo* value) noexcept final try
        {
            zero_abi<winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo>(this->shim().FirmwareVersionInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareProductId(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().HardwareProductId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareVendorId(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().HardwareVendorId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardwareVersionInfo(struct struct_Windows_Gaming_Input_Custom_GameControllerVersionInfo* value) noexcept final try
        {
            zero_abi<winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Gaming::Input::Custom::GameControllerVersionInfo>(this->shim().HardwareVersionInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsConnected(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsConnected());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult>
    {
        int32_t __stdcall get_ExtendedErrorCode(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().ExtendedErrorCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FinalComponentId(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint32_t>(this->shim().FinalComponentId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink>
    {
        int32_t __stdcall OnKeyReceived(uint64_t timestamp, uint8_t keyCode, bool isPressed) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnKeyReceived(timestamp, keyCode, isPressed);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall OnMessageReceived(uint64_t timestamp, int32_t messageClass, uint8_t messageId, uint8_t sequenceId, uint32_t __messageBufferSize, uint8_t* messageBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnMessageReceived(timestamp, *reinterpret_cast<winrt::Windows::Gaming::Input::Custom::GipMessageClass const*>(&messageClass), messageId, sequenceId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(messageBuffer), reinterpret_cast<uint8_t const *>(messageBuffer) + __messageBufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IGipGameControllerProvider> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IGipGameControllerProvider>
    {
        int32_t __stdcall SendMessage(int32_t messageClass, uint8_t messageId, uint32_t __messageBufferSize, uint8_t* messageBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendMessage(*reinterpret_cast<winrt::Windows::Gaming::Input::Custom::GipMessageClass const*>(&messageClass), messageId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(messageBuffer), reinterpret_cast<uint8_t const *>(messageBuffer) + __messageBufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendReceiveMessage(int32_t messageClass, uint8_t messageId, uint32_t __requestMessageBufferSize, uint8_t* requestMessageBuffer, uint32_t __responseMessageBufferSize, uint8_t* responseMessageBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendReceiveMessage(*reinterpret_cast<winrt::Windows::Gaming::Input::Custom::GipMessageClass const*>(&messageClass), messageId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(requestMessageBuffer), reinterpret_cast<uint8_t const *>(requestMessageBuffer) + __requestMessageBufferSize), array_view<uint8_t>(reinterpret_cast<uint8_t*>(responseMessageBuffer), reinterpret_cast<uint8_t*>(responseMessageBuffer) + __responseMessageBufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateFirmwareAsync(void* firmwareImage, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult, winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateProgress>>(this->shim().UpdateFirmwareAsync(*reinterpret_cast<winrt::Windows::Storage::Streams::IInputStream const*>(&firmwareImage)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IHidGameControllerInputSink> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IHidGameControllerInputSink>
    {
        int32_t __stdcall OnInputReportReceived(uint64_t timestamp, uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnInputReportReceived(timestamp, reportId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(reportBuffer), reinterpret_cast<uint8_t const *>(reportBuffer) + __reportBufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider>
    {
        int32_t __stdcall get_UsageId(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsageId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UsagePage(uint16_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint16_t>(this->shim().UsagePage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetFeatureReport(uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetFeatureReport(reportId, array_view<uint8_t>(reinterpret_cast<uint8_t*>(reportBuffer), reinterpret_cast<uint8_t*>(reportBuffer) + __reportBufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendFeatureReport(uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendFeatureReport(reportId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(reportBuffer), reinterpret_cast<uint8_t const *>(reportBuffer) + __reportBufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SendOutputReport(uint8_t reportId, uint32_t __reportBufferSize, uint8_t* reportBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SendOutputReport(reportId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(reportBuffer), reinterpret_cast<uint8_t const *>(reportBuffer) + __reportBufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>
    {
        int32_t __stdcall OnInputReceived(uint64_t timestamp, uint8_t reportId, uint32_t __inputBufferSize, uint8_t* inputBuffer) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().OnInputReceived(timestamp, reportId, array_view<uint8_t const>(reinterpret_cast<uint8_t const *>(inputBuffer), reinterpret_cast<uint8_t const *>(inputBuffer) + __inputBufferSize));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Gaming::Input::Custom::IXusbGameControllerProvider> : produce_base<D, winrt::Windows::Gaming::Input::Custom::IXusbGameControllerProvider>
    {
        int32_t __stdcall SetVibration(double lowFrequencyMotorSpeed, double highFrequencyMotorSpeed) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetVibration(lowFrequencyMotorSpeed, highFrequencyMotorSpeed);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Gaming::Input::Custom
{
    inline auto GameControllerFactoryManager::RegisterCustomFactoryForGipInterface(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, winrt::guid const& interfaceId)
    {
        impl::call_factory<GameControllerFactoryManager, IGameControllerFactoryManagerStatics>([&](IGameControllerFactoryManagerStatics const& f) { return f.RegisterCustomFactoryForGipInterface(factory, interfaceId); });
    }
    inline auto GameControllerFactoryManager::RegisterCustomFactoryForHardwareId(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, uint16_t hardwareVendorId, uint16_t hardwareProductId)
    {
        impl::call_factory<GameControllerFactoryManager, IGameControllerFactoryManagerStatics>([&](IGameControllerFactoryManagerStatics const& f) { return f.RegisterCustomFactoryForHardwareId(factory, hardwareVendorId, hardwareProductId); });
    }
    inline auto GameControllerFactoryManager::RegisterCustomFactoryForXusbType(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, winrt::Windows::Gaming::Input::Custom::XusbDeviceType const& xusbType, winrt::Windows::Gaming::Input::Custom::XusbDeviceSubtype const& xusbSubtype)
    {
        impl::call_factory<GameControllerFactoryManager, IGameControllerFactoryManagerStatics>([&](IGameControllerFactoryManagerStatics const& f) { return f.RegisterCustomFactoryForXusbType(factory, xusbType, xusbSubtype); });
    }
    inline auto GameControllerFactoryManager::TryGetFactoryControllerFromGameController(winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory const& factory, winrt::Windows::Gaming::Input::IGameController const& gameController)
    {
        return impl::call_factory<GameControllerFactoryManager, IGameControllerFactoryManagerStatics2>([&](IGameControllerFactoryManagerStatics2 const& f) { return f.TryGetFactoryControllerFromGameController(factory, gameController); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::ICustomGameControllerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGameControllerFactoryManagerStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGameControllerInputSink> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGameControllerProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGipFirmwareUpdateResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGipGameControllerInputSink> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IGipGameControllerProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IHidGameControllerInputSink> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IHidGameControllerProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IXusbGameControllerInputSink> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::IXusbGameControllerProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::GameControllerFactoryManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::GipFirmwareUpdateResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::GipGameControllerProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::HidGameControllerProvider> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Gaming::Input::Custom::XusbGameControllerProvider> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
