// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Autogenerated type: UnityEngine.Rendering.CommandBufferExecutionFlags
  struct CommandBufferExecutionFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.Rendering.CommandBufferExecutionFlags None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Rendering.CommandBufferExecutionFlags None
    static UnityEngine::Rendering::CommandBufferExecutionFlags _get_None();
    // Set static field: static public UnityEngine.Rendering.CommandBufferExecutionFlags None
    static void _set_None(UnityEngine::Rendering::CommandBufferExecutionFlags value);
    // static field const value: static public UnityEngine.Rendering.CommandBufferExecutionFlags AsyncCompute
    static constexpr const int AsyncCompute = 2;
    // Get static field: static public UnityEngine.Rendering.CommandBufferExecutionFlags AsyncCompute
    static UnityEngine::Rendering::CommandBufferExecutionFlags _get_AsyncCompute();
    // Set static field: static public UnityEngine.Rendering.CommandBufferExecutionFlags AsyncCompute
    static void _set_AsyncCompute(UnityEngine::Rendering::CommandBufferExecutionFlags value);
    // Creating value type constructor for type: CommandBufferExecutionFlags
    CommandBufferExecutionFlags(int value_ = {}) : value{value_} {}
  }; // UnityEngine.Rendering.CommandBufferExecutionFlags
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::CommandBufferExecutionFlags, "UnityEngine.Rendering", "CommandBufferExecutionFlags");
#pragma pack(pop)
