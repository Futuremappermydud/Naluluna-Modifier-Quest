// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:45 PM
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
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.TimeoutHelper
  class TimeoutHelper : public ::Il2CppObject {
    public:
    // static public System.UInt32 GetTime()
    // Offset: 0xCC4BA4
    static uint GetTime();
    // static public System.Int32 UpdateTimeOut(System.UInt32 startTime, System.Int32 originalWaitMillisecondsTimeout)
    // Offset: 0xCC5034
    static int UpdateTimeOut(uint startTime, int originalWaitMillisecondsTimeout);
  }; // System.Threading.TimeoutHelper
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::TimeoutHelper*, "System.Threading", "TimeoutHelper");
#pragma pack(pop)
