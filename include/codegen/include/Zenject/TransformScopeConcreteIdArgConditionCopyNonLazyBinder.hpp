// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:43 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: InjectContext
  class InjectContext;
}
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class TransformScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // private Zenject.GameObjectCreationParameters <GameObjectInfo>k__BackingField
    // Offset: 0x20
    Zenject::GameObjectCreationParameters* GameObjectInfo;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.GameObjectCreationParameters gameObjectInfo)
    // Offset: 0xFAC948
    static TransformScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo, Zenject::GameObjectCreationParameters* gameObjectInfo);
    // protected Zenject.GameObjectCreationParameters get_GameObjectInfo()
    // Offset: 0xFBDC6C
    Zenject::GameObjectCreationParameters* get_GameObjectInfo();
    // private System.Void set_GameObjectInfo(Zenject.GameObjectCreationParameters value)
    // Offset: 0xFBDC74
    void set_GameObjectInfo(Zenject::GameObjectCreationParameters* value);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder UnderTransform(UnityEngine.Transform parent)
    // Offset: 0xFBDC7C
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* UnderTransform(UnityEngine::Transform* parent);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder UnderTransform(System.Func`2<Zenject.InjectContext,UnityEngine.Transform> parentGetter)
    // Offset: 0xFBDCB0
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* UnderTransform(System::Func_2<Zenject::InjectContext*, UnityEngine::Transform*>* parentGetter);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder UnderTransformGroup(System.String transformGroupname)
    // Offset: 0xFBDCE4
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* UnderTransformGroup(::Il2CppString* transformGroupname);
  }; // Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "TransformScopeConcreteIdArgConditionCopyNonLazyBinder");
#pragma pack(pop)
