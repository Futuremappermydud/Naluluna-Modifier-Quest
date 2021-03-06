// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:12 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Valve.VR.IVRChaperoneSetup
#include "Valve/VR/IVRChaperoneSetup.hpp"
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
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: EChaperoneConfigFile
  struct EChaperoneConfigFile;
}
// Completed forward declares
// Type namespace: Valve.VR
namespace Valve::VR {
  // Autogenerated type: Valve.VR.IVRChaperoneSetup/_CommitWorkingCopy
  class IVRChaperoneSetup::_CommitWorkingCopy : public System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD34B4
    static IVRChaperoneSetup::_CommitWorkingCopy* New_ctor(::Il2CppObject* object, System::IntPtr method);
    // public System.Boolean Invoke(Valve.VR.EChaperoneConfigFile configFile)
    // Offset: 0xFCC744
    bool Invoke(Valve::VR::EChaperoneConfigFile configFile);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EChaperoneConfigFile configFile, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD34C8
    System::IAsyncResult* BeginInvoke(Valve::VR::EChaperoneConfigFile configFile, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0xFD3554
    bool EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRChaperoneSetup/_CommitWorkingCopy
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRChaperoneSetup::_CommitWorkingCopy*, "Valve.VR", "IVRChaperoneSetup/_CommitWorkingCopy");
#pragma pack(pop)
