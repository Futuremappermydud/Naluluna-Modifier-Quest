// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:01 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: FileStream
  class FileStream;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: CaptureAudioToWav
  class CaptureAudioToWav : public UnityEngine::MonoBehaviour {
    public:
    // private System.String _fileName
    // Offset: 0x18
    ::Il2CppString* fileName;
    // private System.Int32 _sampleRate
    // Offset: 0x20
    int sampleRate;
    // private System.Int32 _headerSize
    // Offset: 0x24
    int headerSize;
    // private System.Boolean _recording
    // Offset: 0x28
    bool recording;
    // private System.IO.FileStream _fileStream
    // Offset: 0x30
    System::IO::FileStream* fileStream;
    // protected System.Void Awake()
    // Offset: 0xC98224
    void Awake();
    // protected System.Void Update()
    // Offset: 0xC9825C
    void Update();
    // private System.Void StartWriting(System.String name)
    // Offset: 0xC9830C
    void StartWriting(::Il2CppString* name);
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0xC987B4
    void OnAudioFilterRead(::Array<float>* data, int channels);
    // private System.Void ConvertAndWrite(System.Single[] dataSource)
    // Offset: 0xC987C4
    void ConvertAndWrite(::Array<float>* dataSource);
    // private System.Void WriteHeader()
    // Offset: 0xC983D0
    void WriteHeader();
    // public System.Void .ctor()
    // Offset: 0xC98960
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static CaptureAudioToWav* New_ctor();
  }; // CaptureAudioToWav
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CaptureAudioToWav*, "", "CaptureAudioToWav");
#pragma pack(pop)
