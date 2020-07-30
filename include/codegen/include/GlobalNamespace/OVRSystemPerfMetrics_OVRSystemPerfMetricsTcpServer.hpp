// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:00 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRSystemPerfMetrics
#include "GlobalNamespace/OVRSystemPerfMetrics.hpp"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer
  class OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer : public UnityEngine::MonoBehaviour {
    public:
    // Get static field: static public OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer singleton
    static GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* _get_singleton();
    // Set static field: static public OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer singleton
    static void _set_singleton(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* value);
    // private OVRNetwork/OVRNetworkTcpServer tcpServer
    // Offset: 0x18
    GlobalNamespace::OVRNetwork::OVRNetworkTcpServer* tcpServer;
    // public System.Int32 listeningPort
    // Offset: 0x20
    int listeningPort;
    // private System.Void OnEnable()
    // Offset: 0x18E50C8
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x18E520C
    void OnDisable();
    // private System.Void Update()
    // Offset: 0x18E52C4
    void Update();
    // private OVRSystemPerfMetrics/PerfMetrics GatherPerfMetrics()
    // Offset: 0x18E534C
    GlobalNamespace::OVRSystemPerfMetrics::PerfMetrics* GatherPerfMetrics();
    // public System.Void .ctor()
    // Offset: 0x18E59FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x18E5A78
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*, "", "OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer");
#pragma pack(pop)
