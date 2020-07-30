// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:57 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Autogenerated type: NUnit.Framework.Constraints.FloatingPointNumerics
  class FloatingPointNumerics : public ::Il2CppObject {
    public:
    // Nested type: NUnit::Framework::Constraints::FloatingPointNumerics::FloatIntUnion
    struct FloatIntUnion;
    // Nested type: NUnit::Framework::Constraints::FloatingPointNumerics::DoubleLongUnion
    struct DoubleLongUnion;
    // static public System.Boolean AreAlmostEqualUlps(System.Single left, System.Single right, System.Int32 maxUlps)
    // Offset: 0x1063020
    static bool AreAlmostEqualUlps(float left, float right, int maxUlps);
    // static public System.Boolean AreAlmostEqualUlps(System.Double left, System.Double right, System.Int64 maxUlps)
    // Offset: 0x106313C
    static bool AreAlmostEqualUlps(double left, double right, int64_t maxUlps);
  }; // NUnit.Framework.Constraints.FloatingPointNumerics
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Constraints::FloatingPointNumerics*, "NUnit.Framework.Constraints", "FloatingPointNumerics");
#pragma pack(pop)
