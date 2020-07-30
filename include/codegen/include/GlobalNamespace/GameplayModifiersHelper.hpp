// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:26 PM
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
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: GameplayModifiersDTO
  struct GameplayModifiersDTO;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayModifiersHelper
  class GameplayModifiersHelper : public ::Il2CppObject {
    public:
    // static public LeaderboardsDTO.GameplayModifiersDTO[] ToDTO(GameplayModifiers gameplayModifiers)
    // Offset: 0xB3E944
    static ::Array<LeaderboardsDTO::GameplayModifiersDTO>* ToDTO(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // static public GameplayModifiers FromDTO(LeaderboardsDTO.GameplayModifiersDTO[] gameplayModifiersDTOs)
    // Offset: 0xB3EB98
    static GlobalNamespace::GameplayModifiers* FromDTO(::Array<LeaderboardsDTO::GameplayModifiersDTO>* gameplayModifiersDTOs);
  }; // GameplayModifiersHelper
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersHelper*, "", "GameplayModifiersHelper");
#pragma pack(pop)
