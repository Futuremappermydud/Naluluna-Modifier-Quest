// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:10 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Polyglot.ILocalize
#include "Polyglot/ILocalize.hpp"
// Including type: Polyglot.ILocalizeKey
#include "Polyglot/ILocalizeKey.hpp"
// Including type: Polyglot.LanguageDirection
#include "Polyglot/LanguageDirection.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Component because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Polyglot
namespace Polyglot {
  // Autogenerated type: Polyglot.LocalizedTextComponent`1
  template<typename T>
  class LocalizedTextComponent_1 : public UnityEngine::MonoBehaviour, public Polyglot::ILocalize, public Polyglot::ILocalizeKey {
    public:
    // private T localizedComponent
    // Offset: 0x0
    T localizedComponent;
    // private System.Boolean maintainTextAlignment
    // Offset: 0x0
    bool maintainTextAlignment;
    // private System.String key
    // Offset: 0x0
    ::Il2CppString* key;
    // private System.Collections.Generic.List`1<System.Object> parameters
    // Offset: 0x0
    System::Collections::Generic::List_1<::Il2CppObject*>* parameters;
    // public System.Boolean get_MaintainTextAlignment()
    // Offset: 0x1283390
    bool get_MaintainTextAlignment() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "get_MaintainTextAlignment"));
    }
    // public System.Void set_MaintainTextAlignment(System.Boolean value)
    // Offset: 0x1283398
    void set_MaintainTextAlignment(bool value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "set_MaintainTextAlignment", value));
    }
    // public System.Void set_Key(System.String value)
    // Offset: 0x12833AC
    void set_Key(::Il2CppString* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "set_Key", value));
    }
    // public System.Collections.Generic.List`1<System.Object> get_Parameters()
    // Offset: 0x12833F0
    System::Collections::Generic::List_1<::Il2CppObject*>* get_Parameters() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<::Il2CppObject*>*>(this, "get_Parameters"));
    }
    // public System.Void OnEnable()
    // Offset: 0x12833F8
    void OnEnable() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnEnable"));
    }
    // protected System.Void SetText(T component, System.String value)
    // Offset: 0xFFFFFFFF
    void SetText(T component, ::Il2CppString* value) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "SetText", component, value));
    }
    // protected System.Void UpdateAlignment(T component, Polyglot.LanguageDirection direction)
    // Offset: 0xFFFFFFFF
    void UpdateAlignment(T component, Polyglot::LanguageDirection direction) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "UpdateAlignment", component, direction));
    }
    // public System.Void ClearParameters()
    // Offset: 0x1283560
    void ClearParameters() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "ClearParameters"));
    }
    // public System.Void AddParameter(System.Object parameter)
    // Offset: 0x12835B8
    void AddParameter(::Il2CppObject* parameter) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "AddParameter", parameter));
    }
    // public System.Void AddParameter(System.Int32 parameter)
    // Offset: 0x128363C
    void AddParameter(int parameter) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "AddParameter", parameter));
    }
    // public System.Void AddParameter(System.Single parameter)
    // Offset: 0x12836D0
    void AddParameter(float parameter) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "AddParameter", parameter));
    }
    // public System.Void AddParameter(System.String parameter)
    // Offset: 0x128376C
    void AddParameter(::Il2CppString* parameter) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "AddParameter", parameter));
    }
    // public System.String get_Key()
    // Offset: 0x12833A4
    // Implemented from: Polyglot.ILocalizeKey
    // Base method: System.String ILocalizeKey::get_Key()
    ::Il2CppString* get_Key() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<::Il2CppString*>(this, "get_Key"));
    }
    // public System.Void OnLocalize()
    // Offset: 0x128342C
    // Implemented from: Polyglot.ILocalize
    // Base method: System.Void ILocalize::OnLocalize()
    void OnLocalize() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnLocalize"));
    }
    // protected System.Void .ctor()
    // Offset: 0x1283790
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static LocalizedTextComponent_1<T>* New_ctor() {
      return (LocalizedTextComponent_1<T>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<LocalizedTextComponent_1<T>*>::get()));
    }
  }; // Polyglot.LocalizedTextComponent`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Polyglot::LocalizedTextComponent_1, "Polyglot", "LocalizedTextComponent`1");
#pragma pack(pop)
