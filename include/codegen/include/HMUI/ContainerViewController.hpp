// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:05 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: Screen
  class Screen;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.ContainerViewController
  class ContainerViewController : public HMUI::ViewController {
    public:
    // Nested type: HMUI::ContainerViewController::$AddViewControllerCoroutine$d__15
    class $AddViewControllerCoroutine$d__15;
    // Nested type: HMUI::ContainerViewController::$RemoveViewControllersCoroutine$d__17
    class $RemoveViewControllersCoroutine$d__17;
    // private UnityEngine.RectTransform _controllersContainer
    // Offset: 0x68
    UnityEngine::RectTransform* controllersContainer;
    // protected System.Collections.Generic.List`1<HMUI.ViewController> _viewControllers
    // Offset: 0x70
    System::Collections::Generic::List_1<HMUI::ViewController*>* viewControllers;
    // public UnityEngine.RectTransform get_controllersContainer()
    // Offset: 0xEC1D64
    UnityEngine::RectTransform* get_controllersContainer();
    // public System.Collections.Generic.List`1<HMUI.ViewController> get_viewControllers()
    // Offset: 0xEC1E10
    System::Collections::Generic::List_1<HMUI::ViewController*>* get_viewControllers();
    // protected System.Void LayoutViewControllers(System.Collections.Generic.List`1<HMUI.ViewController> viewControllers)
    // Offset: 0xFFFFFFFF
    void LayoutViewControllers(System::Collections::Generic::List_1<HMUI::ViewController*>* viewControllers);
    // public System.Void ClearChildViewControllers()
    // Offset: 0xEC2264
    void ClearChildViewControllers();
    // public System.Void SetChildViewController(HMUI.ViewController viewController)
    // Offset: 0xEC2388
    void SetChildViewController(HMUI::ViewController* viewController);
    // public System.Void SetChildViewControllers(HMUI.ViewController[] viewControllers)
    // Offset: 0xEC2444
    void SetChildViewControllers(::Array<HMUI::ViewController*>* viewControllers);
    // protected System.Void AddViewController(HMUI.ViewController viewController, System.Action finishedCallback, System.Action`2<System.Single,HMUI.ViewController[]> animationLayouter, System.Boolean immediately)
    // Offset: 0xEC25B8
    void AddViewController(HMUI::ViewController* viewController, System::Action* finishedCallback, System::Action_2<float, ::Array<HMUI::ViewController*>*>* animationLayouter, bool immediately);
    // private System.Collections.IEnumerator AddViewControllerCoroutine(HMUI.ViewController newViewController, System.Action finishedCallback, System.Action`2<System.Single,HMUI.ViewController[]> animationLayouter, System.Boolean immediately)
    // Offset: 0xEC26CC
    System::Collections::IEnumerator* AddViewControllerCoroutine(HMUI::ViewController* newViewController, System::Action* finishedCallback, System::Action_2<float, ::Array<HMUI::ViewController*>*>* animationLayouter, bool immediately);
    // protected System.Void RemoveViewControllers(HMUI.ViewController[] viewControllers, System.Action finishedCallback, System.Action`3<System.Single,HMUI.ViewController[],System.Collections.Generic.HashSet`1<HMUI.ViewController>> animationLayouter, System.Boolean immediately)
    // Offset: 0xEC27CC
    void RemoveViewControllers(::Array<HMUI::ViewController*>* viewControllers, System::Action* finishedCallback, System::Action_3<float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>* animationLayouter, bool immediately);
    // private System.Collections.IEnumerator RemoveViewControllersCoroutine(HMUI.ViewController[] viewControllersToRemove, System.Action finishedCallback, System.Action`3<System.Single,HMUI.ViewController[],System.Collections.Generic.HashSet`1<HMUI.ViewController>> animationLayouter, System.Boolean immediately)
    // Offset: 0xEC2838
    System::Collections::IEnumerator* RemoveViewControllersCoroutine(::Array<HMUI::ViewController*>* viewControllersToRemove, System::Action* finishedCallback, System::Action_3<float, ::Array<HMUI::ViewController*>*, System::Collections::Generic::HashSet_1<HMUI::ViewController*>*>* animationLayouter, bool immediately);
    // private System.Single[] GetNewXPositionsForViewControllers(System.Collections.Generic.List`1<HMUI.ViewController> viewControllers, System.Int32 exludeFromEndCount)
    // Offset: 0xEC2938
    ::Array<float>* GetNewXPositionsForViewControllers(System::Collections::Generic::List_1<HMUI::ViewController*>* viewControllers, int exludeFromEndCount);
    // public override System.Void __Init(HMUI.Screen screen, HMUI.ViewController parentViewController, HMUI.ContainerViewController containerViewController)
    // Offset: 0xEC1E18
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::__Init(HMUI.Screen screen, HMUI.ViewController parentViewController, HMUI.ContainerViewController containerViewController)
    void __Init(HMUI::Screen* screen, HMUI::ViewController* parentViewController, HMUI::ContainerViewController* containerViewController);
    // public override System.Void __Activate(HMUI.ViewController/ActivationType activationType)
    // Offset: 0xEC1EF8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::__Activate(HMUI.ViewController/ActivationType activationType)
    void __Activate(HMUI::ViewController::ActivationType activationType);
    // public override System.Void __Deactivate(HMUI.ViewController/DeactivationType deactivationType, System.Boolean deactivateGameObject)
    // Offset: 0xEC2028
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::__Deactivate(HMUI.ViewController/DeactivationType deactivationType, System.Boolean deactivateGameObject)
    void __Deactivate(HMUI::ViewController::DeactivationType deactivationType, bool deactivateGameObject);
    // protected override System.Void DeactivateGameObject()
    // Offset: 0xEC2150
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DeactivateGameObject()
    void DeactivateGameObject();
    // protected System.Void .ctor()
    // Offset: 0xEC2B6C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ContainerViewController* New_ctor();
  }; // HMUI.ContainerViewController
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ContainerViewController*, "HMUI", "ContainerViewController");
#pragma pack(pop)
