// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:25 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.DefaultBinder
#include "System/DefaultBinder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.DefaultBinder/<>c
  class DefaultBinder::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.DefaultBinder/<>c <>9
    static System::DefaultBinder::$$c* _get_$$9();
    // Set static field: static public readonly System.DefaultBinder/<>c <>9
    static void _set_$$9(System::DefaultBinder::$$c* value);
    // Get static field: static public System.Predicate`1<System.Type> <>9__3_0
    static System::Predicate_1<System::Type*>* _get_$$9__3_0();
    // Set static field: static public System.Predicate`1<System.Type> <>9__3_0
    static void _set_$$9__3_0(System::Predicate_1<System::Type*>* value);
    // static private System.Void .cctor()
    // Offset: 0xC7DD7C
    static void _cctor();
    // System.Boolean <SelectProperty>b__3_0(System.Type t)
    // Offset: 0xC7DDEC
    bool $SelectProperty$b__3_0(System::Type* t);
    // public System.Void .ctor()
    // Offset: 0xC7DDE4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DefaultBinder::$$c* New_ctor();
  }; // System.DefaultBinder/<>c
}
DEFINE_IL2CPP_ARG_TYPE(System::DefaultBinder::$$c*, "System", "DefaultBinder/<>c");
#pragma pack(pop)
