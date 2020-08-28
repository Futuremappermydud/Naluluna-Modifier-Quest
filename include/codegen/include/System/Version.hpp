// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.Version
  class Version : public ::Il2CppObject, public System::ICloneable, public System::IComparable, public System::IComparable_1<System::Version*>, public System::IEquatable_1<System::Version*> {
    public:
    // Nested type: System::Version::ParseFailureKind
    struct ParseFailureKind;
    // Nested type: System::Version::VersionResult
    struct VersionResult;
    // private System.Int32 _Major
    // Offset: 0x10
    int Major;
    // private System.Int32 _Minor
    // Offset: 0x14
    int Minor;
    // private System.Int32 _Build
    // Offset: 0x18
    int Build;
    // private System.Int32 _Revision
    // Offset: 0x1C
    int Revision;
    // Get static field: static private readonly System.Char[] SeparatorsArray
    static ::Array<::Il2CppChar>* _get_SeparatorsArray();
    // Set static field: static private readonly System.Char[] SeparatorsArray
    static void _set_SeparatorsArray(::Array<::Il2CppChar>* value);
    // static field const value: static private System.Int32 ZERO_CHAR_VALUE
    static constexpr const int ZERO_CHAR_VALUE = 48;
    // Get static field: static private System.Int32 ZERO_CHAR_VALUE
    static int _get_ZERO_CHAR_VALUE();
    // Set static field: static private System.Int32 ZERO_CHAR_VALUE
    static void _set_ZERO_CHAR_VALUE(int value);
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build, System.Int32 revision)
    // Offset: 0x17A0A48
    static Version* New_ctor(int major, int minor, int build, int revision);
    // public System.Void .ctor(System.Int32 major, System.Int32 minor, System.Int32 build)
    // Offset: 0x17A0BD8
    static Version* New_ctor(int major, int minor, int build);
    // public System.Void .ctor(System.Int32 major, System.Int32 minor)
    // Offset: 0x17A0D28
    static Version* New_ctor(int major, int minor);
    // public System.Void .ctor(System.String version)
    // Offset: 0x17A0E2C
    static Version* New_ctor(::Il2CppString* version);
    // public System.Int32 get_Major()
    // Offset: 0x17A1020
    int get_Major();
    // public System.Int32 get_Minor()
    // Offset: 0x17A1028
    int get_Minor();
    // public System.Int32 get_Build()
    // Offset: 0x17A1030
    int get_Build();
    // public System.Int32 get_Revision()
    // Offset: 0x17A1038
    int get_Revision();
    // public System.String ToString(System.Int32 fieldCount)
    // Offset: 0x17A14EC
    ::Il2CppString* ToString(int fieldCount);
    // static private System.Void AppendPositiveNumber(System.Int32 num, System.Text.StringBuilder sb)
    // Offset: 0x17A18A8
    static void AppendPositiveNumber(int num, System::Text::StringBuilder* sb);
    // static public System.Version Parse(System.String input)
    // Offset: 0x17A0EDC
    static System::Version* Parse(::Il2CppString* input);
    // static private System.Boolean TryParseVersion(System.String version, System.Version/VersionResult result)
    // Offset: 0x17A1940
    static bool TryParseVersion(::Il2CppString* version, System::Version::VersionResult& result);
    // static private System.Boolean TryParseComponent(System.String component, System.String componentName, System.Version/VersionResult result, System.Int32 parsedComponent)
    // Offset: 0x17A1E78
    static bool TryParseComponent(::Il2CppString* component, ::Il2CppString* componentName, System::Version::VersionResult& result, int& parsedComponent);
    // static private System.Void .cctor()
    // Offset: 0x17A228C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17A0FF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Version* New_ctor();
    // public System.Object Clone()
    // Offset: 0x17A1040
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // public System.Int32 CompareTo(System.Object version)
    // Offset: 0x17A10D4
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object version)
    int CompareTo(::Il2CppObject* version);
    // Creating proxy method: System_IComparable_CompareTo
    // Maps to method: CompareTo
    int System_IComparable_CompareTo(::Il2CppObject* version);
    // public System.Int32 CompareTo(System.Version value)
    // Offset: 0x17A1220
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable`1::CompareTo(System.Version value)
    int CompareTo(System::Version* value);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x17A1300
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.Version obj)
    // Offset: 0x17A13DC
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable`1::Equals(System.Version obj)
    bool Equals(System::Version* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x17A14A8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x17A14C4
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Version
  // static public System.Boolean op_Equality(System.Version v1, System.Version v2)
  // Offset: 0x17A120C
  bool operator ==(System::Version* v1, System::Version& v2);
  // static public System.Boolean op_Inequality(System.Version v1, System.Version v2)
  // Offset: 0x17A1FD4
  bool operator !=(System::Version* v1, System::Version& v2);
  // static public System.Boolean op_LessThan(System.Version v1, System.Version v2)
  // Offset: 0x17A2068
  bool operator <(System::Version* v1, System::Version& v2);
  // static public System.Boolean op_LessThanOrEqual(System.Version v1, System.Version v2)
  // Offset: 0x17A2104
  bool operator <=(System::Version* v1, System::Version& v2);
  // static public System.Boolean op_GreaterThan(System.Version v1, System.Version v2)
  // Offset: 0x17A21A4
  bool operator >(System::Version* v1, System::Version& v2);
  // static public System.Boolean op_GreaterThanOrEqual(System.Version v1, System.Version v2)
  // Offset: 0x17A2218
  bool operator >=(System::Version* v1, System::Version& v2);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Version*, "System", "Version");
#pragma pack(pop)
