// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:18 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CoroutineHelpers
  class CoroutineHelpers : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::CoroutineHelpers::$ExecuteAfterDelayCoroutine$d__0
    class $ExecuteAfterDelayCoroutine$d__0;
    // static public System.Collections.IEnumerator ExecuteAfterDelayCoroutine(System.Action action, System.Single time)
    // Offset: 0xC99774
    static System::Collections::IEnumerator* ExecuteAfterDelayCoroutine(System::Action* action, float time);
    // public System.Void .ctor()
    // Offset: 0xC9982C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CoroutineHelpers* New_ctor();
  }; // CoroutineHelpers
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CoroutineHelpers*, "", "CoroutineHelpers");
#pragma pack(pop)
