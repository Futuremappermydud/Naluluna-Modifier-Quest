// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:22 PM
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
// Type namespace: UnityEngine.ProBuilder.KdTree
namespace UnityEngine::ProBuilder::KdTree {
  // Autogenerated type: UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior
  struct AddDuplicateBehavior : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Skip
    static constexpr const int Skip = 0;
    // Get static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Skip
    static UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _get_Skip();
    // Set static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Skip
    static void _set_Skip(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value);
    // static field const value: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Error
    static constexpr const int Error = 1;
    // Get static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Error
    static UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _get_Error();
    // Set static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Error
    static void _set_Error(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value);
    // static field const value: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Update
    static constexpr const int Update = 2;
    // Get static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Update
    static UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _get_Update();
    // Set static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Update
    static void _set_Update(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value);
    // static field const value: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Collect
    static constexpr const int Collect = 3;
    // Get static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Collect
    static UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior _get_Collect();
    // Set static field: static public UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior Collect
    static void _set_Collect(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior value);
    // Creating value type constructor for type: AddDuplicateBehavior
    AddDuplicateBehavior(int value_ = {}) : value{value_} {}
  }; // UnityEngine.ProBuilder.KdTree.AddDuplicateBehavior
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::KdTree::AddDuplicateBehavior, "UnityEngine.ProBuilder.KdTree", "AddDuplicateBehavior");
#pragma pack(pop)
