// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RandomValueToShader
  class RandomValueToShader : public GlobalNamespace::PersistentScriptableObject {
    public:
    // private System.Int32 _lastFrameNum
    // Offset: 0x18
    int lastFrameNum;
    // Get static field: static private readonly System.Int32 _randomValueID
    static int _get__randomValueID();
    // Set static field: static private readonly System.Int32 _randomValueID
    static void _set__randomValueID(int value);
    // public System.Void SetRandomValueToShaders()
    // Offset: 0x180F364
    void SetRandomValueToShaders();
    // public System.Void .ctor()
    // Offset: 0x1816FCC
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RandomValueToShader* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1816FDC
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // RandomValueToShader
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RandomValueToShader*, "", "RandomValueToShader");
#pragma pack(pop)
