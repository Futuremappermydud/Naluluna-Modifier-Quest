// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Runtime.InteropServices._MethodBase
#include "System/Runtime/InteropServices/_MethodBase.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeMethodHandle
  struct RuntimeMethodHandle;
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: RuntimeTypeHandle
  struct RuntimeTypeHandle;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MethodImplAttributes
  struct MethodImplAttributes;
  // Forward declaring type: MethodAttributes
  struct MethodAttributes;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: MethodBody
  class MethodBody;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MethodBase
  class MethodBase : public System::Reflection::MemberInfo, public System::Runtime::InteropServices::_MethodBase {
    public:
    // static public System.Reflection.MethodBase GetMethodFromHandle(System.RuntimeMethodHandle handle)
    // Offset: 0x1355500
    static System::Reflection::MethodBase* GetMethodFromHandle(System::RuntimeMethodHandle handle);
    // System.Reflection.ParameterInfo[] GetParametersNoCopy()
    // Offset: 0x1355748
    ::Array<System::Reflection::ParameterInfo*>* GetParametersNoCopy();
    // public System.Reflection.ParameterInfo[] GetParameters()
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::ParameterInfo*>* GetParameters();
    // public System.Reflection.MethodImplAttributes GetMethodImplementationFlags()
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
    // public System.RuntimeMethodHandle get_MethodHandle()
    // Offset: 0xFFFFFFFF
    System::RuntimeMethodHandle get_MethodHandle();
    // public System.Reflection.MethodAttributes get_Attributes()
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodAttributes get_Attributes();
    // public System.Object Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Invoke(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // public System.Reflection.CallingConventions get_CallingConvention()
    // Offset: 0x1355758
    System::Reflection::CallingConventions get_CallingConvention();
    // public System.Type[] GetGenericArguments()
    // Offset: 0x1355760
    ::Array<System::Type*>* GetGenericArguments();
    // public System.Boolean get_IsGenericMethodDefinition()
    // Offset: 0x13557E0
    bool get_IsGenericMethodDefinition();
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0x13557E8
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericMethod()
    // Offset: 0x13557F0
    bool get_IsGenericMethod();
    // public System.Boolean get_IsSecurityCritical()
    // Offset: 0x13557F8
    bool get_IsSecurityCritical();
    // public System.Object Invoke(System.Object obj, System.Object[] parameters)
    // Offset: 0x1355858
    ::Il2CppObject* Invoke(::Il2CppObject* obj, ::Array<::Il2CppObject*>* parameters);
    // public System.Boolean get_IsPublic()
    // Offset: 0x1355878
    bool get_IsPublic();
    // public System.Boolean get_IsFamily()
    // Offset: 0x13558A4
    bool get_IsFamily();
    // public System.Boolean get_IsStatic()
    // Offset: 0x13558D0
    bool get_IsStatic();
    // public System.Boolean get_IsVirtual()
    // Offset: 0x13558F4
    bool get_IsVirtual();
    // public System.Boolean get_IsAbstract()
    // Offset: 0x1355918
    bool get_IsAbstract();
    // public System.Boolean get_IsConstructor()
    // Offset: 0x135593C
    bool get_IsConstructor();
    // public System.Reflection.MethodBody GetMethodBody()
    // Offset: 0x13559E8
    System::Reflection::MethodBody* GetMethodBody();
    // static System.String ConstructParameters(System.Type[] parameterTypes, System.Reflection.CallingConventions callingConvention, System.Boolean serialization)
    // Offset: 0x1355A48
    static ::Il2CppString* ConstructParameters(::Array<System::Type*>* parameterTypes, System::Reflection::CallingConventions callingConvention, bool serialization);
    // System.String FormatNameAndSig(System.Boolean serialization)
    // Offset: 0x1355C2C
    ::Il2CppString* FormatNameAndSig(bool serialization);
    // System.Type[] GetParameterTypes()
    // Offset: 0x1355D40
    ::Array<System::Type*>* GetParameterTypes();
    // System.Reflection.ParameterInfo[] GetParametersInternal()
    // Offset: 0x1355E74
    ::Array<System::Reflection::ParameterInfo*>* GetParametersInternal();
    // System.Int32 GetParametersCount()
    // Offset: 0x1355E84
    int GetParametersCount();
    // static System.Reflection.MethodBase GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle handle)
    // Offset: 0x1355EB0
    static System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(System::RuntimeMethodHandle handle);
    // static System.Reflection.MethodBase GetMethodFromHandleNoGenericCheck(System.RuntimeMethodHandle handle, System.RuntimeTypeHandle reflectedType)
    // Offset: 0x1355F04
    static System::Reflection::MethodBase* GetMethodFromHandleNoGenericCheck(System::RuntimeMethodHandle handle, System::RuntimeTypeHandle reflectedType);
    // static System.Reflection.MethodBody GetMethodBodyInternal(System.IntPtr handle)
    // Offset: 0x1355F0C
    static System::Reflection::MethodBody* GetMethodBodyInternal(System::IntPtr handle);
    // static System.Reflection.MethodBody GetMethodBody(System.IntPtr handle)
    // Offset: 0x1355F10
    static System::Reflection::MethodBody* GetMethodBody(System::IntPtr handle);
    // static private System.Reflection.MethodBase GetMethodFromHandleInternalType(System.IntPtr method_handle, System.IntPtr type_handle)
    // Offset: 0x1355718
    static System::Reflection::MethodBase* GetMethodFromHandleInternalType(System::IntPtr method_handle, System::IntPtr type_handle);
    // static System.Reflection.MethodBase GetMethodFromHandleInternalType_native(System.IntPtr method_handle, System.IntPtr type_handle, System.Boolean genericCheck)
    // Offset: 0x1355EFC
    static System::Reflection::MethodBase* GetMethodFromHandleInternalType_native(System::IntPtr method_handle, System::IntPtr type_handle, bool genericCheck);
    // protected System.Void .ctor()
    // Offset: 0x134DEC4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    static MethodBase* New_ctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x135573C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x134DF8C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::GetHashCode()
    int GetHashCode();
  }; // System.Reflection.MethodBase
  // static public System.Boolean op_Equality(System.Reflection.MethodBase left, System.Reflection.MethodBase right)
  // Offset: 0x1354454
  bool operator ==(System::Reflection::MethodBase* left, System::Reflection::MethodBase& right);
  // static public System.Boolean op_Inequality(System.Reflection.MethodBase left, System.Reflection.MethodBase right)
  // Offset: 0x1354438
  bool operator !=(System::Reflection::MethodBase* left, System::Reflection::MethodBase& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MethodBase*, "System.Reflection", "MethodBase");
#pragma pack(pop)
