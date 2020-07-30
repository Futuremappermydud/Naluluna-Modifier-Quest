// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Zenject.GuiRenderableManager
#include "Zenject/GuiRenderableManager.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IGuiRenderable
  class IGuiRenderable;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.GuiRenderableManager/<>c__DisplayClass1_0
  class GuiRenderableManager::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // public Zenject.IGuiRenderable renderable
    // Offset: 0x10
    Zenject::IGuiRenderable* renderable;
    // System.Boolean <.ctor>b__1(ModestTree.Util.ValuePair`2<System.Type,System.Int32> x)
    // Offset: 0xF2466C
    bool $_ctor$b__1(ModestTree::Util::ValuePair_2<System::Type*, int>* x);
    // public System.Void .ctor()
    // Offset: 0xF2428C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static GuiRenderableManager::$$c__DisplayClass1_0* New_ctor();
  }; // Zenject.GuiRenderableManager/<>c__DisplayClass1_0
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderableManager::$$c__DisplayClass1_0*, "Zenject", "GuiRenderableManager/<>c__DisplayClass1_0");
#pragma pack(pop)
