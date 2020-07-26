// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:35 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Security.Principal.IIdentity
#include "System/Security/Principal/IIdentity.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Claims
namespace System::Security::Claims {
  // Forward declaring type: Claim
  class Claim;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: Collection`1<T>
  template<typename T>
  class Collection_1;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Security.Claims
namespace System::Security::Claims {
  // Autogenerated type: System.Security.Claims.ClaimsIdentity
  class ClaimsIdentity : public ::Il2CppObject, public System::Security::Principal::IIdentity {
    public:
    // Nested type: System::Security::Claims::ClaimsIdentity::$get_Claims$d__51
    class $get_Claims$d__51;
    // private System.Byte[] m_userSerializationData
    // Offset: 0x10
    ::Array<uint8_t>* m_userSerializationData;
    // private System.Collections.Generic.List`1<System.Security.Claims.Claim> m_instanceClaims
    // Offset: 0x18
    System::Collections::Generic::List_1<System::Security::Claims::Claim*>* m_instanceClaims;
    // private System.Collections.ObjectModel.Collection`1<System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim>> m_externalClaims
    // Offset: 0x20
    System::Collections::ObjectModel::Collection_1<System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>*>* m_externalClaims;
    // private System.String m_nameType
    // Offset: 0x28
    ::Il2CppString* m_nameType;
    // private System.String m_roleType
    // Offset: 0x30
    ::Il2CppString* m_roleType;
    // private System.String m_version
    // Offset: 0x38
    ::Il2CppString* m_version;
    // private System.Security.Claims.ClaimsIdentity m_actor
    // Offset: 0x40
    System::Security::Claims::ClaimsIdentity* m_actor;
    // private System.String m_authenticationType
    // Offset: 0x48
    ::Il2CppString* m_authenticationType;
    // private System.Object m_bootstrapContext
    // Offset: 0x50
    ::Il2CppObject* m_bootstrapContext;
    // private System.String m_label
    // Offset: 0x58
    ::Il2CppString* m_label;
    // private System.String m_serializedNameType
    // Offset: 0x60
    ::Il2CppString* m_serializedNameType;
    // private System.String m_serializedRoleType
    // Offset: 0x68
    ::Il2CppString* m_serializedRoleType;
    // private System.String m_serializedClaims
    // Offset: 0x70
    ::Il2CppString* m_serializedClaims;
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims)
    // Offset: 0xDCF64C
    static ClaimsIdentity* New_ctor(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims);
    // public System.Void .ctor(System.Security.Principal.IIdentity identity, System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims, System.String authenticationType, System.String nameType, System.String roleType)
    // Offset: 0xDCF668
    static ClaimsIdentity* New_ctor(System::Security::Principal::IIdentity* identity, System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims, ::Il2CppString* authenticationType, ::Il2CppString* nameType, ::Il2CppString* roleType);
    // System.Void .ctor(System.Security.Principal.IIdentity identity, System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims, System.String authenticationType, System.String nameType, System.String roleType, System.Boolean checkAuthType)
    // Offset: 0xDCF670
    static ClaimsIdentity* New_ctor(System::Security::Principal::IIdentity* identity, System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims, ::Il2CppString* authenticationType, ::Il2CppString* nameType, ::Il2CppString* roleType, bool checkAuthType);
    // protected System.Void .ctor(System.Security.Claims.ClaimsIdentity other)
    // Offset: 0xDD00CC
    static ClaimsIdentity* New_ctor(System::Security::Claims::ClaimsIdentity* other);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xDD02D4
    static ClaimsIdentity* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Security.Claims.ClaimsIdentity get_Actor()
    // Offset: 0xDD0B2C
    System::Security::Claims::ClaimsIdentity* get_Actor();
    // public System.Void set_Actor(System.Security.Claims.ClaimsIdentity value)
    // Offset: 0xDD0B34
    void set_Actor(System::Security::Claims::ClaimsIdentity* value);
    // public System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> get_Claims()
    // Offset: 0xDD0BFC
    System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* get_Claims();
    // public System.String get_NameClaimType()
    // Offset: 0xDD0CE8
    ::Il2CppString* get_NameClaimType();
    // public System.Security.Claims.ClaimsIdentity Clone()
    // Offset: 0xDD0CF0
    System::Security::Claims::ClaimsIdentity* Clone();
    // public System.Void AddClaim(System.Security.Claims.Claim claim)
    // Offset: 0xDD0E78
    void AddClaim(System::Security::Claims::Claim* claim);
    // private System.Void SafeAddClaims(System.Collections.Generic.IEnumerable`1<System.Security.Claims.Claim> claims)
    // Offset: 0xDCFD44
    void SafeAddClaims(System::Collections::Generic::IEnumerable_1<System::Security::Claims::Claim*>* claims);
    // private System.Void SafeAddClaim(System.Security.Claims.Claim claim)
    // Offset: 0xDD0024
    void SafeAddClaim(System::Security::Claims::Claim* claim);
    // public System.Security.Claims.Claim FindFirst(System.String type)
    // Offset: 0xDD0F5C
    System::Security::Claims::Claim* FindFirst(::Il2CppString* type);
    // private System.Void OnSerializingMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xDD153C
    void OnSerializingMethod(System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserializedMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xDD17AC
    void OnDeserializedMethod(System::Runtime::Serialization::StreamingContext context);
    // private System.Void OnDeserializingMethod(System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xDD1B3C
    void OnDeserializingMethod(System::Runtime::Serialization::StreamingContext context);
    // protected System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xDD1C04
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void DeserializeClaims(System.String serializedClaims)
    // Offset: 0xDD188C
    void DeserializeClaims(::Il2CppString* serializedClaims);
    // private System.String SerializeClaims()
    // Offset: 0xDD15D4
    ::Il2CppString* SerializeClaims();
    // private System.Boolean IsCircular(System.Security.Claims.ClaimsIdentity subject)
    // Offset: 0xDCFD0C
    bool IsCircular(System::Security::Claims::ClaimsIdentity* subject);
    // private System.Void Deserialize(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context, System.Boolean useContext)
    // Offset: 0xDD0440
    void Deserialize(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context, bool useContext);
    // public System.Void .ctor()
    // Offset: 0xDCF630
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ClaimsIdentity* New_ctor();
    // public System.String get_AuthenticationType()
    // Offset: 0xDD0B24
    // Implemented from: System.Security.Principal.IIdentity
    // Base method: System.String IIdentity::get_AuthenticationType()
    ::Il2CppString* get_AuthenticationType();
    // public System.String get_Name()
    // Offset: 0xDD0CC0
    // Implemented from: System.Security.Principal.IIdentity
    // Base method: System.String IIdentity::get_Name()
    ::Il2CppString* get_Name();
  }; // System.Security.Claims.ClaimsIdentity
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Claims::ClaimsIdentity*, "System.Security.Claims", "ClaimsIdentity");
#pragma pack(pop)
