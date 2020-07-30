// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:23 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: TMPro.TMP_FontAsset
#include "TMPro/TMP_FontAsset.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Character
  class TMP_Character;
}
// Forward declaring namespace: UnityEngine::TextCore
namespace UnityEngine::TextCore {
  // Forward declaring type: Glyph
  class Glyph;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_FontAsset/<>c
  class TMP_FontAsset::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly TMPro.TMP_FontAsset/<>c <>9
    static TMPro::TMP_FontAsset::$$c* _get_$$9();
    // Set static field: static public readonly TMPro.TMP_FontAsset/<>c <>9
    static void _set_$$9(TMPro::TMP_FontAsset::$$c* value);
    // Get static field: static public System.Func`2<TMPro.TMP_Character,System.UInt32> <>9__100_0
    static System::Func_2<TMPro::TMP_Character*, uint>* _get_$$9__100_0();
    // Set static field: static public System.Func`2<TMPro.TMP_Character,System.UInt32> <>9__100_0
    static void _set_$$9__100_0(System::Func_2<TMPro::TMP_Character*, uint>* value);
    // Get static field: static public System.Func`2<UnityEngine.TextCore.Glyph,System.UInt32> <>9__101_0
    static System::Func_2<UnityEngine::TextCore::Glyph*, uint>* _get_$$9__101_0();
    // Set static field: static public System.Func`2<UnityEngine.TextCore.Glyph,System.UInt32> <>9__101_0
    static void _set_$$9__101_0(System::Func_2<UnityEngine::TextCore::Glyph*, uint>* value);
    // static private System.Void .cctor()
    // Offset: 0xB74214
    static void _cctor();
    // System.UInt32 <SortCharacterTable>b__100_0(TMPro.TMP_Character c)
    // Offset: 0xB74284
    uint $SortCharacterTable$b__100_0(TMPro::TMP_Character* c);
    // System.UInt32 <SortGlyphTable>b__101_0(UnityEngine.TextCore.Glyph c)
    // Offset: 0xB7429C
    uint $SortGlyphTable$b__101_0(UnityEngine::TextCore::Glyph* c);
    // public System.Void .ctor()
    // Offset: 0xB7427C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TMP_FontAsset::$$c* New_ctor();
  }; // TMPro.TMP_FontAsset/<>c
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_FontAsset::$$c*, "TMPro", "TMP_FontAsset/<>c");
#pragma pack(pop)
