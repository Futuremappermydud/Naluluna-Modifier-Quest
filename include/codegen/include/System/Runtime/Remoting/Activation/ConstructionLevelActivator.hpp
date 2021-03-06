// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Runtime.Remoting.Activation.IActivator
#include "System/Runtime/Remoting/Activation/IActivator.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionReturnMessage
  class IConstructionReturnMessage;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Autogenerated type: System.Runtime.Remoting.Activation.ConstructionLevelActivator
  class ConstructionLevelActivator : public ::Il2CppObject, public System::Runtime::Remoting::Activation::IActivator {
    public:
    // public System.Runtime.Remoting.Activation.IActivator get_NextActivator()
    // Offset: 0x103E350
    // Implemented from: System.Runtime.Remoting.Activation.IActivator
    // Base method: System.Runtime.Remoting.Activation.IActivator IActivator::get_NextActivator()
    System::Runtime::Remoting::Activation::IActivator* get_NextActivator();
    // public System.Runtime.Remoting.Activation.IConstructionReturnMessage Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0x103E358
    // Implemented from: System.Runtime.Remoting.Activation.IActivator
    // Base method: System.Runtime.Remoting.Activation.IConstructionReturnMessage IActivator::Activate(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    System::Runtime::Remoting::Activation::IConstructionReturnMessage* Activate(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
    // public System.Void .ctor()
    // Offset: 0x103C7F0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConstructionLevelActivator* New_ctor();
  }; // System.Runtime.Remoting.Activation.ConstructionLevelActivator
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::ConstructionLevelActivator*, "System.Runtime.Remoting.Activation", "ConstructionLevelActivator");
#pragma pack(pop)
