// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:46 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.IThreadPoolWorkItem
  class IThreadPoolWorkItem {
    public:
    // public System.Void ExecuteWorkItem()
    // Offset: 0xFFFFFFFF
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // public System.Void MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0xFFFFFFFF
    void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae);
  }; // System.Threading.IThreadPoolWorkItem
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::IThreadPoolWorkItem*, "System.Threading", "IThreadPoolWorkItem");
#pragma pack(pop)
