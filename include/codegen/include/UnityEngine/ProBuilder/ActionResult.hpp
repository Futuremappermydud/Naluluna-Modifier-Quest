// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Skipping declaration: Status because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.ActionResult
  class ActionResult : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::ProBuilder::ActionResult::Status
    struct Status;
    // Autogenerated type: UnityEngine.ProBuilder.ActionResult/Status
    struct Status : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/Status Success
      static constexpr const int Success = 0;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/Status Success
      static UnityEngine::ProBuilder::ActionResult::Status _get_Success();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/Status Success
      static void _set_Success(UnityEngine::ProBuilder::ActionResult::Status value);
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/Status Failure
      static constexpr const int Failure = 1;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/Status Failure
      static UnityEngine::ProBuilder::ActionResult::Status _get_Failure();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/Status Failure
      static void _set_Failure(UnityEngine::ProBuilder::ActionResult::Status value);
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/Status Canceled
      static constexpr const int Canceled = 2;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/Status Canceled
      static UnityEngine::ProBuilder::ActionResult::Status _get_Canceled();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/Status Canceled
      static void _set_Canceled(UnityEngine::ProBuilder::ActionResult::Status value);
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/Status NoChange
      static constexpr const int NoChange = 3;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/Status NoChange
      static UnityEngine::ProBuilder::ActionResult::Status _get_NoChange();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/Status NoChange
      static void _set_NoChange(UnityEngine::ProBuilder::ActionResult::Status value);
      // Creating value type constructor for type: Status
      Status(int value_ = {}) : value{value_} {}
    }; // UnityEngine.ProBuilder.ActionResult/Status
    // private UnityEngine.ProBuilder.ActionResult/Status <status>k__BackingField
    // Offset: 0x10
    UnityEngine::ProBuilder::ActionResult::Status status;
    // private System.String <notification>k__BackingField
    // Offset: 0x18
    ::Il2CppString* notification;
    // public UnityEngine.ProBuilder.ActionResult/Status get_status()
    // Offset: 0x1512A30
    UnityEngine::ProBuilder::ActionResult::Status get_status();
    // private System.Void set_status(UnityEngine.ProBuilder.ActionResult/Status value)
    // Offset: 0x1512A38
    void set_status(UnityEngine::ProBuilder::ActionResult::Status value);
    // public System.String get_notification()
    // Offset: 0x1512A40
    ::Il2CppString* get_notification();
    // private System.Void set_notification(System.String value)
    // Offset: 0x1512A48
    void set_notification(::Il2CppString* value);
    // public System.Void .ctor(UnityEngine.ProBuilder.ActionResult/Status status, System.String notification)
    // Offset: 0x1512A50
    static ActionResult* New_ctor(UnityEngine::ProBuilder::ActionResult::Status status, ::Il2CppString* notification);
    // public System.Boolean ToBool()
    // Offset: 0x1512AA8
    bool ToBool();
    // static public System.Boolean FromBool(System.Boolean success)
    // Offset: 0x1512AB8
    static bool FromBool(bool success);
    // static public UnityEngine.ProBuilder.ActionResult get_Success()
    // Offset: 0x1512B60
    static UnityEngine::ProBuilder::ActionResult* get_Success();
    // static public UnityEngine.ProBuilder.ActionResult get_NoSelection()
    // Offset: 0x1512BDC
    static UnityEngine::ProBuilder::ActionResult* get_NoSelection();
    // static public UnityEngine.ProBuilder.ActionResult get_UserCanceled()
    // Offset: 0x1512C5C
    static UnityEngine::ProBuilder::ActionResult* get_UserCanceled();
  }; // UnityEngine.ProBuilder.ActionResult
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ActionResult*, "UnityEngine.ProBuilder", "ActionResult");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ActionResult::Status, "UnityEngine.ProBuilder", "ActionResult/Status");
#pragma pack(pop)
