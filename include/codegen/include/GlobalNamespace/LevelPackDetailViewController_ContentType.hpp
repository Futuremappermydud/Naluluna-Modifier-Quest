// Autogenerated from CppHeaderCreator on 7/24/2020 4:00:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.Enum
#include "System/Enum.hpp"
// Including type: LevelPackDetailViewController
#include "GlobalNamespace/LevelPackDetailViewController.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LevelPackDetailViewController/ContentType
  struct LevelPackDetailViewController::ContentType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // static field const value: static public LevelPackDetailViewController/ContentType Loading
    static constexpr const int Loading = 0;
    // Get static field: static public LevelPackDetailViewController/ContentType Loading
    static GlobalNamespace::LevelPackDetailViewController::ContentType _get_Loading();
    // Set static field: static public LevelPackDetailViewController/ContentType Loading
    static void _set_Loading(GlobalNamespace::LevelPackDetailViewController::ContentType value);
    // static field const value: static public LevelPackDetailViewController/ContentType Owned
    static constexpr const int Owned = 1;
    // Get static field: static public LevelPackDetailViewController/ContentType Owned
    static GlobalNamespace::LevelPackDetailViewController::ContentType _get_Owned();
    // Set static field: static public LevelPackDetailViewController/ContentType Owned
    static void _set_Owned(GlobalNamespace::LevelPackDetailViewController::ContentType value);
    // static field const value: static public LevelPackDetailViewController/ContentType Buy
    static constexpr const int Buy = 2;
    // Get static field: static public LevelPackDetailViewController/ContentType Buy
    static GlobalNamespace::LevelPackDetailViewController::ContentType _get_Buy();
    // Set static field: static public LevelPackDetailViewController/ContentType Buy
    static void _set_Buy(GlobalNamespace::LevelPackDetailViewController::ContentType value);
    // static field const value: static public LevelPackDetailViewController/ContentType Error
    static constexpr const int Error = 3;
    // Get static field: static public LevelPackDetailViewController/ContentType Error
    static GlobalNamespace::LevelPackDetailViewController::ContentType _get_Error();
    // Set static field: static public LevelPackDetailViewController/ContentType Error
    static void _set_Error(GlobalNamespace::LevelPackDetailViewController::ContentType value);
    // Creating value type constructor for type: ContentType
    ContentType(int value_ = {}) : value{value_} {}
  }; // LevelPackDetailViewController/ContentType
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelPackDetailViewController::ContentType, "", "LevelPackDetailViewController/ContentType");
#pragma pack(pop)
