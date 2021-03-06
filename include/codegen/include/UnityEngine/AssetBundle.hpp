// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundleCreateRequest
  class AssetBundleCreateRequest;
  // Forward declaring type: AssetBundleRequest
  class AssetBundleRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.AssetBundle
  class AssetBundle : public UnityEngine::Object {
    public:
    // static UnityEngine.AssetBundleCreateRequest LoadFromFileAsync_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
    // Offset: 0x1962D1C
    static UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::Il2CppString* path, uint crc, uint64_t offset);
    // static public UnityEngine.AssetBundleCreateRequest LoadFromFileAsync(System.String path)
    // Offset: 0x1962D74
    static UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::Il2CppString* path);
    // static UnityEngine.AssetBundle LoadFromFile_Internal(System.String path, System.UInt32 crc, System.UInt64 offset)
    // Offset: 0x1962DBC
    static UnityEngine::AssetBundle* LoadFromFile_Internal(::Il2CppString* path, uint crc, uint64_t offset);
    // static public UnityEngine.AssetBundle LoadFromFile(System.String path)
    // Offset: 0x1962E14
    static UnityEngine::AssetBundle* LoadFromFile(::Il2CppString* path);
    // public UnityEngine.Object LoadAsset(System.String name)
    // Offset: 0x1962E5C
    UnityEngine::Object* LoadAsset(::Il2CppString* name);
    // public T LoadAsset(System.String name)
    // Offset: 0xD3940C
    // ABORTED: conflicts with another method. T LoadAsset(::Il2CppString* name)
    // public UnityEngine.Object LoadAsset(System.String name, System.Type type)
    // Offset: 0x1962EEC
    UnityEngine::Object* LoadAsset(::Il2CppString* name, System::Type* type);
    // private UnityEngine.Object LoadAsset_Internal(System.String name, System.Type type)
    // Offset: 0x1962FFC
    UnityEngine::Object* LoadAsset_Internal(::Il2CppString* name, System::Type* type);
    // public UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name)
    // Offset: 0x13CFF20
    template<class T>
    UnityEngine::AssetBundleRequest* LoadAssetAsync(::Il2CppString* name) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<UnityEngine::AssetBundleRequest*>(this, "LoadAssetAsync", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, name));
    }
    // public UnityEngine.AssetBundleRequest LoadAssetAsync(System.String name, System.Type type)
    // Offset: 0x1963054
    UnityEngine::AssetBundleRequest* LoadAssetAsync(::Il2CppString* name, System::Type* type);
    // private UnityEngine.AssetBundleRequest LoadAssetAsync_Internal(System.String name, System.Type type)
    // Offset: 0x1963164
    UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::Il2CppString* name, System::Type* type);
    // public System.Void Unload(System.Boolean unloadAllLoadedObjects)
    // Offset: 0x19631BC
    void Unload(bool unloadAllLoadedObjects);
    // public System.String[] GetAllAssetNames()
    // Offset: 0x196320C
    ::Array<::Il2CppString*>* GetAllAssetNames();
    // public System.String[] GetAllScenePaths()
    // Offset: 0x196324C
    ::Array<::Il2CppString*>* GetAllScenePaths();
    // private System.Void .ctor()
    // Offset: 0x1962CB4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AssetBundle* New_ctor();
  }; // UnityEngine.AssetBundle
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
#pragma pack(pop)
