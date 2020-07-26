// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:30 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Runtime.InteropServices._EventInfo
#include "System/Runtime/InteropServices/_EventInfo.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: RuntimeTypeHandle
  struct RuntimeTypeHandle;
}
// Forward declaring namespace: Mono
namespace Mono {
  // Forward declaring type: RuntimeEventHandle
  struct RuntimeEventHandle;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.EventInfo
  class EventInfo : public System::Reflection::MemberInfo, public System::Runtime::InteropServices::_EventInfo {
    public:
    // Nested type: System::Reflection::EventInfo::AddEventAdapter
    class AddEventAdapter;
    // private System.Reflection.EventInfo/AddEventAdapter cached_add_event
    // Offset: 0x10
    System::Reflection::EventInfo::AddEventAdapter* cached_add_event;
    // public System.Type get_EventHandlerType()
    // Offset: 0x1352D44
    System::Type* get_EventHandlerType();
    // public System.Reflection.MethodInfo GetAddMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetAddMethod(bool nonPublic);
    // public System.Reflection.MethodInfo GetRaiseMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetRaiseMethod(bool nonPublic);
    // public System.Reflection.MethodInfo GetRemoveMethod(System.Boolean nonPublic)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetRemoveMethod(bool nonPublic);
    // static private System.Reflection.EventInfo internal_from_handle_type(System.IntPtr event_handle, System.IntPtr type_handle)
    // Offset: 0x1352E84
    static System::Reflection::EventInfo* internal_from_handle_type(System::IntPtr event_handle, System::IntPtr type_handle);
    // static System.Reflection.EventInfo GetEventFromHandle(Mono.RuntimeEventHandle handle, System.RuntimeTypeHandle reflectedType)
    // Offset: 0x1352E88
    static System::Reflection::EventInfo* GetEventFromHandle(Mono::RuntimeEventHandle handle, System::RuntimeTypeHandle reflectedType);
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x1352DB8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // protected System.Void .ctor()
    // Offset: 0x1352DC0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static EventInfo* New_ctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1352DC8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1352DD4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.EventInfo
  // static public System.Boolean op_Equality(System.Reflection.EventInfo left, System.Reflection.EventInfo right)
  // Offset: 0x1352DDC
  bool operator ==(System::Reflection::EventInfo* left, System::Reflection::EventInfo& right);
  // static public System.Boolean op_Inequality(System.Reflection.EventInfo left, System.Reflection.EventInfo right)
  // Offset: 0x1352E28
  bool operator !=(System::Reflection::EventInfo* left, System::Reflection::EventInfo& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::EventInfo*, "System.Reflection", "EventInfo");
#pragma pack(pop)
