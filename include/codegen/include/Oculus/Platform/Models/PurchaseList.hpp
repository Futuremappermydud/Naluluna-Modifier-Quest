// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:09 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: Oculus.Platform.Models.DeserializableList`1
#include "Oculus/Platform/Models/DeserializableList_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: Purchase
  class Purchase;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.PurchaseList
  class PurchaseList : public Oculus::Platform::Models::DeserializableList_1<Oculus::Platform::Models::Purchase*> {
    public:
    // public System.Void .ctor(System.IntPtr a)
    // Offset: 0xE91130
    static PurchaseList* New_ctor(System::IntPtr a);
  }; // Oculus.Platform.Models.PurchaseList
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::PurchaseList*, "Oculus.Platform.Models", "PurchaseList");
#pragma pack(pop)
