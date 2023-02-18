// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.220929.3

#pragma once
#ifndef WINRT_Microsoft_Windows_System_Power_0_H
#define WINRT_Microsoft_Windows_System_Power_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
}
WINRT_EXPORT namespace winrt::Microsoft::Windows::System::Power
{
    enum class BatteryStatus : int32_t
    {
        NotPresent = 0,
        Discharging = 1,
        Idle = 2,
        Charging = 3,
    };
    enum class DisplayStatus : int32_t
    {
        Off = 0,
        On = 1,
        Dimmed = 2,
    };
    enum class EffectivePowerMode : int32_t
    {
        BatterySaver = 0,
        BetterBattery = 1,
        Balanced = 2,
        HighPerformance = 3,
        MaxPerformance = 4,
        GameMode = 5,
        MixedReality = 6,
    };
    enum class EnergySaverStatus : int32_t
    {
        Uninitialized = 0,
        Disabled = 1,
        Off = 2,
        On = 3,
    };
    enum class PowerSourceKind : int32_t
    {
        AC = 0,
        DC = 1,
    };
    enum class PowerSupplyStatus : int32_t
    {
        NotPresent = 0,
        Inadequate = 1,
        Adequate = 2,
    };
    enum class SystemSuspendStatus : int32_t
    {
        Uninitialized = 0,
        Entering = 1,
        AutoResume = 2,
        ManualResume = 3,
    };
    enum class UserPresenceStatus : int32_t
    {
        Present = 0,
        Absent = 1,
    };
    struct IPowerManagerStatics;
    struct IPowerManagerStatics2;
    struct PowerManager;
    struct PowerNotificationsContract;
}
namespace winrt::impl
{
    template <> struct category<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Microsoft::Windows::System::Power::PowerManager>{ using type = class_category; };
    template <> struct category<winrt::Microsoft::Windows::System::Power::BatteryStatus>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::Windows::System::Power::DisplayStatus>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::Windows::System::Power::EffectivePowerMode>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::Windows::System::Power::EnergySaverStatus>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::Windows::System::Power::PowerSourceKind>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::Windows::System::Power::PowerSupplyStatus>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::Windows::System::Power::SystemSuspendStatus>{ using type = enum_category; };
    template <> struct category<winrt::Microsoft::Windows::System::Power::UserPresenceStatus>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::PowerManager> = L"Microsoft.Windows.System.Power.PowerManager";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::BatteryStatus> = L"Microsoft.Windows.System.Power.BatteryStatus";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::DisplayStatus> = L"Microsoft.Windows.System.Power.DisplayStatus";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::EffectivePowerMode> = L"Microsoft.Windows.System.Power.EffectivePowerMode";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::EnergySaverStatus> = L"Microsoft.Windows.System.Power.EnergySaverStatus";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::PowerSourceKind> = L"Microsoft.Windows.System.Power.PowerSourceKind";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::PowerSupplyStatus> = L"Microsoft.Windows.System.Power.PowerSupplyStatus";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::SystemSuspendStatus> = L"Microsoft.Windows.System.Power.SystemSuspendStatus";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::UserPresenceStatus> = L"Microsoft.Windows.System.Power.UserPresenceStatus";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics> = L"Microsoft.Windows.System.Power.IPowerManagerStatics";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics2> = L"Microsoft.Windows.System.Power.IPowerManagerStatics2";
    template <> inline constexpr auto& name_v<winrt::Microsoft::Windows::System::Power::PowerNotificationsContract> = L"Microsoft.Windows.System.Power.PowerNotificationsContract";
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>{ 0xFA3554CC,0xBE1C,0x534C,{ 0xBF,0xF8,0x72,0xDF,0x78,0xE9,0xF4,0xA4 } }; // FA3554CC-BE1C-534C-BFF8-72DF78E9F4A4
    template <> inline constexpr guid guid_v<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics2>{ 0x61F3CC25,0x65B4,0x5DEF,{ 0x9C,0x9B,0x99,0x0C,0xEF,0x3B,0x08,0x33 } }; // 61F3CC25-65B4-5DEF-9C9B-990CEF3B0833
    template <> struct abi<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnergySaverStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_EnergySaverStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EnergySaverStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_BatteryStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_BatteryStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BatteryStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_PowerSupplyStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_PowerSupplyStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PowerSupplyStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_RemainingChargePercent(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_RemainingChargePercentChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RemainingChargePercentChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_RemainingDischargeTime(int64_t*) noexcept = 0;
            virtual int32_t __stdcall add_RemainingDischargeTimeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_RemainingDischargeTimeChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_PowerSourceKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_PowerSourceKindChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PowerSourceKindChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_DisplayStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_DisplayStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DisplayStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_SystemIdleStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SystemIdleStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_EffectivePowerMode(void**) noexcept = 0;
            virtual int32_t __stdcall add_EffectivePowerModeChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_EffectivePowerModeChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_UserPresenceStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_UserPresenceStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_UserPresenceStatusChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_SystemSuspendStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_SystemSuspendStatusChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SystemSuspendStatusChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EffectivePowerMode2(int32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Microsoft_Windows_System_Power_IPowerManagerStatics
    {
        [[nodiscard]] auto EnergySaverStatus() const;
        auto EnergySaverStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using EnergySaverStatusChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_EnergySaverStatusChanged>;
        [[nodiscard]] auto EnergySaverStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto EnergySaverStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto BatteryStatus() const;
        auto BatteryStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using BatteryStatusChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_BatteryStatusChanged>;
        [[nodiscard]] auto BatteryStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto BatteryStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto PowerSupplyStatus() const;
        auto PowerSupplyStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using PowerSupplyStatusChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_PowerSupplyStatusChanged>;
        [[nodiscard]] auto PowerSupplyStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto PowerSupplyStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto RemainingChargePercent() const;
        auto RemainingChargePercentChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using RemainingChargePercentChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_RemainingChargePercentChanged>;
        [[nodiscard]] auto RemainingChargePercentChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto RemainingChargePercentChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto RemainingDischargeTime() const;
        auto RemainingDischargeTimeChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using RemainingDischargeTimeChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_RemainingDischargeTimeChanged>;
        [[nodiscard]] auto RemainingDischargeTimeChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto RemainingDischargeTimeChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto PowerSourceKind() const;
        auto PowerSourceKindChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using PowerSourceKindChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_PowerSourceKindChanged>;
        [[nodiscard]] auto PowerSourceKindChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto PowerSourceKindChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto DisplayStatus() const;
        auto DisplayStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using DisplayStatusChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_DisplayStatusChanged>;
        [[nodiscard]] auto DisplayStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto DisplayStatusChanged(winrt::event_token const& token) const noexcept;
        auto SystemIdleStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SystemIdleStatusChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_SystemIdleStatusChanged>;
        [[nodiscard]] auto SystemIdleStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto SystemIdleStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto EffectivePowerMode() const;
        auto EffectivePowerModeChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using EffectivePowerModeChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_EffectivePowerModeChanged>;
        [[nodiscard]] auto EffectivePowerModeChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto EffectivePowerModeChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto UserPresenceStatus() const;
        auto UserPresenceStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using UserPresenceStatusChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_UserPresenceStatusChanged>;
        [[nodiscard]] auto UserPresenceStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto UserPresenceStatusChanged(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto SystemSuspendStatus() const;
        auto SystemSuspendStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        using SystemSuspendStatusChanged_revoker = impl::event_revoker<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics, &impl::abi_t<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>::remove_SystemSuspendStatusChanged>;
        [[nodiscard]] auto SystemSuspendStatusChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto SystemSuspendStatusChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics>
    {
        template <typename D> using type = consume_Microsoft_Windows_System_Power_IPowerManagerStatics<D>;
    };
    template <typename D>
    struct consume_Microsoft_Windows_System_Power_IPowerManagerStatics2
    {
        [[nodiscard]] auto EffectivePowerMode2() const;
    };
    template <> struct consume<winrt::Microsoft::Windows::System::Power::IPowerManagerStatics2>
    {
        template <typename D> using type = consume_Microsoft_Windows_System_Power_IPowerManagerStatics2<D>;
    };
}
#endif
