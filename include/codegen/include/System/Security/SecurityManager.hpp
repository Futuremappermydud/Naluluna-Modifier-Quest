// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:35 PM
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
// Completed forward declares
// Type namespace: System.Security
namespace System::Security {
  // Autogenerated type: System.Security.SecurityManager
  class SecurityManager : public ::Il2CppObject {
    public:
    // static System.Boolean CheckElevatedPermissions()
    // Offset: 0xDD9510
    static bool CheckElevatedPermissions();
    // static System.Void EnsureElevatedPermissions()
    // Offset: 0xDD9518
    static void EnsureElevatedPermissions();
  }; // System.Security.SecurityManager
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityManager*, "System.Security", "SecurityManager");
#pragma pack(pop)
