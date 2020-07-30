// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:49 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RealProxy
  class RealProxy;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Proxies
namespace System::Runtime::Remoting::Proxies {
  // Autogenerated type: System.Runtime.Remoting.Proxies.ProxyAttribute
  class ProxyAttribute : public System::Attribute {
    public:
    // public System.MarshalByRefObject CreateInstance(System.Type serverType)
    // Offset: 0xDFF2D4
    System::MarshalByRefObject* CreateInstance(System::Type* serverType);
    // public System.Runtime.Remoting.Proxies.RealProxy CreateProxy(System.Runtime.Remoting.ObjRef objRef, System.Type serverType, System.Object serverObject, System.Runtime.Remoting.Contexts.Context serverContext)
    // Offset: 0xDFF418
    System::Runtime::Remoting::Proxies::RealProxy* CreateProxy(System::Runtime::Remoting::ObjRef* objRef, System::Type* serverType, ::Il2CppObject* serverObject, System::Runtime::Remoting::Contexts::Context* serverContext);
  }; // System.Runtime.Remoting.Proxies.ProxyAttribute
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Proxies::ProxyAttribute*, "System.Runtime.Remoting.Proxies", "ProxyAttribute");
#pragma pack(pop)
