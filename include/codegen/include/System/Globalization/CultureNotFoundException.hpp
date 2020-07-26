// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:32 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.ArgumentException
#include "System/ArgumentException.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Globalization
namespace System::Globalization {
  // Autogenerated type: System.Globalization.CultureNotFoundException
  class CultureNotFoundException : public System::ArgumentException, public System::Runtime::Serialization::ISerializable {
    public:
    // private System.String m_invalidCultureName
    // Offset: 0x90
    ::Il2CppString* m_invalidCultureName;
    // private System.Nullable`1<System.Int32> m_invalidCultureId
    // Offset: 0x98
    System::Nullable_1<int> m_invalidCultureId;
    // public System.Void .ctor(System.String paramName, System.String invalidCultureName, System.String message)
    // Offset: 0x12A1AD4
    static CultureNotFoundException* New_ctor(::Il2CppString* paramName, ::Il2CppString* invalidCultureName, ::Il2CppString* message);
    // public System.Nullable`1<System.Int32> get_InvalidCultureId()
    // Offset: 0x12A1DF4
    System::Nullable_1<int> get_InvalidCultureId();
    // public System.String get_InvalidCultureName()
    // Offset: 0x12A1DFC
    ::Il2CppString* get_InvalidCultureName();
    // static private System.String get_DefaultMessage()
    // Offset: 0x12A1A88
    static ::Il2CppString* get_DefaultMessage();
    // private System.String get_FormatedInvalidCultureId()
    // Offset: 0x12A1E04
    ::Il2CppString* get_FormatedInvalidCultureId();
    // public System.Void .ctor()
    // Offset: 0x12A1A5C
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static CultureNotFoundException* New_ctor();
    // public System.Void .ctor(System.String paramName, System.String message)
    // Offset: 0x129E8F0
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.String paramName, System.String message)
    static CultureNotFoundException* New_ctor(::Il2CppString* paramName, ::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12A1B10
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static CultureNotFoundException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x12A1C8C
    // Implemented from: System.ArgumentException
    // Base method: System.Void ArgumentException::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String get_Message()
    // Offset: 0x12A1F0C
    // Implemented from: System.ArgumentException
    // Base method: System.String ArgumentException::get_Message()
    ::Il2CppString* get_Message();
  }; // System.Globalization.CultureNotFoundException
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::CultureNotFoundException*, "System.Globalization", "CultureNotFoundException");
#pragma pack(pop)
