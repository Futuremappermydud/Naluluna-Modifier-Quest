// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.Context
#include "Zenject/Context.hpp"
// Including type: Zenject.ReflectionBakingCoverageModes
#include "Zenject/ReflectionBakingCoverageModes.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenjectSettings
  class ZenjectSettings;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Skipping declaration: MonoBehaviour because it is already included!
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ProjectContext
  class ProjectContext : public Zenject::Context {
    public:
    // private System.Action PreInstall
    // Offset: 0x40
    System::Action* PreInstall;
    // private System.Action PostInstall
    // Offset: 0x48
    System::Action* PostInstall;
    // private System.Action PreResolve
    // Offset: 0x50
    System::Action* PreResolve;
    // private System.Action PostResolve
    // Offset: 0x58
    System::Action* PostResolve;
    // static field const value: static public System.String ProjectContextResourcePath
    static constexpr const char* ProjectContextResourcePath = "ProjectContext";
    // Get static field: static public System.String ProjectContextResourcePath
    static ::Il2CppString* _get_ProjectContextResourcePath();
    // Set static field: static public System.String ProjectContextResourcePath
    static void _set_ProjectContextResourcePath(::Il2CppString* value);
    // static field const value: static public System.String ProjectContextResourcePathOld
    static constexpr const char* ProjectContextResourcePathOld = "ProjectCompositionRoot";
    // Get static field: static public System.String ProjectContextResourcePathOld
    static ::Il2CppString* _get_ProjectContextResourcePathOld();
    // Set static field: static public System.String ProjectContextResourcePathOld
    static void _set_ProjectContextResourcePathOld(::Il2CppString* value);
    // Get static field: static private Zenject.ProjectContext _instance
    static Zenject::ProjectContext* _get__instance();
    // Set static field: static private Zenject.ProjectContext _instance
    static void _set__instance(Zenject::ProjectContext* value);
    // private System.Boolean _parentNewObjectsUnderContext
    // Offset: 0x60
    bool parentNewObjectsUnderContext;
    // private Zenject.ReflectionBakingCoverageModes _editorReflectionBakingCoverageMode
    // Offset: 0x64
    Zenject::ReflectionBakingCoverageModes editorReflectionBakingCoverageMode;
    // private Zenject.ReflectionBakingCoverageModes _buildsReflectionBakingCoverageMode
    // Offset: 0x68
    Zenject::ReflectionBakingCoverageModes buildsReflectionBakingCoverageMode;
    // private Zenject.ZenjectSettings _settings
    // Offset: 0x70
    Zenject::ZenjectSettings* settings;
    // private Zenject.DiContainer _container
    // Offset: 0x78
    Zenject::DiContainer* container;
    // Get static field: static private System.Boolean <ValidateOnNextRun>k__BackingField
    static bool _get_$ValidateOnNextRun$k__BackingField();
    // Set static field: static private System.Boolean <ValidateOnNextRun>k__BackingField
    static void _set_$ValidateOnNextRun$k__BackingField(bool value);
    // public System.Void add_PreInstall(System.Action value)
    // Offset: 0xFB08F0
    void add_PreInstall(System::Action* value);
    // public System.Void remove_PreInstall(System.Action value)
    // Offset: 0xFB0994
    void remove_PreInstall(System::Action* value);
    // public System.Void add_PostInstall(System.Action value)
    // Offset: 0xFB0A38
    void add_PostInstall(System::Action* value);
    // public System.Void remove_PostInstall(System.Action value)
    // Offset: 0xFB0ADC
    void remove_PostInstall(System::Action* value);
    // public System.Void add_PreResolve(System.Action value)
    // Offset: 0xFB0B80
    void add_PreResolve(System::Action* value);
    // public System.Void remove_PreResolve(System.Action value)
    // Offset: 0xFB0C24
    void remove_PreResolve(System::Action* value);
    // public System.Void add_PostResolve(System.Action value)
    // Offset: 0xFB0CC8
    void add_PostResolve(System::Action* value);
    // public System.Void remove_PostResolve(System.Action value)
    // Offset: 0xFB0D6C
    void remove_PostResolve(System::Action* value);
    // static public System.Boolean get_HasInstance()
    // Offset: 0xFB0E18
    static bool get_HasInstance();
    // static public Zenject.ProjectContext get_Instance()
    // Offset: 0xFB0E94
    static Zenject::ProjectContext* get_Instance();
    // static public System.Boolean get_ValidateOnNextRun()
    // Offset: 0xFB11B4
    static bool get_ValidateOnNextRun();
    // static public System.Void set_ValidateOnNextRun(System.Boolean value)
    // Offset: 0xFB1204
    static void set_ValidateOnNextRun(bool value);
    // static public UnityEngine.GameObject TryGetPrefab()
    // Offset: 0xFB1318
    static UnityEngine::GameObject* TryGetPrefab();
    // static private System.Void InstantiateAndInitialize()
    // Offset: 0xFB0F3C
    static void InstantiateAndInitialize();
    // public System.Boolean get_ParentNewObjectsUnderContext()
    // Offset: 0xFB185C
    bool get_ParentNewObjectsUnderContext();
    // public System.Void set_ParentNewObjectsUnderContext(System.Boolean value)
    // Offset: 0xFB1864
    void set_ParentNewObjectsUnderContext(bool value);
    // public System.Void EnsureIsInitialized()
    // Offset: 0xFB1870
    void EnsureIsInitialized();
    // public System.Void Awake()
    // Offset: 0xFB1874
    void Awake();
    // private System.Void Initialize()
    // Offset: 0xFB1484
    void Initialize();
    // private System.Void InstallBindings(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> injectableMonoBehaviours)
    // Offset: 0xFB1998
    void InstallBindings(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* injectableMonoBehaviours);
    // public override Zenject.DiContainer get_Container()
    // Offset: 0xFB0E10
    // Implemented from: Zenject.Context
    // Base method: Zenject.DiContainer Context::get_Container()
    Zenject::DiContainer* get_Container();
    // public override System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> GetRootGameObjects()
    // Offset: 0xFB125C
    // Implemented from: Zenject.Context
    // Base method: System.Collections.Generic.IEnumerable`1<UnityEngine.GameObject> Context::GetRootGameObjects()
    System::Collections::Generic::IEnumerable_1<UnityEngine::GameObject*>* GetRootGameObjects();
    // protected override System.Void GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    // Offset: 0xFB1C68
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::GetInjectableMonoBehaviours(System.Collections.Generic.List`1<UnityEngine.MonoBehaviour> monoBehaviours)
    void GetInjectableMonoBehaviours(System::Collections::Generic::List_1<UnityEngine::MonoBehaviour*>* monoBehaviours);
    // public System.Void .ctor()
    // Offset: 0xFB1CD8
    // Implemented from: Zenject.Context
    // Base method: System.Void Context::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ProjectContext* New_ctor();
  }; // Zenject.ProjectContext
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ProjectContext*, "Zenject", "ProjectContext");
#pragma pack(pop)
