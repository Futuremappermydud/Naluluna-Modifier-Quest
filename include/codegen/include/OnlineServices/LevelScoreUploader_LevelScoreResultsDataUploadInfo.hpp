// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:22 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: OnlineServices.LevelScoreUploader
#include "OnlineServices/LevelScoreUploader.hpp"
// Including type: OnlineServices.LevelScoreResultsData
#include "OnlineServices/LevelScoreResultsData.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // Autogenerated type: OnlineServices.LevelScoreUploader/LevelScoreResultsDataUploadInfo
  class LevelScoreUploader::LevelScoreResultsDataUploadInfo : public ::Il2CppObject {
    public:
    // public OnlineServices.LevelScoreResultsData levelScoreResultsData
    // Offset: 0x10
    OnlineServices::LevelScoreResultsData levelScoreResultsData;
    // public System.Int32 uploadAttemptCountLeft
    // Offset: 0x40
    int uploadAttemptCountLeft;
    // public System.Void .ctor()
    // Offset: 0xBB863C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LevelScoreUploader::LevelScoreResultsDataUploadInfo* New_ctor();
  }; // OnlineServices.LevelScoreUploader/LevelScoreResultsDataUploadInfo
}
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*, "OnlineServices", "LevelScoreUploader/LevelScoreResultsDataUploadInfo");
#pragma pack(pop)
