// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Reflection.RuntimeEventInfo
#include "System/Reflection/RuntimeEventInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MonoEvent
  class MonoEvent : public System::Reflection::RuntimeEventInfo {
    public:
    // private System.IntPtr klass
    // Offset: 0x18
    System::IntPtr klass;
    // private System.IntPtr handle
    // Offset: 0x20
    System::IntPtr handle;
    // public override System.Reflection.MethodInfo GetAddMethod(System.Boolean nonPublic)
    // Offset: 0x113BB90
    // Implemented from: System.Reflection.EventInfo
    // Base method: System.Reflection.MethodInfo EventInfo::GetAddMethod(System.Boolean nonPublic)
    System::Reflection::MethodInfo* GetAddMethod(bool nonPublic);
    // public override System.Reflection.MethodInfo GetRaiseMethod(System.Boolean nonPublic)
    // Offset: 0x113BC5C
    // Implemented from: System.Reflection.EventInfo
    // Base method: System.Reflection.MethodInfo EventInfo::GetRaiseMethod(System.Boolean nonPublic)
    System::Reflection::MethodInfo* GetRaiseMethod(bool nonPublic);
    // public override System.Reflection.MethodInfo GetRemoveMethod(System.Boolean nonPublic)
    // Offset: 0x113BCE0
    // Implemented from: System.Reflection.EventInfo
    // Base method: System.Reflection.MethodInfo EventInfo::GetRemoveMethod(System.Boolean nonPublic)
    System::Reflection::MethodInfo* GetRemoveMethod(bool nonPublic);
    // public override System.Type get_DeclaringType()
    // Offset: 0x113BD64
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.Type get_ReflectedType()
    // Offset: 0x113BD94
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.String get_Name()
    // Offset: 0x113BDC4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.String ToString()
    // Offset: 0x113BDF4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x113BE74
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x113BEF4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x113BF6C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x113BFEC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> MemberInfo::GetCustomAttributesData()
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
    // public System.Void .ctor()
    // Offset: 0x113BFF4
    // Implemented from: System.Reflection.RuntimeEventInfo
    // Base method: System.Void RuntimeEventInfo::.ctor()
    // Base method: System.Void EventInfo::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoEvent* New_ctor();
  }; // System.Reflection.MonoEvent
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoEvent*, "System.Reflection", "MonoEvent");
#pragma pack(pop)
