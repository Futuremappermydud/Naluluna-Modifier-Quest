// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: CommandBufferGOCore
#include "GlobalNamespace/CommandBufferGOCore.hpp"
// Including type: UnityEngine.Rendering.CameraEvent
#include "UnityEngine/Rendering/CameraEvent.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: CommandBufferOwners
  class CommandBufferOwners;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CommandBufferGrabPass
  class CommandBufferGrabPass : public GlobalNamespace::CommandBufferGOCore {
    public:
    // private System.String _textureName
    // Offset: 0x28
    ::Il2CppString* textureName;
    // private UnityEngine.Rendering.CameraEvent _cameraEvent
    // Offset: 0x30
    UnityEngine::Rendering::CameraEvent cameraEvent;
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> _cameras
    static System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* _get__cameras();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> _cameras
    static void _set__cameras(System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x1910928
    static void NoDomainReloadInit();
    // protected override UnityEngine.Rendering.CommandBuffer CreateCommandBuffer(UnityEngine.Camera camera)
    // Offset: 0x19109B8
    // Implemented from: CommandBufferGOCore
    // Base method: UnityEngine.Rendering.CommandBuffer CommandBufferGOCore::CreateCommandBuffer(UnityEngine.Camera camera)
    UnityEngine::Rendering::CommandBuffer* CreateCommandBuffer(UnityEngine::Camera* camera);
    // protected override System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> CamerasDict()
    // Offset: 0x1910B94
    // Implemented from: CommandBufferGOCore
    // Base method: System.Collections.Generic.Dictionary`2<UnityEngine.Camera,CommandBufferOwners> CommandBufferGOCore::CamerasDict()
    System::Collections::Generic::Dictionary_2<UnityEngine::Camera*, GlobalNamespace::CommandBufferOwners*>* CamerasDict();
    // protected override UnityEngine.Rendering.CameraEvent CommandBufferCameraEvent()
    // Offset: 0x1910BFC
    // Implemented from: CommandBufferGOCore
    // Base method: UnityEngine.Rendering.CameraEvent CommandBufferGOCore::CommandBufferCameraEvent()
    UnityEngine::Rendering::CameraEvent CommandBufferCameraEvent();
    // public System.Void .ctor()
    // Offset: 0x1910C04
    // Implemented from: CommandBufferGOCore
    // Base method: System.Void CommandBufferGOCore::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CommandBufferGrabPass* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x1910C6C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // CommandBufferGrabPass
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CommandBufferGrabPass*, "", "CommandBufferGrabPass");
#pragma pack(pop)
