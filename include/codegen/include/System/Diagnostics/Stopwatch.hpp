// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:17 PM
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.Stopwatch
  class Stopwatch : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int64 Frequency
    static int64_t _get_Frequency();
    // Set static field: static public readonly System.Int64 Frequency
    static void _set_Frequency(int64_t value);
    // Get static field: static public readonly System.Boolean IsHighResolution
    static bool _get_IsHighResolution();
    // Set static field: static public readonly System.Boolean IsHighResolution
    static void _set_IsHighResolution(bool value);
    // private System.Int64 elapsed
    // Offset: 0x10
    int64_t elapsed;
    // private System.Int64 started
    // Offset: 0x18
    int64_t started;
    // private System.Boolean is_running
    // Offset: 0x20
    bool is_running;
    // static public System.Int64 GetTimestamp()
    // Offset: 0xF4A580
    static int64_t GetTimestamp();
    // public System.TimeSpan get_Elapsed()
    // Offset: 0xF4A58C
    System::TimeSpan get_Elapsed();
    // public System.Int64 get_ElapsedMilliseconds()
    // Offset: 0xF4A728
    int64_t get_ElapsedMilliseconds();
    // public System.Int64 get_ElapsedTicks()
    // Offset: 0xF4A6A8
    int64_t get_ElapsedTicks();
    // public System.Void Start()
    // Offset: 0xF4A834
    void Start();
    // public System.Void Stop()
    // Offset: 0xF4A8AC
    void Stop();
    // static private System.Void .cctor()
    // Offset: 0xF4A934
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0xF4A584
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Stopwatch* New_ctor();
  }; // System.Diagnostics.Stopwatch
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Stopwatch*, "System.Diagnostics", "Stopwatch");
#pragma pack(pop)
