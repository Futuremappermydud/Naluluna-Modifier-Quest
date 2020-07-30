// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:47 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.EventArgs
#include "System/EventArgs.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.SafeSerializationEventArgs
  class SafeSerializationEventArgs : public System::EventArgs {
    public:
    // private System.Runtime.Serialization.StreamingContext m_streamingContext
    // Offset: 0x10
    System::Runtime::Serialization::StreamingContext m_streamingContext;
    // private System.Collections.Generic.List`1<System.Object> m_serializedStates
    // Offset: 0x20
    System::Collections::Generic::List_1<::Il2CppObject*>* m_serializedStates;
    // System.Void .ctor(System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0xFE7E94
    static SafeSerializationEventArgs* New_ctor(System::Runtime::Serialization::StreamingContext streamingContext);
    // System.Collections.Generic.IList`1<System.Object> get_SerializedStates()
    // Offset: 0xFE7F54
    System::Collections::Generic::IList_1<::Il2CppObject*>* get_SerializedStates();
  }; // System.Runtime.Serialization.SafeSerializationEventArgs
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SafeSerializationEventArgs*, "System.Runtime.Serialization", "SafeSerializationEventArgs");
#pragma pack(pop)
