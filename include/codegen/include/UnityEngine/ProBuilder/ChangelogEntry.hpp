// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:20 PM
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
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: SemVer
  class SemVer;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.ChangelogEntry
  class ChangelogEntry : public ::Il2CppObject {
    public:
    // private UnityEngine.ProBuilder.SemVer m_VersionInfo
    // Offset: 0x10
    UnityEngine::ProBuilder::SemVer* m_VersionInfo;
    // private System.String m_ReleaseNotes
    // Offset: 0x18
    ::Il2CppString* m_ReleaseNotes;
    // public UnityEngine.ProBuilder.SemVer get_versionInfo()
    // Offset: 0x1519430
    UnityEngine::ProBuilder::SemVer* get_versionInfo();
    // public System.String get_releaseNotes()
    // Offset: 0x1519438
    ::Il2CppString* get_releaseNotes();
    // public System.Void .ctor(UnityEngine.ProBuilder.SemVer version, System.String releaseNotes)
    // Offset: 0x15193E0
    static ChangelogEntry* New_ctor(UnityEngine::ProBuilder::SemVer* version, ::Il2CppString* releaseNotes);
    // public override System.String ToString()
    // Offset: 0x1519440
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.ProBuilder.ChangelogEntry
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ChangelogEntry*, "UnityEngine.ProBuilder", "ChangelogEntry");
#pragma pack(pop)
