// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:06 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OculusInit
#include "GlobalNamespace/OculusInit.hpp"
// Including type: Oculus.Platform.Message
#include "Oculus/Platform/Message.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusInit/<>c
  class OculusInit::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OculusInit/<>c <>9
    static GlobalNamespace::OculusInit::$$c* _get_$$9();
    // Set static field: static public readonly OculusInit/<>c <>9
    static void _set_$$9(GlobalNamespace::OculusInit::$$c* value);
    // Get static field: static public Oculus.Platform.Message/Callback <>9__2_0
    static Oculus::Platform::Message::Callback* _get_$$9__2_0();
    // Set static field: static public Oculus.Platform.Message/Callback <>9__2_0
    static void _set_$$9__2_0(Oculus::Platform::Message::Callback* value);
    // static private System.Void .cctor()
    // Offset: 0xC2443C
    static void _cctor();
    // System.Void <InitCallback>b__2_0(Oculus.Platform.Message message)
    // Offset: 0xC244AC
    void $InitCallback$b__2_0(Oculus::Platform::Message* message);
    // public System.Void .ctor()
    // Offset: 0xC244A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusInit::$$c* New_ctor();
  }; // OculusInit/<>c
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusInit::$$c*, "", "OculusInit/<>c");
#pragma pack(pop)
