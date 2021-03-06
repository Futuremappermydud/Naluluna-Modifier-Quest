// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRNetwork
#include "GlobalNamespace/OVRNetwork.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRNetwork/FrameHeader
  struct OVRNetwork::FrameHeader : public System::ValueType {
    public:
    // public System.UInt32 protocolIdentifier
    // Offset: 0x0
    uint protocolIdentifier;
    // public System.Int32 payloadType
    // Offset: 0x4
    int payloadType;
    // public System.Int32 payloadLength
    // Offset: 0x8
    int payloadLength;
    // static field const value: static public System.Int32 StructSize
    static constexpr const int StructSize = 12;
    // Get static field: static public System.Int32 StructSize
    static int _get_StructSize();
    // Set static field: static public System.Int32 StructSize
    static void _set_StructSize(int value);
    // Creating value type constructor for type: FrameHeader
    FrameHeader(uint protocolIdentifier_ = {}, int payloadType_ = {}, int payloadLength_ = {}) : protocolIdentifier{protocolIdentifier_}, payloadType{payloadType_}, payloadLength{payloadLength_} {}
    // public System.Byte[] ToBytes()
    // Offset: 0xA39A0C
    ::Array<uint8_t>* ToBytes();
    // static public OVRNetwork/FrameHeader FromBytes(System.Byte[] arr)
    // Offset: 0xEEF480
    static GlobalNamespace::OVRNetwork::FrameHeader FromBytes(::Array<uint8_t>* arr);
  }; // OVRNetwork/FrameHeader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRNetwork::FrameHeader, "", "OVRNetwork/FrameHeader");
#pragma pack(pop)
