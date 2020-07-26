// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:38 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI::Collections
namespace UnityEngine::UI::Collections {
  // Forward declaring type: IndexedSet`1<T>
  template<typename T>
  class IndexedSet_1;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: IClipper
  class IClipper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.ClipperRegistry
  class ClipperRegistry : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.UI.ClipperRegistry s_Instance
    static UnityEngine::UI::ClipperRegistry* _get_s_Instance();
    // Set static field: static private UnityEngine.UI.ClipperRegistry s_Instance
    static void _set_s_Instance(UnityEngine::UI::ClipperRegistry* value);
    // private readonly UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.IClipper> m_Clippers
    // Offset: 0x10
    UnityEngine::UI::Collections::IndexedSet_1<UnityEngine::UI::IClipper*>* m_Clippers;
    // static public UnityEngine.UI.ClipperRegistry get_instance()
    // Offset: 0xDF06C8
    static UnityEngine::UI::ClipperRegistry* get_instance();
    // public System.Void Cull()
    // Offset: 0xDF074C
    void Cull();
    // static public System.Void Register(UnityEngine.UI.IClipper c)
    // Offset: 0xDF12F0
    static void Register(UnityEngine::UI::IClipper* c);
    // static public System.Void Unregister(UnityEngine.UI.IClipper c)
    // Offset: 0xDF1364
    static void Unregister(UnityEngine::UI::IClipper* c);
    // protected System.Void .ctor()
    // Offset: 0xDF1274
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ClipperRegistry* New_ctor();
  }; // UnityEngine.UI.ClipperRegistry
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::ClipperRegistry*, "UnityEngine.UI", "ClipperRegistry");
#pragma pack(pop)
