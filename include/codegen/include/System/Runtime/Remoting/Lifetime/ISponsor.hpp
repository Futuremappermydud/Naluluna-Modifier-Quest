// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: ILease
  class ILease;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Autogenerated type: System.Runtime.Remoting.Lifetime.ISponsor
  class ISponsor {
    public:
    // public System.TimeSpan Renewal(System.Runtime.Remoting.Lifetime.ILease lease)
    // Offset: 0xFFFFFFFF
    System::TimeSpan Renewal(System::Runtime::Remoting::Lifetime::ILease* lease);
  }; // System.Runtime.Remoting.Lifetime.ISponsor
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::ISponsor*, "System.Runtime.Remoting.Lifetime", "ISponsor");
#pragma pack(pop)
