// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:33 PM
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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionNodesHelper
  class MissionNodesHelper : public ::Il2CppObject {
    public:
    // static public System.Collections.Generic.HashSet`1<MissionNode> GetAllNodesFromRoot(MissionNode root)
    // Offset: 0xBF4C60
    static System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* GetAllNodesFromRoot(GlobalNamespace::MissionNode* root);
    // static private System.Void VisitAllTree(MissionNode node, System.Collections.Generic.HashSet`1<MissionNode> visitedNodes)
    // Offset: 0xBF4CD4
    static void VisitAllTree(GlobalNamespace::MissionNode* node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* visitedNodes);
    // static public System.Boolean CycleDetection(MissionNode node)
    // Offset: 0xBF4DB0
    static bool CycleDetection(GlobalNamespace::MissionNode* node);
    // static private System.Boolean CycleDetection(MissionNode node, System.Int32 layer, System.Collections.Generic.Dictionary`2<MissionNode,System.Int32> layers)
    // Offset: 0xBF4E20
    static bool CycleDetection(GlobalNamespace::MissionNode* node, int layer, System::Collections::Generic::Dictionary_2<GlobalNamespace::MissionNode*, int>* layers);
    // static public System.Boolean FinalNodeIsFinal(MissionNode finalNode, MissionNode rootNode)
    // Offset: 0xBF4F60
    static bool FinalNodeIsFinal(GlobalNamespace::MissionNode* finalNode, GlobalNamespace::MissionNode* rootNode);
    // static private System.Boolean FinalNodeIsFinal(MissionNode finalNode, MissionNode node, System.Collections.Generic.HashSet`1<MissionNode> visitedNodes)
    // Offset: 0xBF4FDC
    static bool FinalNodeIsFinal(GlobalNamespace::MissionNode* finalNode, GlobalNamespace::MissionNode* node, System::Collections::Generic::HashSet_1<GlobalNamespace::MissionNode*>* visitedNodes);
    // public System.Void .ctor()
    // Offset: 0xBF5104
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MissionNodesHelper* New_ctor();
  }; // MissionNodesHelper
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionNodesHelper*, "", "MissionNodesHelper");
#pragma pack(pop)
