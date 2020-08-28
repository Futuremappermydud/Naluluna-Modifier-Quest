// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ISaberMovementDataProcessor
  class ISaberMovementDataProcessor;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberMovementData
  class SaberMovementData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::SaberMovementData::Data
    struct Data;
    // private SaberMovementData/Data[] _data
    // Offset: 0x10
    ::Array<GlobalNamespace::SaberMovementData::Data>* data;
    // private System.Collections.Generic.List`1<ISaberMovementDataProcessor> _dataProcessors
    // Offset: 0x18
    System::Collections::Generic::List_1<GlobalNamespace::ISaberMovementDataProcessor*>* dataProcessors;
    // private System.Int32 _nextAddIndex
    // Offset: 0x20
    int nextAddIndex;
    // private System.Int32 _validCount
    // Offset: 0x24
    int validCount;
    // private System.Single _bladeSpeed
    // Offset: 0x28
    float bladeSpeed;
    // static field const value: static private System.Single kOutOfRangeBladeSpeed
    static constexpr const float kOutOfRangeBladeSpeed = 100;
    // Get static field: static private System.Single kOutOfRangeBladeSpeed
    static float _get_kOutOfRangeBladeSpeed();
    // Set static field: static private System.Single kOutOfRangeBladeSpeed
    static void _set_kOutOfRangeBladeSpeed(float value);
    // static field const value: static private System.Single kSmoothUpBladeSpeedCoef
    static constexpr const float kSmoothUpBladeSpeedCoef = 24;
    // Get static field: static private System.Single kSmoothUpBladeSpeedCoef
    static float _get_kSmoothUpBladeSpeedCoef();
    // Set static field: static private System.Single kSmoothUpBladeSpeedCoef
    static void _set_kSmoothUpBladeSpeedCoef(float value);
    // static field const value: static private System.Single kSmoothDownBladeSpeedCoef
    static constexpr const float kSmoothDownBladeSpeedCoef = 2;
    // Get static field: static private System.Single kSmoothDownBladeSpeedCoef
    static float _get_kSmoothDownBladeSpeedCoef();
    // Set static field: static private System.Single kSmoothDownBladeSpeedCoef
    static void _set_kSmoothDownBladeSpeedCoef(float value);
    // public System.Single get_bladeSpeed()
    // Offset: 0xC28C94
    float get_bladeSpeed();
    // public SaberMovementData/Data get_lastAddedData()
    // Offset: 0xC23F9C
    GlobalNamespace::SaberMovementData::Data get_lastAddedData();
    // public System.Void AddDataProcessor(ISaberMovementDataProcessor dataProcessor)
    // Offset: 0xC28C9C
    void AddDataProcessor(GlobalNamespace::ISaberMovementDataProcessor* dataProcessor);
    // public System.Void RemoveDataProcessor(ISaberMovementDataProcessor dataProcessor)
    // Offset: 0xC28D34
    void RemoveDataProcessor(GlobalNamespace::ISaberMovementDataProcessor* dataProcessor);
    // public System.Void RequestLastDataProcessing(ISaberMovementDataProcessor dataProcessor)
    // Offset: 0xC28D9C
    void RequestLastDataProcessing(GlobalNamespace::ISaberMovementDataProcessor* dataProcessor);
    // public System.Void AddNewData(UnityEngine.Vector3 topPos, UnityEngine.Vector3 bottomPos, System.Single time)
    // Offset: 0xC24004
    void AddNewData(UnityEngine::Vector3 topPos, UnityEngine::Vector3 bottomPos, float time);
    // public System.Void ComputeAdditionalData(UnityEngine.Vector3 topPos, UnityEngine.Vector3 bottomPos, System.Int32 idxOffset, UnityEngine.Vector3 segmentNormal, System.Single segmentAngle)
    // Offset: 0xC28F40
    void ComputeAdditionalData(UnityEngine::Vector3 topPos, UnityEngine::Vector3 bottomPos, int idxOffset, UnityEngine::Vector3& segmentNormal, float& segmentAngle);
    // public UnityEngine.Vector3 ComputePlaneNormal(UnityEngine.Vector3 tp0, UnityEngine.Vector3 bp0, UnityEngine.Vector3 tp1, UnityEngine.Vector3 bp1)
    // Offset: 0xC29128
    UnityEngine::Vector3 ComputePlaneNormal(UnityEngine::Vector3 tp0, UnityEngine::Vector3 bp0, UnityEngine::Vector3 tp1, UnityEngine::Vector3 bp1);
    // public UnityEngine.Vector3 ComputeCutPlaneNormal()
    // Offset: 0xC2928C
    UnityEngine::Vector3 ComputeCutPlaneNormal();
    // public System.Single ComputeSwingRating(System.Single overrideSegmentAngle)
    // Offset: 0xC29338
    float ComputeSwingRating(float overrideSegmentAngle);
    // public System.Single ComputeSwingRating()
    // Offset: 0xC29568
    float ComputeSwingRating();
    // private System.Single ComputeSwingRating(System.Boolean overrideSegmenAngle, System.Single overrideValue)
    // Offset: 0xC29340
    float ComputeSwingRating(bool overrideSegmenAngle, float overrideValue);
    // public System.Void .ctor()
    // Offset: 0xC24D14
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SaberMovementData* New_ctor();
  }; // SaberMovementData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberMovementData*, "", "SaberMovementData");
#pragma pack(pop)
