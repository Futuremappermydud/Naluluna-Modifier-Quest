// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: UnityEngine.ProBuilder.IHasDefault
#include "UnityEngine/ProBuilder/IHasDefault.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.PreferenceDictionary
  class PreferenceDictionary : public UnityEngine::ScriptableObject, public UnityEngine::ISerializationCallbackReceiver, public UnityEngine::ProBuilder::IHasDefault {
    public:
    // private System.Collections.Generic.Dictionary`2<System.String,System.Boolean> m_Bool
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<::Il2CppString*, bool>* m_Bool;
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> m_Int
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* m_Int;
    // private System.Collections.Generic.Dictionary`2<System.String,System.Single> m_Float
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* m_Float;
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> m_String
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* m_String;
    // private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> m_Color
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Color>* m_Color;
    // private System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material> m_Material
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Material*>* m_Material;
    // private System.Collections.Generic.List`1<System.String> m_Bool_keys
    // Offset: 0x48
    System::Collections::Generic::List_1<::Il2CppString*>* m_Bool_keys;
    // private System.Collections.Generic.List`1<System.String> m_Int_keys
    // Offset: 0x50
    System::Collections::Generic::List_1<::Il2CppString*>* m_Int_keys;
    // private System.Collections.Generic.List`1<System.String> m_Float_keys
    // Offset: 0x58
    System::Collections::Generic::List_1<::Il2CppString*>* m_Float_keys;
    // private System.Collections.Generic.List`1<System.String> m_String_keys
    // Offset: 0x60
    System::Collections::Generic::List_1<::Il2CppString*>* m_String_keys;
    // private System.Collections.Generic.List`1<System.String> m_Color_keys
    // Offset: 0x68
    System::Collections::Generic::List_1<::Il2CppString*>* m_Color_keys;
    // private System.Collections.Generic.List`1<System.String> m_Material_keys
    // Offset: 0x70
    System::Collections::Generic::List_1<::Il2CppString*>* m_Material_keys;
    // private System.Collections.Generic.List`1<System.Boolean> m_Bool_values
    // Offset: 0x78
    System::Collections::Generic::List_1<bool>* m_Bool_values;
    // private System.Collections.Generic.List`1<System.Int32> m_Int_values
    // Offset: 0x80
    System::Collections::Generic::List_1<int>* m_Int_values;
    // private System.Collections.Generic.List`1<System.Single> m_Float_values
    // Offset: 0x88
    System::Collections::Generic::List_1<float>* m_Float_values;
    // private System.Collections.Generic.List`1<System.String> m_String_values
    // Offset: 0x90
    System::Collections::Generic::List_1<::Il2CppString*>* m_String_values;
    // private System.Collections.Generic.List`1<UnityEngine.Color> m_Color_values
    // Offset: 0x98
    System::Collections::Generic::List_1<UnityEngine::Color>* m_Color_values;
    // private System.Collections.Generic.List`1<UnityEngine.Material> m_Material_values
    // Offset: 0xA0
    System::Collections::Generic::List_1<UnityEngine::Material*>* m_Material_values;
    // public System.Boolean HasKey(System.String key)
    // Offset: 0x101C094
    bool HasKey(::Il2CppString* key);
    // public System.Boolean HasKey(System.String key)
    // Offset: 0xE4E1AC
    // ABORTED: conflicts with another method. bool HasKey(::Il2CppString* key)
    // public System.Void DeleteKey(System.String key)
    // Offset: 0x101C1B0
    void DeleteKey(::Il2CppString* key);
    // public T Get(System.String key, T fallback)
    // Offset: 0xD3AE4C
    template<class T>
    T Get(::Il2CppString* key, T fallback) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<T>(this, "Get", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, key, fallback));
    }
    // public System.Void Set(System.String key, T value)
    // Offset: 0xC4D178
    template<class T>
    void Set(::Il2CppString* key, T value) {
      CRASH_UNLESS(il2cpp_utils::RunGenericMethod(this, "Set", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, key, value));
    }
    // public System.Boolean GetBool(System.String key, System.Boolean fallback)
    // Offset: 0x101C374
    bool GetBool(::Il2CppString* key, bool fallback);
    // public System.Int32 GetInt(System.String key, System.Int32 fallback)
    // Offset: 0x101C40C
    int GetInt(::Il2CppString* key, int fallback);
    // public System.Single GetFloat(System.String key, System.Single fallback)
    // Offset: 0x101C498
    float GetFloat(::Il2CppString* key, float fallback);
    // public System.String GetString(System.String key, System.String fallback)
    // Offset: 0x101C52C
    ::Il2CppString* GetString(::Il2CppString* key, ::Il2CppString* fallback);
    // public UnityEngine.Color GetColor(System.String key, UnityEngine.Color fallback)
    // Offset: 0x101C5B8
    UnityEngine::Color GetColor(::Il2CppString* key, UnityEngine::Color fallback);
    // public UnityEngine.Material GetMaterial(System.String key, UnityEngine.Material fallback)
    // Offset: 0x101C670
    UnityEngine::Material* GetMaterial(::Il2CppString* key, UnityEngine::Material* fallback);
    // public System.Void SetBool(System.String key, System.Boolean value)
    // Offset: 0x101C6FC
    void SetBool(::Il2CppString* key, bool value);
    // public System.Void SetInt(System.String key, System.Int32 value)
    // Offset: 0x101C7B8
    void SetInt(::Il2CppString* key, int value);
    // public System.Void SetFloat(System.String key, System.Single value)
    // Offset: 0x101C874
    void SetFloat(::Il2CppString* key, float value);
    // public System.Void SetString(System.String key, System.String value)
    // Offset: 0x101C93C
    void SetString(::Il2CppString* key, ::Il2CppString* value);
    // public System.Void SetColor(System.String key, UnityEngine.Color value)
    // Offset: 0x101C9F8
    void SetColor(::Il2CppString* key, UnityEngine::Color value);
    // public System.Void SetMaterial(System.String key, UnityEngine.Material value)
    // Offset: 0x101CAF0
    void SetMaterial(::Il2CppString* key, UnityEngine::Material* value);
    // public System.Collections.Generic.Dictionary`2<System.String,System.Boolean> GetBoolDictionary()
    // Offset: 0x101CBAC
    System::Collections::Generic::Dictionary_2<::Il2CppString*, bool>* GetBoolDictionary();
    // public System.Collections.Generic.Dictionary`2<System.String,System.Int32> GetIntDictionary()
    // Offset: 0x101CBB4
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* GetIntDictionary();
    // public System.Collections.Generic.Dictionary`2<System.String,System.Single> GetFloatDictionary()
    // Offset: 0x101CBBC
    System::Collections::Generic::Dictionary_2<::Il2CppString*, float>* GetFloatDictionary();
    // public System.Collections.Generic.Dictionary`2<System.String,System.String> GetStringDictionary()
    // Offset: 0x101CBC4
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* GetStringDictionary();
    // public System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Color> GetColorDictionary()
    // Offset: 0x101CBCC
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Color>* GetColorDictionary();
    // public System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Material> GetMaterialDictionary()
    // Offset: 0x101CBD4
    System::Collections::Generic::Dictionary_2<::Il2CppString*, UnityEngine::Material*>* GetMaterialDictionary();
    // public System.Void Clear()
    // Offset: 0x101CBDC
    void Clear();
    // public System.Void OnBeforeSerialize()
    // Offset: 0x101B924
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnBeforeSerialize()
    void OnBeforeSerialize();
    // Creating proxy method: UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
    // Maps to method: OnBeforeSerialize
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x101BC08
    // Implemented from: UnityEngine.ISerializationCallbackReceiver
    // Base method: System.Void ISerializationCallbackReceiver::OnAfterDeserialize()
    void OnAfterDeserialize();
    // Creating proxy method: UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
    // Maps to method: OnAfterDeserialize
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // public System.Void SetDefaultValues()
    // Offset: 0x101BFC4
    // Implemented from: UnityEngine.ProBuilder.IHasDefault
    // Base method: System.Void IHasDefault::SetDefaultValues()
    void SetDefaultValues();
    // public System.Void .ctor()
    // Offset: 0x101CC94
    // Implemented from: UnityEngine.ScriptableObject
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PreferenceDictionary* New_ctor();
  }; // UnityEngine.ProBuilder.PreferenceDictionary
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PreferenceDictionary*, "UnityEngine.ProBuilder", "PreferenceDictionary");
#pragma pack(pop)
