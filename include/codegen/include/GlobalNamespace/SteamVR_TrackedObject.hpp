// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: SteamVR_Events
#include "GlobalNamespace/SteamVR_Events.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: TrackedDevicePose_t
  struct TrackedDevicePose_t;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SteamVR_TrackedObject
  class SteamVR_TrackedObject : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::SteamVR_TrackedObject::EIndex
    struct EIndex;
    // Autogenerated type: SteamVR_TrackedObject/EIndex
    struct EIndex : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public SteamVR_TrackedObject/EIndex None
      static constexpr const int None = -1;
      // Get static field: static public SteamVR_TrackedObject/EIndex None
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_None();
      // Set static field: static public SteamVR_TrackedObject/EIndex None
      static void _set_None(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Hmd
      static constexpr const int Hmd = 0;
      // Get static field: static public SteamVR_TrackedObject/EIndex Hmd
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Hmd();
      // Set static field: static public SteamVR_TrackedObject/EIndex Hmd
      static void _set_Hmd(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device1
      static constexpr const int Device1 = 1;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device1
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device1();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device1
      static void _set_Device1(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device2
      static constexpr const int Device2 = 2;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device2
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device2();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device2
      static void _set_Device2(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device3
      static constexpr const int Device3 = 3;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device3
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device3();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device3
      static void _set_Device3(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device4
      static constexpr const int Device4 = 4;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device4
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device4();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device4
      static void _set_Device4(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device5
      static constexpr const int Device5 = 5;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device5
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device5();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device5
      static void _set_Device5(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device6
      static constexpr const int Device6 = 6;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device6
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device6();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device6
      static void _set_Device6(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device7
      static constexpr const int Device7 = 7;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device7
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device7();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device7
      static void _set_Device7(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device8
      static constexpr const int Device8 = 8;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device8
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device8();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device8
      static void _set_Device8(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device9
      static constexpr const int Device9 = 9;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device9
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device9();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device9
      static void _set_Device9(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device10
      static constexpr const int Device10 = 10;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device10
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device10();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device10
      static void _set_Device10(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device11
      static constexpr const int Device11 = 11;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device11
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device11();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device11
      static void _set_Device11(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device12
      static constexpr const int Device12 = 12;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device12
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device12();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device12
      static void _set_Device12(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device13
      static constexpr const int Device13 = 13;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device13
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device13();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device13
      static void _set_Device13(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device14
      static constexpr const int Device14 = 14;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device14
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device14();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device14
      static void _set_Device14(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // static field const value: static public SteamVR_TrackedObject/EIndex Device15
      static constexpr const int Device15 = 15;
      // Get static field: static public SteamVR_TrackedObject/EIndex Device15
      static GlobalNamespace::SteamVR_TrackedObject::EIndex _get_Device15();
      // Set static field: static public SteamVR_TrackedObject/EIndex Device15
      static void _set_Device15(GlobalNamespace::SteamVR_TrackedObject::EIndex value);
      // Creating value type constructor for type: EIndex
      EIndex(int value_ = {}) : value{value_} {}
    }; // SteamVR_TrackedObject/EIndex
    // public SteamVR_TrackedObject/EIndex index
    // Offset: 0x18
    GlobalNamespace::SteamVR_TrackedObject::EIndex index;
    // public UnityEngine.Transform origin
    // Offset: 0x20
    UnityEngine::Transform* origin;
    // private System.Boolean <isValid>k__BackingField
    // Offset: 0x28
    bool isValid;
    // private SteamVR_Events/Action newPosesAction
    // Offset: 0x30
    GlobalNamespace::SteamVR_Events::Action* newPosesAction;
    // public System.Boolean get_isValid()
    // Offset: 0xFD80FC
    bool get_isValid();
    // private System.Void set_isValid(System.Boolean value)
    // Offset: 0xFD8104
    void set_isValid(bool value);
    // private System.Void OnNewPoses(Valve.VR.TrackedDevicePose_t[] poses)
    // Offset: 0xFD8110
    void OnNewPoses(::Array<Valve::VR::TrackedDevicePose_t>* poses);
    // private System.Void OnEnable()
    // Offset: 0xFD8424
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xFD84D4
    void OnDisable();
    // public System.Void SetDeviceIndex(System.Int32 index)
    // Offset: 0xFD850C
    void SetDeviceIndex(int index);
    // private System.Void .ctor()
    // Offset: 0xFD836C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SteamVR_TrackedObject* New_ctor();
  }; // SteamVR_TrackedObject
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_TrackedObject*, "", "SteamVR_TrackedObject");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SteamVR_TrackedObject::EIndex, "", "SteamVR_TrackedObject/EIndex");
#pragma pack(pop)
