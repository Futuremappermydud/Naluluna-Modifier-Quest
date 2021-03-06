// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:39 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: UnityEngine.Networking.UnityWebRequest
#include "UnityEngine/Networking/UnityWebRequest.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Autogenerated type: UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod
  struct UnityWebRequest::UnityWebRequestMethod : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Get
    static constexpr const int Get = 0;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Get
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod _get_Get();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Get
    static void _set_Get(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Post
    static constexpr const int Post = 1;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Post
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod _get_Post();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Post
    static void _set_Post(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Put
    static constexpr const int Put = 2;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Put
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod _get_Put();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Put
    static void _set_Put(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Head
    static constexpr const int Head = 3;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Head
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod _get_Head();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Head
    static void _set_Head(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod value);
    // static field const value: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Custom
    static constexpr const int Custom = 4;
    // Get static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Custom
    static UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod _get_Custom();
    // Set static field: static public UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod Custom
    static void _set_Custom(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod value);
    // Creating value type constructor for type: UnityWebRequestMethod
    UnityWebRequestMethod(int value_ = {}) : value{value_} {}
  }; // UnityEngine.Networking.UnityWebRequest/UnityWebRequestMethod
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Networking::UnityWebRequest::UnityWebRequestMethod, "UnityEngine.Networking", "UnityWebRequest/UnityWebRequestMethod");
#pragma pack(pop)
