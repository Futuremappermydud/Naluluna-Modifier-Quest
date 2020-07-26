// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:01 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: FileCompressionHelper
#include "GlobalNamespace/FileCompressionHelper.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FileCompressionHelper/<>c__DisplayClass0_0
  class FileCompressionHelper::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Boolean success
    // Offset: 0x10
    bool success;
    // public System.String sourceDirectoryName
    // Offset: 0x18
    ::Il2CppString* sourceDirectoryName;
    // public System.String destinationArchiveFileName
    // Offset: 0x20
    ::Il2CppString* destinationArchiveFileName;
    // public System.Action`1<System.Boolean> finishCallback
    // Offset: 0x28
    System::Action_1<bool>* finishCallback;
    // System.Void <CreateZipFromDirectoryAsync>b__0()
    // Offset: 0xC9B6E4
    void $CreateZipFromDirectoryAsync$b__0();
    // System.Void <CreateZipFromDirectoryAsync>b__1()
    // Offset: 0xC9B6F0
    void $CreateZipFromDirectoryAsync$b__1();
    // public System.Void .ctor()
    // Offset: 0xC9B274
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FileCompressionHelper::$$c__DisplayClass0_0* New_ctor();
  }; // FileCompressionHelper/<>c__DisplayClass0_0
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileCompressionHelper::$$c__DisplayClass0_0*, "", "FileCompressionHelper/<>c__DisplayClass0_0");
#pragma pack(pop)
