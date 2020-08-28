// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: RandomObjectPicker`1
  template<typename T>
  class RandomObjectPicker_1 : public ::Il2CppObject {
    public:
    // private T[] _objects
    // Offset: 0x0
    ::Array<T>* objects;
    // private System.Single _lastPickTime
    // Offset: 0x0
    float lastPickTime;
    // private System.Single _minimumPickInterval
    // Offset: 0x0
    float minimumPickInterval;
    // public System.Void .ctor(T obj, System.Single minimumPickInterval)
    // Offset: 0xFFFFFFFF
    static RandomObjectPicker_1<T>* New_ctor(T obj, float minimumPickInterval) {
      return (RandomObjectPicker_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RandomObjectPicker_1<T>*>::get(), obj, minimumPickInterval));
    }
    // public System.Void .ctor(T[] objects, System.Single minimumPickInterval)
    // Offset: 0xFFFFFFFF
    static RandomObjectPicker_1<T>* New_ctor(::Array<T>* objects, float minimumPickInterval) {
      return (RandomObjectPicker_1<T>*)THROW_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<RandomObjectPicker_1<T>*>::get(), objects, minimumPickInterval));
    }
    // public T PickRandomObject()
    // Offset: 0xFFFFFFFF
    T PickRandomObject() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "PickRandomObject"));
    }
  }; // RandomObjectPicker`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::RandomObjectPicker_1, "", "RandomObjectPicker`1");
#pragma pack(pop)
