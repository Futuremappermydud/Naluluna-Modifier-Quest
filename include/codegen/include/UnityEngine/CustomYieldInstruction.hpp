// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:29 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.CustomYieldInstruction
  class CustomYieldInstruction : public ::Il2CppObject, public System::Collections::IEnumerator {
    public:
    // public System.Boolean get_keepWaiting()
    // Offset: 0xFFFFFFFF
    bool get_keepWaiting();
    // public System.Object get_Current()
    // Offset: 0x12F10B0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x12F10B8
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x12F10C4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // protected System.Void .ctor()
    // Offset: 0x12F10C8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CustomYieldInstruction* New_ctor();
  }; // UnityEngine.CustomYieldInstruction
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CustomYieldInstruction*, "UnityEngine", "CustomYieldInstruction");
#pragma pack(pop)
