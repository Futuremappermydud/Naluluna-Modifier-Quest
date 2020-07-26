// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:52 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: ContainerSources because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ZenAutoInjecter
  class ZenAutoInjecter : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: Zenject::ZenAutoInjecter::ContainerSources
    struct ContainerSources;
    // Autogenerated type: Zenject.ZenAutoInjecter/ContainerSources
    struct ContainerSources : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public Zenject.ZenAutoInjecter/ContainerSources SceneContext
      static constexpr const int SceneContext = 0;
      // Get static field: static public Zenject.ZenAutoInjecter/ContainerSources SceneContext
      static Zenject::ZenAutoInjecter::ContainerSources _get_SceneContext();
      // Set static field: static public Zenject.ZenAutoInjecter/ContainerSources SceneContext
      static void _set_SceneContext(Zenject::ZenAutoInjecter::ContainerSources value);
      // static field const value: static public Zenject.ZenAutoInjecter/ContainerSources ProjectContext
      static constexpr const int ProjectContext = 1;
      // Get static field: static public Zenject.ZenAutoInjecter/ContainerSources ProjectContext
      static Zenject::ZenAutoInjecter::ContainerSources _get_ProjectContext();
      // Set static field: static public Zenject.ZenAutoInjecter/ContainerSources ProjectContext
      static void _set_ProjectContext(Zenject::ZenAutoInjecter::ContainerSources value);
      // static field const value: static public Zenject.ZenAutoInjecter/ContainerSources SearchHierarchy
      static constexpr const int SearchHierarchy = 2;
      // Get static field: static public Zenject.ZenAutoInjecter/ContainerSources SearchHierarchy
      static Zenject::ZenAutoInjecter::ContainerSources _get_SearchHierarchy();
      // Set static field: static public Zenject.ZenAutoInjecter/ContainerSources SearchHierarchy
      static void _set_SearchHierarchy(Zenject::ZenAutoInjecter::ContainerSources value);
      // Creating value type constructor for type: ContainerSources
      ContainerSources(int value_ = {}) : value{value_} {}
    }; // Zenject.ZenAutoInjecter/ContainerSources
    // private Zenject.ZenAutoInjecter/ContainerSources _containerSource
    // Offset: 0x18
    Zenject::ZenAutoInjecter::ContainerSources containerSource;
    // private System.Boolean _hasInjected
    // Offset: 0x1C
    bool hasInjected;
    // public Zenject.ZenAutoInjecter/ContainerSources get_ContainerSource()
    // Offset: 0x19287BC
    Zenject::ZenAutoInjecter::ContainerSources get_ContainerSource();
    // public System.Void set_ContainerSource(Zenject.ZenAutoInjecter/ContainerSources value)
    // Offset: 0x19287C4
    void set_ContainerSource(Zenject::ZenAutoInjecter::ContainerSources value);
    // public System.Void Construct()
    // Offset: 0x19287CC
    void Construct();
    // public System.Void Awake()
    // Offset: 0x1928838
    void Awake();
    // private Zenject.DiContainer LookupContainer()
    // Offset: 0x1928884
    Zenject::DiContainer* LookupContainer();
    // private Zenject.DiContainer GetContainerForCurrentScene()
    // Offset: 0x19289D4
    Zenject::DiContainer* GetContainerForCurrentScene();
    // public System.Void .ctor()
    // Offset: 0x1928A70
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ZenAutoInjecter* New_ctor();
  }; // Zenject.ZenAutoInjecter
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenAutoInjecter*, "Zenject", "ZenAutoInjecter");
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenAutoInjecter::ContainerSources, "Zenject", "ZenAutoInjecter/ContainerSources");
#pragma pack(pop)
