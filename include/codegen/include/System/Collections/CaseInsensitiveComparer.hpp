// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:41 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Collections.IComparer
#include "System/Collections/IComparer.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CompareInfo
  class CompareInfo;
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.CaseInsensitiveComparer
  class CaseInsensitiveComparer : public ::Il2CppObject, public System::Collections::IComparer {
    public:
    // private System.Globalization.CompareInfo m_compareInfo
    // Offset: 0x10
    System::Globalization::CompareInfo* m_compareInfo;
    // public System.Void .ctor(System.Globalization.CultureInfo culture)
    // Offset: 0x131E528
    static CaseInsensitiveComparer* New_ctor(System::Globalization::CultureInfo* culture);
    // static public System.Collections.CaseInsensitiveComparer get_Default()
    // Offset: 0x131E5DC
    static System::Collections::CaseInsensitiveComparer* get_Default();
    // public System.Void .ctor()
    // Offset: 0x131E494
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CaseInsensitiveComparer* New_ctor();
    // public System.Int32 Compare(System.Object a, System.Object b)
    // Offset: 0x131E668
    // Implemented from: System.Collections.IComparer
    // Base method: System.Int32 IComparer::Compare(System.Object a, System.Object b)
    int Compare(::Il2CppObject* a, ::Il2CppObject* b);
    // Creating proxy method: System_Collections_IComparer_Compare
    // Maps to method: Compare
    int System_Collections_IComparer_Compare(::Il2CppObject* a, ::Il2CppObject* b);
  }; // System.Collections.CaseInsensitiveComparer
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::CaseInsensitiveComparer*, "System.Collections", "CaseInsensitiveComparer");
#pragma pack(pop)
