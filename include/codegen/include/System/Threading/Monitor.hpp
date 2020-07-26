// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:33 PM
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
  // Autogenerated type: System.Threading.Monitor
  class Monitor : public ::Il2CppObject {
    public:
    // static public System.Void Enter(System.Object obj)
    // Offset: 0x13C5E54
    static void Enter(::Il2CppObject* obj);
    // static public System.Void Enter(System.Object obj, System.Boolean lockTaken)
    // Offset: 0x13C5444
    static void Enter(::Il2CppObject* obj, bool& lockTaken);
    // static private System.Void ThrowLockTakenException()
    // Offset: 0x13C5E58
    static void ThrowLockTakenException();
    // static public System.Void Exit(System.Object obj)
    // Offset: 0x13C5464
    static void Exit(::Il2CppObject* obj);
    // static public System.Boolean Wait(System.Object obj, System.Int32 millisecondsTimeout, System.Boolean exitContext)
    // Offset: 0x13C5EF0
    static bool Wait(::Il2CppObject* obj, int millisecondsTimeout, bool exitContext);
    // static public System.Boolean Wait(System.Object obj, System.Int32 millisecondsTimeout)
    // Offset: 0x13C5B5C
    static bool Wait(::Il2CppObject* obj, int millisecondsTimeout);
    // static public System.Void Pulse(System.Object obj)
    // Offset: 0x13C6058
    static void Pulse(::Il2CppObject* obj);
    // static public System.Void PulseAll(System.Object obj)
    // Offset: 0x13C5618
    static void PulseAll(::Il2CppObject* obj);
    // static private System.Boolean Monitor_test_synchronised(System.Object obj)
    // Offset: 0x13C61F4
    static bool Monitor_test_synchronised(::Il2CppObject* obj);
    // static private System.Void Monitor_pulse(System.Object obj)
    // Offset: 0x13C61F8
    static void Monitor_pulse(::Il2CppObject* obj);
    // static private System.Void ObjPulse(System.Object obj)
    // Offset: 0x13C60DC
    static void ObjPulse(::Il2CppObject* obj);
    // static private System.Void Monitor_pulse_all(System.Object obj)
    // Offset: 0x13C61FC
    static void Monitor_pulse_all(::Il2CppObject* obj);
    // static private System.Void ObjPulseAll(System.Object obj)
    // Offset: 0x13C6168
    static void ObjPulseAll(::Il2CppObject* obj);
    // static private System.Boolean Monitor_wait(System.Object obj, System.Int32 ms)
    // Offset: 0x13C6200
    static bool Monitor_wait(::Il2CppObject* obj, int ms);
    // static private System.Boolean ObjWait(System.Boolean exitContext, System.Int32 millisecondsTimeout, System.Object obj)
    // Offset: 0x13C5F88
    static bool ObjWait(bool exitContext, int millisecondsTimeout, ::Il2CppObject* obj);
    // static private System.Void try_enter_with_atomic_var(System.Object obj, System.Int32 millisecondsTimeout, System.Boolean lockTaken)
    // Offset: 0x13C6204
    static void try_enter_with_atomic_var(::Il2CppObject* obj, int millisecondsTimeout, bool& lockTaken);
    // static private System.Void ReliableEnterTimeout(System.Object obj, System.Int32 timeout, System.Boolean lockTaken)
    // Offset: 0x13C6208
    static void ReliableEnterTimeout(::Il2CppObject* obj, int timeout, bool& lockTaken);
    // static private System.Void ReliableEnter(System.Object obj, System.Boolean lockTaken)
    // Offset: 0x13C5EE4
    static void ReliableEnter(::Il2CppObject* obj, bool& lockTaken);
  }; // System.Threading.Monitor
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Monitor*, "System.Threading", "Monitor");
#pragma pack(pop)
