// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:36 PM
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
// Type namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Autogenerated type: LeaderboardsDTO.TokenDTO
  class TokenDTO : public ::Il2CppObject {
    public:
    // public System.String token
    // Offset: 0x10
    ::Il2CppString* token;
    // public System.Int32 expireIn
    // Offset: 0x18
    int expireIn;
    // public System.Void .ctor()
    // Offset: 0xB47578
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TokenDTO* New_ctor();
  }; // LeaderboardsDTO.TokenDTO
}
DEFINE_IL2CPP_ARG_TYPE(LeaderboardsDTO::TokenDTO*, "LeaderboardsDTO", "TokenDTO");
#pragma pack(pop)
