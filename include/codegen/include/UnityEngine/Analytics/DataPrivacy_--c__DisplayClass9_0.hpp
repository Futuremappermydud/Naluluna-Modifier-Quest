// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: UnityEngine.Analytics.DataPrivacy
#include "UnityEngine/Analytics/DataPrivacy.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: UnityEngine.Analytics
namespace UnityEngine::Analytics {
  // Autogenerated type: UnityEngine.Analytics.DataPrivacy/<>c__DisplayClass9_0
  class DataPrivacy::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.Networking.UnityWebRequest www
    // Offset: 0x10
    UnityEngine::Networking::UnityWebRequest* www;
    // public System.Action`1<System.String> failure
    // Offset: 0x18
    System::Action_1<::Il2CppString*>* failure;
    // public System.Action`1<System.String> success
    // Offset: 0x20
    System::Action_1<::Il2CppString*>* success;
    // System.Void <FetchPrivacyUrl>b__0(UnityEngine.AsyncOperation async2)
    // Offset: 0x1960FA4
    void $FetchPrivacyUrl$b__0(UnityEngine::AsyncOperation* async2);
    // public System.Void .ctor()
    // Offset: 0x1960F9C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DataPrivacy::$$c__DisplayClass9_0* New_ctor();
  }; // UnityEngine.Analytics.DataPrivacy/<>c__DisplayClass9_0
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Analytics::DataPrivacy::$$c__DisplayClass9_0*, "UnityEngine.Analytics", "DataPrivacy/<>c__DisplayClass9_0");
#pragma pack(pop)
