// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IGuiRenderable
  class IGuiRenderable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
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
  // Autogenerated type: Zenject.GuiRenderableManager
  class GuiRenderableManager : public ::Il2CppObject {
    public:
    // Nested type: Zenject::GuiRenderableManager::RenderableInfo
    class RenderableInfo;
    // Nested type: Zenject::GuiRenderableManager::$$c__DisplayClass1_0
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::GuiRenderableManager::$$c
    class $$c;
    // private System.Collections.Generic.List`1<Zenject.GuiRenderableManager/RenderableInfo> _renderables
    // Offset: 0x10
    System::Collections::Generic::List_1<Zenject::GuiRenderableManager::RenderableInfo*>* renderables;
    // public System.Void .ctor(System.Collections.Generic.List`1<Zenject.IGuiRenderable> renderables, System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities)
    // Offset: 0xF23E0C
    static GuiRenderableManager* New_ctor(System::Collections::Generic::List_1<Zenject::IGuiRenderable*>* renderables, System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities);
    // public System.Void OnGui()
    // Offset: 0xF242DC
    void OnGui();
  }; // Zenject.GuiRenderableManager
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::GuiRenderableManager*, "Zenject", "GuiRenderableManager");
#pragma pack(pop)
