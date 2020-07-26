// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:45 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.GameObjectCreationParameters
  class GameObjectCreationParameters : public ::Il2CppObject {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Name;
    // private System.String <GroupName>k__BackingField
    // Offset: 0x18
    ::Il2CppString* GroupName;
    // private UnityEngine.Transform <ParentTransform>k__BackingField
    // Offset: 0x20
    UnityEngine::Transform* ParentTransform;
    // private System.Func`2<Zenject.InjectContext,UnityEngine.Transform> <ParentTransformGetter>k__BackingField
    // Offset: 0x28
    System::Func_2<Zenject::InjectContext*, UnityEngine::Transform*>* ParentTransformGetter;
    // private System.Nullable`1<UnityEngine.Vector3> <Position>k__BackingField
    // Offset: 0x30
    System::Nullable_1<UnityEngine::Vector3> Position;
    // private System.Nullable`1<UnityEngine.Quaternion> <Rotation>k__BackingField
    // Offset: 0x40
    System::Nullable_1<UnityEngine::Quaternion> Rotation;
    // Get static field: static public readonly Zenject.GameObjectCreationParameters Default
    static Zenject::GameObjectCreationParameters* _get_Default();
    // Set static field: static public readonly Zenject.GameObjectCreationParameters Default
    static void _set_Default(Zenject::GameObjectCreationParameters* value);
    // public System.String get_Name()
    // Offset: 0xF23364
    ::Il2CppString* get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0xF2336C
    void set_Name(::Il2CppString* value);
    // public System.String get_GroupName()
    // Offset: 0xF23374
    ::Il2CppString* get_GroupName();
    // public System.Void set_GroupName(System.String value)
    // Offset: 0xF2337C
    void set_GroupName(::Il2CppString* value);
    // public UnityEngine.Transform get_ParentTransform()
    // Offset: 0xF23384
    UnityEngine::Transform* get_ParentTransform();
    // public System.Void set_ParentTransform(UnityEngine.Transform value)
    // Offset: 0xF2338C
    void set_ParentTransform(UnityEngine::Transform* value);
    // public System.Func`2<Zenject.InjectContext,UnityEngine.Transform> get_ParentTransformGetter()
    // Offset: 0xF23394
    System::Func_2<Zenject::InjectContext*, UnityEngine::Transform*>* get_ParentTransformGetter();
    // public System.Void set_ParentTransformGetter(System.Func`2<Zenject.InjectContext,UnityEngine.Transform> value)
    // Offset: 0xF2339C
    void set_ParentTransformGetter(System::Func_2<Zenject::InjectContext*, UnityEngine::Transform*>* value);
    // public System.Nullable`1<UnityEngine.Vector3> get_Position()
    // Offset: 0xF233A4
    System::Nullable_1<UnityEngine::Vector3> get_Position();
    // public System.Void set_Position(System.Nullable`1<UnityEngine.Vector3> value)
    // Offset: 0xF233B0
    void set_Position(System::Nullable_1<UnityEngine::Vector3> value);
    // public System.Nullable`1<UnityEngine.Quaternion> get_Rotation()
    // Offset: 0xF233B8
    System::Nullable_1<UnityEngine::Quaternion> get_Rotation();
    // public System.Void set_Rotation(System.Nullable`1<UnityEngine.Quaternion> value)
    // Offset: 0xF233CC
    void set_Rotation(System::Nullable_1<UnityEngine::Quaternion> value);
    // public System.Boolean Equals(Zenject.GameObjectCreationParameters that)
    // Offset: 0xF23714
    bool Equals(Zenject::GameObjectCreationParameters* that);
    // static private System.Void .cctor()
    // Offset: 0xF237AC
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0xF233E0
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0xF235CC
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public System.Void .ctor()
    // Offset: 0xF1B018
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GameObjectCreationParameters* New_ctor();
  }; // Zenject.GameObjectCreationParameters
  // static public System.Boolean op_Equality(Zenject.GameObjectCreationParameters left, Zenject.GameObjectCreationParameters right)
  // Offset: 0xF236B8
  bool operator ==(Zenject::GameObjectCreationParameters* left, Zenject::GameObjectCreationParameters& right);
  // static public System.Boolean op_Inequality(Zenject.GameObjectCreationParameters left, Zenject.GameObjectCreationParameters right)
  // Offset: 0xF23788
  bool operator !=(Zenject::GameObjectCreationParameters* left, Zenject::GameObjectCreationParameters& right);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::GameObjectCreationParameters*, "Zenject", "GameObjectCreationParameters");
#pragma pack(pop)
