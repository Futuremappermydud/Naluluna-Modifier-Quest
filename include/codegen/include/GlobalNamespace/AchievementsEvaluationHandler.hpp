// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:07 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AchievementsModelSO
  class AchievementsModelSO;
  // Forward declaring type: AchievementSO
  class AchievementSO;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: MissionNodesManager
  class MissionNodesManager;
  // Forward declaring type: LevelCompletionResults
  class LevelCompletionResults;
  // Forward declaring type: IDifficultyBeatmap
  class IDifficultyBeatmap;
  // Forward declaring type: MissionCompletionResults
  class MissionCompletionResults;
  // Forward declaring type: MissionNode
  class MissionNode;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AchievementsEvaluationHandler
  class AchievementsEvaluationHandler : public UnityEngine::MonoBehaviour {
    public:
    // private AchievementsModelSO _achievementsModel
    // Offset: 0x18
    GlobalNamespace::AchievementsModelSO* achievementsModel;
    // private AchievementSO _clearedLevel100Achievement
    // Offset: 0x20
    GlobalNamespace::AchievementSO* clearedLevel100Achievement;
    // private AchievementSO _totalScore100MillionAchievement
    // Offset: 0x28
    GlobalNamespace::AchievementSO* totalScore100MillionAchievement;
    // private AchievementSO _24HoursPlayedAchievement
    // Offset: 0x30
    GlobalNamespace::AchievementSO* _24HoursPlayedAchievement;
    // private AchievementSO _kilometersTravelled100Achievement
    // Offset: 0x38
    GlobalNamespace::AchievementSO* kilometersTravelled100Achievement;
    // private AchievementSO _15ExpertLevelsRankSAchievement
    // Offset: 0x40
    GlobalNamespace::AchievementSO* _15ExpertLevelsRankSAchievement;
    // private AchievementSO _15ExpertLevelsFullComboAchievement
    // Offset: 0x48
    GlobalNamespace::AchievementSO* _15ExpertLevelsFullComboAchievement;
    // private AchievementSO _15HardLevelsRankSAchievement
    // Offset: 0x50
    GlobalNamespace::AchievementSO* _15HardLevelsRankSAchievement;
    // private AchievementSO _15HardLevelsFullComboAchievement
    // Offset: 0x58
    GlobalNamespace::AchievementSO* _15HardLevelsFullComboAchievement;
    // private AchievementSO _expertLevelClearedWithoutModifiersAchievement
    // Offset: 0x60
    GlobalNamespace::AchievementSO* expertLevelClearedWithoutModifiersAchievement;
    // private AchievementSO _fullComboExpertWithoutModifiersAchievement
    // Offset: 0x68
    GlobalNamespace::AchievementSO* fullComboExpertWithoutModifiersAchievement;
    // private AchievementSO _goodCuts10000Achievement
    // Offset: 0x70
    GlobalNamespace::AchievementSO* goodCuts10000Achievement;
    // private AchievementSO _resultMinRankANormalWithoutModifiersAchievement
    // Offset: 0x78
    GlobalNamespace::AchievementSO* resultMinRankANormalWithoutModifiersAchievement;
    // private AchievementSO _resultMinRankSHardWithoutModifiersAchievement
    // Offset: 0x80
    GlobalNamespace::AchievementSO* resultMinRankSHardWithoutModifiersAchievement;
    // private AchievementSO _resultMinRankSSExpertWithoutModifiersAchievement
    // Offset: 0x88
    GlobalNamespace::AchievementSO* resultMinRankSSExpertWithoutModifiersAchievement;
    // private AchievementSO _combo50NormalWithoutModifiersAchievement
    // Offset: 0x90
    GlobalNamespace::AchievementSO* combo50NormalWithoutModifiersAchievement;
    // private AchievementSO _combo100HardWithoutModifiersAchievement
    // Offset: 0x98
    GlobalNamespace::AchievementSO* combo100HardWithoutModifiersAchievement;
    // private AchievementSO _combo500ExpertWithoutModifiersAchievement
    // Offset: 0xA0
    GlobalNamespace::AchievementSO* combo500ExpertWithoutModifiersAchievement;
    // private AchievementSO _clearedLevelWithoutModifiersAchievement
    // Offset: 0xA8
    GlobalNamespace::AchievementSO* clearedLevelWithoutModifiersAchievement;
    // private AchievementSO _clearedLevelWithSongSpeedFasterModifierAchievement
    // Offset: 0xB0
    GlobalNamespace::AchievementSO* clearedLevelWithSongSpeedFasterModifierAchievement;
    // private AchievementSO _clearedLevelWithInstaFailModifierAchievement
    // Offset: 0xB8
    GlobalNamespace::AchievementSO* clearedLevelWithInstaFailModifierAchievement;
    // private AchievementSO _clearedLevelWithDisappearingArrowsModifierAchievement
    // Offset: 0xC0
    GlobalNamespace::AchievementSO* clearedLevelWithDisappearingArrowsModifierAchievement;
    // private AchievementSO _clearedLevelWithBatteryEnergyModifierAchievement
    // Offset: 0xC8
    GlobalNamespace::AchievementSO* clearedLevelWithBatteryEnergyModifierAchievement;
    // private AchievementSO _cleared30MissionsAchievement
    // Offset: 0xD0
    GlobalNamespace::AchievementSO* cleared30MissionsAchievement;
    // private AchievementSO _finalMissionClearedAchievement
    // Offset: 0xD8
    GlobalNamespace::AchievementSO* finalMissionClearedAchievement;
    // private AchievementSO _allMissionClearedAchievement
    // Offset: 0xE0
    GlobalNamespace::AchievementSO* allMissionClearedAchievement;
    // private PlayerDataModel _playerDataModel
    // Offset: 0xE8
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // private MissionNodesManager _missionNodesManager
    // Offset: 0xF0
    GlobalNamespace::MissionNodesManager* missionNodesManager;
    // protected System.Void Start()
    // Offset: 0x1967F00
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x196811C
    void OnDestroy();
    // private System.Void HandleSoloFreePlayOverallStatsDataDidUpdate(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x19682BC
    void HandleSoloFreePlayOverallStatsDataDidUpdate(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // private System.Void HandlePartyFreePlayOverallStatsDataDidUpdate(LevelCompletionResults levelCompletionResults, IDifficultyBeatmap difficultyBeatmap)
    // Offset: 0x1968D8C
    void HandlePartyFreePlayOverallStatsDataDidUpdate(GlobalNamespace::LevelCompletionResults* levelCompletionResults, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap);
    // public System.Void HandleCampaignOverallStatsDataDidUpdate(MissionCompletionResults missionCompletionResults, MissionNode missionNode)
    // Offset: 0x1968D9C
    void HandleCampaignOverallStatsDataDidUpdate(GlobalNamespace::MissionCompletionResults* missionCompletionResults, GlobalNamespace::MissionNode* missionNode);
    // private System.Void ProcessMissionFinishData(MissionNode missionNode, MissionCompletionResults missionCompletionResults)
    // Offset: 0x1968E18
    void ProcessMissionFinishData(GlobalNamespace::MissionNode* missionNode, GlobalNamespace::MissionCompletionResults* missionCompletionResults);
    // private System.Void ProcessSoloFreePlayLevelFinishData(IDifficultyBeatmap difficultyBeatmap, LevelCompletionResults levelCompletionResults)
    // Offset: 0x19689A8
    void ProcessSoloFreePlayLevelFinishData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // private System.Void ProcessLevelFinishData(IDifficultyBeatmap difficultyBeatmap, LevelCompletionResults levelCompletionResults)
    // Offset: 0x1968300
    void ProcessLevelFinishData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::LevelCompletionResults* levelCompletionResults);
    // public System.Void .ctor()
    // Offset: 0x1969298
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static AchievementsEvaluationHandler* New_ctor();
  }; // AchievementsEvaluationHandler
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AchievementsEvaluationHandler*, "", "AchievementsEvaluationHandler");
#pragma pack(pop)
