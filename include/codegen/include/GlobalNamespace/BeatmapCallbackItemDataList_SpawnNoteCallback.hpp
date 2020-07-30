// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:28 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: BeatmapCallbackItemDataList
#include "GlobalNamespace/BeatmapCallbackItemDataList.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteData
  class NoteData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapCallbackItemDataList/SpawnNoteCallback
  class BeatmapCallbackItemDataList::SpawnNoteCallback : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x19765C0
    static BeatmapCallbackItemDataList::SpawnNoteCallback* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Void Invoke(NoteData noteData, System.Single cutDirectionAngleOffset)
    // Offset: 0x1975A28
    void Invoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset);
    // public System.IAsyncResult BeginInvoke(NoteData noteData, System.Single cutDirectionAngleOffset, System.AsyncCallback callback, System.Object object)
    // Offset: 0x19765D4
    System::IAsyncResult* BeginInvoke(GlobalNamespace::NoteData* noteData, float cutDirectionAngleOffset, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1976670
    void EndInvoke(System::IAsyncResult* result);
  }; // BeatmapCallbackItemDataList/SpawnNoteCallback
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCallbackItemDataList::SpawnNoteCallback*, "", "BeatmapCallbackItemDataList/SpawnNoteCallback");
#pragma pack(pop)
