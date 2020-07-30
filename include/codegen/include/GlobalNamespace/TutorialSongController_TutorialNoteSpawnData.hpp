// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:31 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: TutorialSongController/TutorialObjectSpawnData
#include "GlobalNamespace/TutorialSongController_TutorialObjectSpawnData.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
// Including type: NoteType
#include "GlobalNamespace/NoteType.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TutorialSongController/TutorialNoteSpawnData
  class TutorialSongController::TutorialNoteSpawnData : public GlobalNamespace::TutorialSongController::TutorialObjectSpawnData {
    public:
    // public System.Int32 lineIndex
    // Offset: 0x20
    int lineIndex;
    // public NoteLineLayer noteLineLayer
    // Offset: 0x24
    GlobalNamespace::NoteLineLayer noteLineLayer;
    // public NoteCutDirection cutDirection
    // Offset: 0x28
    GlobalNamespace::NoteCutDirection cutDirection;
    // public NoteType noteType
    // Offset: 0x2C
    GlobalNamespace::NoteType noteType;
    // public System.Void .ctor(Signal gameEvent, System.Int32 firstTimeBeatOffset, System.Int32 beatOffset, System.Int32 line, NoteLineLayer noteLineLayer, NoteCutDirection cutDirection, NoteType noteType)
    // Offset: 0xC361A8
    static TutorialSongController::TutorialNoteSpawnData* New_ctor(GlobalNamespace::Signal* gameEvent, int firstTimeBeatOffset, int beatOffset, int line, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteCutDirection cutDirection, GlobalNamespace::NoteType noteType);
  }; // TutorialSongController/TutorialNoteSpawnData
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialSongController::TutorialNoteSpawnData*, "", "TutorialSongController/TutorialNoteSpawnData");
#pragma pack(pop)
