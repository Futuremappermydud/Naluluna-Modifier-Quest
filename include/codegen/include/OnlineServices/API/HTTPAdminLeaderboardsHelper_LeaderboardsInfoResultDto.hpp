// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OnlineServices.API.HTTPAdminLeaderboardsHelper
#include "OnlineServices/API/HTTPAdminLeaderboardsHelper.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto
  class HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto : public ::Il2CppObject {
    public:
    // public OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoDto[] leaderboardsInfoDtos
    // Offset: 0x10
    ::Array<OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoDto*>* leaderboardsInfoDtos;
    // public System.Void .ctor()
    // Offset: 0xC2AEC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto* New_ctor();
  }; // OnlineServices.API.HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPAdminLeaderboardsHelper::LeaderboardsInfoResultDto*, "OnlineServices.API", "HTTPAdminLeaderboardsHelper/LeaderboardsInfoResultDto");
#pragma pack(pop)
