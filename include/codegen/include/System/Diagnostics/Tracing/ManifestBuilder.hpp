// Autogenerated from CppHeaderCreator on 7/27/2020 3:09:54 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Diagnostics.Tracing.EventManifestOptions
#include "System/Diagnostics/Tracing/EventManifestOptions.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventAttribute
  class EventAttribute;
  // Forward declaring type: EventLevel
  struct EventLevel;
  // Forward declaring type: EventTask
  struct EventTask;
  // Forward declaring type: EventOpcode
  struct EventOpcode;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Resources
namespace System::Resources {
  // Forward declaring type: ResourceManager
  class ResourceManager;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ManifestBuilder
  class ManifestBuilder : public ::Il2CppObject {
    public:
    // Nested type: System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_0
    class $$c__DisplayClass22_0;
    // Nested type: System::Diagnostics::Tracing::ManifestBuilder::$$c__DisplayClass22_1
    class $$c__DisplayClass22_1;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.String> opcodeTab
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* opcodeTab;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.String> taskTab
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, ::Il2CppString*>* taskTab;
    // private System.Collections.Generic.Dictionary`2<System.UInt64,System.String> keywordTab
    // Offset: 0x20
    System::Collections::Generic::Dictionary_2<uint64_t, ::Il2CppString*>* keywordTab;
    // private System.Collections.Generic.Dictionary`2<System.String,System.Type> mapsTab
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Type*>* mapsTab;
    // private System.Collections.Generic.Dictionary`2<System.String,System.String> stringTab
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* stringTab;
    // private System.Text.StringBuilder sb
    // Offset: 0x38
    System::Text::StringBuilder* sb;
    // private System.Text.StringBuilder events
    // Offset: 0x40
    System::Text::StringBuilder* events;
    // private System.Text.StringBuilder templates
    // Offset: 0x48
    System::Text::StringBuilder* templates;
    // private System.Resources.ResourceManager resources
    // Offset: 0x50
    System::Resources::ResourceManager* resources;
    // private System.Diagnostics.Tracing.EventManifestOptions flags
    // Offset: 0x58
    System::Diagnostics::Tracing::EventManifestOptions flags;
    // private System.Collections.Generic.IList`1<System.String> errors
    // Offset: 0x60
    System::Collections::Generic::IList_1<::Il2CppString*>* errors;
    // private System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Int32>> perEventByteArrayArgIndices
    // Offset: 0x68
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::List_1<int>*>* perEventByteArrayArgIndices;
    // private System.String eventName
    // Offset: 0x70
    ::Il2CppString* eventName;
    // private System.Int32 numParams
    // Offset: 0x78
    int numParams;
    // private System.Collections.Generic.List`1<System.Int32> byteArrArgIndices
    // Offset: 0x80
    System::Collections::Generic::List_1<int>* byteArrArgIndices;
    // public System.Void .ctor(System.String providerName, System.Guid providerGuid, System.String dllName, System.Resources.ResourceManager resources, System.Diagnostics.Tracing.EventManifestOptions flags)
    // Offset: 0xD80F7C
    static ManifestBuilder* New_ctor(::Il2CppString* providerName, System::Guid providerGuid, ::Il2CppString* dllName, System::Resources::ResourceManager* resources, System::Diagnostics::Tracing::EventManifestOptions flags);
    // public System.Void AddOpcode(System.String name, System.Int32 value)
    // Offset: 0xD81328
    void AddOpcode(::Il2CppString* name, int value);
    // public System.Void AddTask(System.String name, System.Int32 value)
    // Offset: 0xD81774
    void AddTask(::Il2CppString* name, int value);
    // public System.Void AddKeyword(System.String name, System.UInt64 value)
    // Offset: 0xD81A68
    void AddKeyword(::Il2CppString* name, uint64_t value);
    // public System.Void StartEvent(System.String eventName, System.Diagnostics.Tracing.EventAttribute eventAttribute)
    // Offset: 0xD81F20
    void StartEvent(::Il2CppString* eventName, System::Diagnostics::Tracing::EventAttribute* eventAttribute);
    // public System.Void AddEventParameter(System.Type type, System.String name)
    // Offset: 0xD82A6C
    void AddEventParameter(System::Type* type, ::Il2CppString* name);
    // public System.Void EndEvent()
    // Offset: 0xD833F0
    void EndEvent();
    // public System.Byte[] CreateManifest()
    // Offset: 0xD83EF0
    ::Array<uint8_t>* CreateManifest();
    // public System.Collections.Generic.IList`1<System.String> get_Errors()
    // Offset: 0xD85360
    System::Collections::Generic::IList_1<::Il2CppString*>* get_Errors();
    // public System.Void ManifestError(System.String msg, System.Boolean runtimeCritical)
    // Offset: 0xD8165C
    void ManifestError(::Il2CppString* msg, bool runtimeCritical);
    // private System.String CreateManifestString()
    // Offset: 0xD83F30
    ::Il2CppString* CreateManifestString();
    // private System.Void WriteNameAndMessageAttribs(System.Text.StringBuilder stringBuilder, System.String elementName, System.String name)
    // Offset: 0xD85368
    void WriteNameAndMessageAttribs(System::Text::StringBuilder* stringBuilder, ::Il2CppString* elementName, ::Il2CppString* name);
    // private System.Void WriteMessageAttrib(System.Text.StringBuilder stringBuilder, System.String elementName, System.String name, System.String value)
    // Offset: 0xD822C8
    void WriteMessageAttrib(System::Text::StringBuilder* stringBuilder, ::Il2CppString* elementName, ::Il2CppString* name, ::Il2CppString* value);
    // System.String GetLocalizedMessage(System.String key, System.Globalization.CultureInfo ci, System.Boolean etwFormat)
    // Offset: 0xD855D4
    ::Il2CppString* GetLocalizedMessage(::Il2CppString* key, System::Globalization::CultureInfo* ci, bool etwFormat);
    // static private System.Collections.Generic.List`1<System.Globalization.CultureInfo> GetSupportedCultures(System.Resources.ResourceManager resources)
    // Offset: 0xD85420
    static System::Collections::Generic::List_1<System::Globalization::CultureInfo*>* GetSupportedCultures(System::Resources::ResourceManager* resources);
    // static private System.String GetLevelName(System.Diagnostics.Tracing.EventLevel level)
    // Offset: 0xD82204
    static ::Il2CppString* GetLevelName(System::Diagnostics::Tracing::EventLevel level);
    // private System.String GetTaskName(System.Diagnostics.Tracing.EventTask task, System.String eventName)
    // Offset: 0xD8296C
    ::Il2CppString* GetTaskName(System::Diagnostics::Tracing::EventTask task, ::Il2CppString* eventName);
    // private System.String GetOpcodeName(System.Diagnostics.Tracing.EventOpcode opcode, System.String eventName)
    // Offset: 0xD82758
    ::Il2CppString* GetOpcodeName(System::Diagnostics::Tracing::EventOpcode opcode, ::Il2CppString* eventName);
    // private System.String GetKeywords(System.UInt64 keywords, System.String eventName)
    // Offset: 0xD824D8
    ::Il2CppString* GetKeywords(uint64_t keywords, ::Il2CppString* eventName);
    // private System.String GetTypeName(System.Type type)
    // Offset: 0xD82F9C
    ::Il2CppString* GetTypeName(System::Type* type);
    // static private System.Void UpdateStringBuilder(System.Text.StringBuilder stringBuilder, System.String eventMessage, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xD856F0
    static void UpdateStringBuilder(System::Text::StringBuilder*& stringBuilder, ::Il2CppString* eventMessage, int startIndex, int count);
    // private System.String TranslateToManifestConvention(System.String eventMessage, System.String evtName)
    // Offset: 0xD835D4
    ::Il2CppString* TranslateToManifestConvention(::Il2CppString* eventMessage, ::Il2CppString* evtName);
    // private System.Int32 TranslateIndexToManifestConvention(System.Int32 idx, System.String evtName)
    // Offset: 0xD857AC
    int TranslateIndexToManifestConvention(int idx, ::Il2CppString* evtName);
  }; // System.Diagnostics.Tracing.ManifestBuilder
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ManifestBuilder*, "System.Diagnostics.Tracing", "ManifestBuilder");
#pragma pack(pop)
