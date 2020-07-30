// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:42 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Text.DecoderNLS
#include "System/Text/DecoderNLS.hpp"
// Including type: System.Text.UnicodeEncoding
#include "System/Text/UnicodeEncoding.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Autogenerated type: System.Text.UnicodeEncoding/Decoder
  class UnicodeEncoding::Decoder : public System::Text::DecoderNLS, public System::Runtime::Serialization::ISerializable {
    public:
    // System.Int32 lastByte
    // Offset: 0x30
    int lastByte;
    // System.Char lastChar
    // Offset: 0x34
    ::Il2CppChar lastChar;
    // public System.Void .ctor(System.Text.UnicodeEncoding encoding)
    // Offset: 0x13BF7B8
    static UnicodeEncoding::Decoder* New_ctor(System::Text::UnicodeEncoding* encoding);
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13BFD54
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static UnicodeEncoding::Decoder* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13C0148
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Void Reset()
    // Offset: 0x13C02A0
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Void DecoderNLS::Reset()
    void Reset();
    // override System.Boolean get_HasState()
    // Offset: 0x13C02C8
    // Implemented from: System.Text.DecoderNLS
    // Base method: System.Boolean DecoderNLS::get_HasState()
    bool get_HasState();
  }; // System.Text.UnicodeEncoding/Decoder
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::UnicodeEncoding::Decoder*, "System.Text", "UnicodeEncoding/Decoder");
#pragma pack(pop)
