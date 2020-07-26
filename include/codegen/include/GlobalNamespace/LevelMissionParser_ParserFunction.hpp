// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: LevelMissionParser
#include "GlobalNamespace/LevelMissionParser.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelMissionParser/ParserFunction
  class LevelMissionParser::ParserFunction : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xBE0154
    static LevelMissionParser::ParserFunction* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(System.Single[] functionParams, System.Int32 paramCount)
    // Offset: 0xBDFD1C
    bool Invoke(::Array<float>* functionParams, int paramCount);
    // public System.IAsyncResult BeginInvoke(System.Single[] functionParams, System.Int32 paramCount, System.AsyncCallback callback, System.Object object)
    // Offset: 0xBE0168
    System::IAsyncResult* BeginInvoke(::Array<float>* functionParams, int paramCount, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0xBE0204
    bool EndInvoke(System::IAsyncResult* result);
  }; // LevelMissionParser/ParserFunction
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelMissionParser::ParserFunction*, "", "LevelMissionParser/ParserFunction");
#pragma pack(pop)
