// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:04 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: ScreenshotType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScreenCaptureCache
  class ScreenCaptureCache : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::ScreenCaptureCache::ScreenshotType
    struct ScreenshotType;
    // Autogenerated type: ScreenCaptureCache/ScreenshotType
    struct ScreenshotType : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // static field const value: static public ScreenCaptureCache/ScreenshotType Game
      static constexpr const int Game = 0;
      // Get static field: static public ScreenCaptureCache/ScreenshotType Game
      static GlobalNamespace::ScreenCaptureCache::ScreenshotType _get_Game();
      // Set static field: static public ScreenCaptureCache/ScreenshotType Game
      static void _set_Game(GlobalNamespace::ScreenCaptureCache::ScreenshotType value);
      // static field const value: static public ScreenCaptureCache/ScreenshotType Menu
      static constexpr const int Menu = 1;
      // Get static field: static public ScreenCaptureCache/ScreenshotType Menu
      static GlobalNamespace::ScreenCaptureCache::ScreenshotType _get_Menu();
      // Set static field: static public ScreenCaptureCache/ScreenshotType Menu
      static void _set_Menu(GlobalNamespace::ScreenCaptureCache::ScreenshotType value);
      // static field const value: static public ScreenCaptureCache/ScreenshotType Other
      static constexpr const int Other = 2;
      // Get static field: static public ScreenCaptureCache/ScreenshotType Other
      static GlobalNamespace::ScreenCaptureCache::ScreenshotType _get_Other();
      // Set static field: static public ScreenCaptureCache/ScreenshotType Other
      static void _set_Other(GlobalNamespace::ScreenCaptureCache::ScreenshotType value);
      // Creating value type constructor for type: ScreenshotType
      ScreenshotType(int value_ = {}) : value{value_} {}
    }; // ScreenCaptureCache/ScreenshotType
    // private System.Collections.Generic.Dictionary`2<ScreenCaptureCache/ScreenshotType,UnityEngine.Texture2D> _cache
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<GlobalNamespace::ScreenCaptureCache::ScreenshotType, UnityEngine::Texture2D*>* cache;
    // public UnityEngine.Texture2D GetLastScreenshot(ScreenCaptureCache/ScreenshotType screenshotType)
    // Offset: 0x18FB724
    UnityEngine::Texture2D* GetLastScreenshot(GlobalNamespace::ScreenCaptureCache::ScreenshotType screenshotType);
    // public System.Void StoreScreenshot(ScreenCaptureCache/ScreenshotType screenshotType, UnityEngine.Texture2D texture)
    // Offset: 0x18FB3C4
    void StoreScreenshot(GlobalNamespace::ScreenCaptureCache::ScreenshotType screenshotType, UnityEngine::Texture2D* texture);
    // public System.Void .ctor()
    // Offset: 0x18FB7A4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ScreenCaptureCache* New_ctor();
  }; // ScreenCaptureCache
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenCaptureCache*, "", "ScreenCaptureCache");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScreenCaptureCache::ScreenshotType, "", "ScreenCaptureCache/ScreenshotType");
#pragma pack(pop)
