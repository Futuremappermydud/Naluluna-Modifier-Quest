// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.EChaperoneConfigFile
  struct EChaperoneConfigFile : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public Valve.VR.EChaperoneConfigFile Live
    static constexpr const int Live = 1;
    // Get static field: static public Valve.VR.EChaperoneConfigFile Live
    static Valve::VR::EChaperoneConfigFile _get_Live();
    // Set static field: static public Valve.VR.EChaperoneConfigFile Live
    static void _set_Live(Valve::VR::EChaperoneConfigFile value);
    // static field const value: static public Valve.VR.EChaperoneConfigFile Temp
    static constexpr const int Temp = 2;
    // Get static field: static public Valve.VR.EChaperoneConfigFile Temp
    static Valve::VR::EChaperoneConfigFile _get_Temp();
    // Set static field: static public Valve.VR.EChaperoneConfigFile Temp
    static void _set_Temp(Valve::VR::EChaperoneConfigFile value);
    // Creating value type constructor for type: EChaperoneConfigFile
    EChaperoneConfigFile(int value_ = {}) : value{value_} {}
  }; // Valve.VR.EChaperoneConfigFile
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::EChaperoneConfigFile, "Valve.VR", "EChaperoneConfigFile");
#pragma pack(pop)
