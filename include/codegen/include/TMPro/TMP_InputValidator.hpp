// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_InputValidator
  class TMP_InputValidator : public UnityEngine::ScriptableObject {
    public:
    // public System.Char Validate(System.String text, System.Int32 pos, System.Char ch)
    // Offset: 0xFFFFFFFF
    ::Il2CppChar Validate(::Il2CppString*& text, int& pos, ::Il2CppChar ch);
    // protected System.Void .ctor()
    // Offset: 0xB97704
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_InputValidator* New_ctor();
  }; // TMPro.TMP_InputValidator
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_InputValidator*, "TMPro", "TMP_InputValidator");
#pragma pack(pop)
