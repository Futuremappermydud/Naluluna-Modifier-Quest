// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: FileBrowserModel
#include "GlobalNamespace/FileBrowserModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FileBrowserItem
  class FileBrowserItem;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: FileBrowserModel/<>c__DisplayClass0_0
  class FileBrowserModel::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public FileBrowserItem[] items
    // Offset: 0x10
    ::Array<GlobalNamespace::FileBrowserItem*>* items;
    // public System.String direcotryPath
    // Offset: 0x18
    ::Il2CppString* direcotryPath;
    // public System.String[] extensions
    // Offset: 0x20
    ::Array<::Il2CppString*>* extensions;
    // public System.Action`1<FileBrowserItem[]> callback
    // Offset: 0x28
    System::Action_1<::Array<GlobalNamespace::FileBrowserItem*>*>* callback;
    // System.Void <GetContentOfDirectory>b__0()
    // Offset: 0xBED6D4
    void $GetContentOfDirectory$b__0();
    // System.Void <GetContentOfDirectory>b__1()
    // Offset: 0xBED708
    void $GetContentOfDirectory$b__1();
    // public System.Void .ctor()
    // Offset: 0xBED248
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FileBrowserModel::$$c__DisplayClass0_0* New_ctor();
  }; // FileBrowserModel/<>c__DisplayClass0_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FileBrowserModel::$$c__DisplayClass0_0*, "", "FileBrowserModel/<>c__DisplayClass0_0");
#pragma pack(pop)
