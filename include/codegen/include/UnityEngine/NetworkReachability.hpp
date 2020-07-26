// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:26 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.NetworkReachability
  struct NetworkReachability : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.NetworkReachability NotReachable
    static constexpr const int NotReachable = 0;
    // Get static field: static public UnityEngine.NetworkReachability NotReachable
    static UnityEngine::NetworkReachability _get_NotReachable();
    // Set static field: static public UnityEngine.NetworkReachability NotReachable
    static void _set_NotReachable(UnityEngine::NetworkReachability value);
    // static field const value: static public UnityEngine.NetworkReachability ReachableViaCarrierDataNetwork
    static constexpr const int ReachableViaCarrierDataNetwork = 1;
    // Get static field: static public UnityEngine.NetworkReachability ReachableViaCarrierDataNetwork
    static UnityEngine::NetworkReachability _get_ReachableViaCarrierDataNetwork();
    // Set static field: static public UnityEngine.NetworkReachability ReachableViaCarrierDataNetwork
    static void _set_ReachableViaCarrierDataNetwork(UnityEngine::NetworkReachability value);
    // static field const value: static public UnityEngine.NetworkReachability ReachableViaLocalAreaNetwork
    static constexpr const int ReachableViaLocalAreaNetwork = 2;
    // Get static field: static public UnityEngine.NetworkReachability ReachableViaLocalAreaNetwork
    static UnityEngine::NetworkReachability _get_ReachableViaLocalAreaNetwork();
    // Set static field: static public UnityEngine.NetworkReachability ReachableViaLocalAreaNetwork
    static void _set_ReachableViaLocalAreaNetwork(UnityEngine::NetworkReachability value);
    // Creating value type constructor for type: NetworkReachability
    NetworkReachability(int value_ = {}) : value{value_} {}
  }; // UnityEngine.NetworkReachability
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::NetworkReachability, "UnityEngine", "NetworkReachability");
#pragma pack(pop)
