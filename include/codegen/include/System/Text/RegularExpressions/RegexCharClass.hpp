// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:17 PM
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
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
  // Forward declaring type: UnicodeCategory
  struct UnicodeCategory;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Autogenerated type: System.Text.RegularExpressions.RegexCharClass
  class RegexCharClass : public ::Il2CppObject {
    public:
    // Nested type: System::Text::RegularExpressions::RegexCharClass::LowerCaseMapping
    struct LowerCaseMapping;
    // Nested type: System::Text::RegularExpressions::RegexCharClass::SingleRangeComparer
    class SingleRangeComparer;
    // Nested type: System::Text::RegularExpressions::RegexCharClass::SingleRange
    class SingleRange;
    // private System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange> _rangelist
    // Offset: 0x10
    System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>* rangelist;
    // private System.Text.StringBuilder _categories
    // Offset: 0x18
    System::Text::StringBuilder* categories;
    // private System.Boolean _canonical
    // Offset: 0x20
    bool canonical;
    // private System.Boolean _negate
    // Offset: 0x21
    bool negate;
    // private System.Text.RegularExpressions.RegexCharClass _subtractor
    // Offset: 0x28
    System::Text::RegularExpressions::RegexCharClass* subtractor;
    // Get static field: static private readonly System.String InternalRegexIgnoreCase
    static ::Il2CppString* _get_InternalRegexIgnoreCase();
    // Set static field: static private readonly System.String InternalRegexIgnoreCase
    static void _set_InternalRegexIgnoreCase(::Il2CppString* value);
    // Get static field: static private readonly System.String Space
    static ::Il2CppString* _get_Space();
    // Set static field: static private readonly System.String Space
    static void _set_Space(::Il2CppString* value);
    // Get static field: static private readonly System.String NotSpace
    static ::Il2CppString* _get_NotSpace();
    // Set static field: static private readonly System.String NotSpace
    static void _set_NotSpace(::Il2CppString* value);
    // Get static field: static private readonly System.String Word
    static ::Il2CppString* _get_Word();
    // Set static field: static private readonly System.String Word
    static void _set_Word(::Il2CppString* value);
    // Get static field: static private readonly System.String NotWord
    static ::Il2CppString* _get_NotWord();
    // Set static field: static private readonly System.String NotWord
    static void _set_NotWord(::Il2CppString* value);
    // Get static field: static readonly System.String SpaceClass
    static ::Il2CppString* _get_SpaceClass();
    // Set static field: static readonly System.String SpaceClass
    static void _set_SpaceClass(::Il2CppString* value);
    // Get static field: static readonly System.String NotSpaceClass
    static ::Il2CppString* _get_NotSpaceClass();
    // Set static field: static readonly System.String NotSpaceClass
    static void _set_NotSpaceClass(::Il2CppString* value);
    // Get static field: static readonly System.String WordClass
    static ::Il2CppString* _get_WordClass();
    // Set static field: static readonly System.String WordClass
    static void _set_WordClass(::Il2CppString* value);
    // Get static field: static readonly System.String NotWordClass
    static ::Il2CppString* _get_NotWordClass();
    // Set static field: static readonly System.String NotWordClass
    static void _set_NotWordClass(::Il2CppString* value);
    // Get static field: static readonly System.String DigitClass
    static ::Il2CppString* _get_DigitClass();
    // Set static field: static readonly System.String DigitClass
    static void _set_DigitClass(::Il2CppString* value);
    // Get static field: static readonly System.String NotDigitClass
    static ::Il2CppString* _get_NotDigitClass();
    // Set static field: static readonly System.String NotDigitClass
    static void _set_NotDigitClass(::Il2CppString* value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> _definedCategories
    static System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* _get__definedCategories();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.String,System.String> _definedCategories
    static void _set__definedCategories(System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* value);
    // Get static field: static private readonly System.String[,] _propTable
    static ::Array<::Il2CppString*>* _get__propTable();
    // Set static field: static private readonly System.String[,] _propTable
    static void _set__propTable(::Array<::Il2CppString*>* value);
    // Get static field: static private readonly System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping[] _lcTable
    static ::Array<System::Text::RegularExpressions::RegexCharClass::LowerCaseMapping>* _get__lcTable();
    // Set static field: static private readonly System.Text.RegularExpressions.RegexCharClass/LowerCaseMapping[] _lcTable
    static void _set__lcTable(::Array<System::Text::RegularExpressions::RegexCharClass::LowerCaseMapping>* value);
    // static private System.Void .cctor()
    // Offset: 0x120B148
    static void _cctor();
    // private System.Void .ctor(System.Boolean negate, System.Collections.Generic.List`1<System.Text.RegularExpressions.RegexCharClass/SingleRange> ranges, System.Text.StringBuilder categories, System.Text.RegularExpressions.RegexCharClass subtraction)
    // Offset: 0x120FEA4
    static RegexCharClass* New_ctor(bool negate, System::Collections::Generic::List_1<System::Text::RegularExpressions::RegexCharClass::SingleRange*>* ranges, System::Text::StringBuilder* categories, System::Text::RegularExpressions::RegexCharClass* subtraction);
    // System.Boolean get_CanMerge()
    // Offset: 0x120FF24
    bool get_CanMerge();
    // System.Void set_Negate(System.Boolean value)
    // Offset: 0x120FF44
    void set_Negate(bool value);
    // System.Void AddChar(System.Char c)
    // Offset: 0x120FF50
    void AddChar(::Il2CppChar c);
    // System.Void AddCharClass(System.Text.RegularExpressions.RegexCharClass cc)
    // Offset: 0x1210034
    void AddCharClass(System::Text::RegularExpressions::RegexCharClass* cc);
    // private System.Void AddSet(System.String set)
    // Offset: 0x1210240
    void AddSet(::Il2CppString* set);
    // System.Void AddSubtraction(System.Text.RegularExpressions.RegexCharClass sub)
    // Offset: 0x1210480
    void AddSubtraction(System::Text::RegularExpressions::RegexCharClass* sub);
    // System.Void AddRange(System.Char first, System.Char last)
    // Offset: 0x120FF58
    void AddRange(::Il2CppChar first, ::Il2CppChar last);
    // System.Void AddCategoryFromName(System.String categoryName, System.Boolean invert, System.Boolean caseInsensitive, System.String pattern)
    // Offset: 0x1210488
    void AddCategoryFromName(::Il2CppString* categoryName, bool invert, bool caseInsensitive, ::Il2CppString* pattern);
    // private System.Void AddCategory(System.String category)
    // Offset: 0x121099C
    void AddCategory(::Il2CppString* category);
    // System.Void AddLowercase(System.Globalization.CultureInfo culture)
    // Offset: 0x12109B8
    void AddLowercase(System::Globalization::CultureInfo* culture);
    // private System.Void AddLowercaseRange(System.Char chMin, System.Char chMax, System.Globalization.CultureInfo culture)
    // Offset: 0x1210AC4
    void AddLowercaseRange(::Il2CppChar chMin, ::Il2CppChar chMax, System::Globalization::CultureInfo* culture);
    // System.Void AddWord(System.Boolean ecma, System.Boolean negate)
    // Offset: 0x1210D24
    void AddWord(bool ecma, bool negate);
    // System.Void AddSpace(System.Boolean ecma, System.Boolean negate)
    // Offset: 0x1210E20
    void AddSpace(bool ecma, bool negate);
    // System.Void AddDigit(System.Boolean ecma, System.Boolean negate, System.String pattern)
    // Offset: 0x1210F1C
    void AddDigit(bool ecma, bool negate, ::Il2CppString* pattern);
    // static System.Char SingletonChar(System.String set)
    // Offset: 0x1210FCC
    static ::Il2CppChar SingletonChar(::Il2CppString* set);
    // static System.Boolean IsMergeable(System.String charClass)
    // Offset: 0x1210FE8
    static bool IsMergeable(::Il2CppString* charClass);
    // static System.Boolean IsEmpty(System.String charClass)
    // Offset: 0x121112C
    static bool IsEmpty(::Il2CppString* charClass);
    // static System.Boolean IsSingleton(System.String set)
    // Offset: 0x12111F4
    static bool IsSingleton(::Il2CppString* set);
    // static System.Boolean IsSingletonInverse(System.String set)
    // Offset: 0x1211310
    static bool IsSingletonInverse(::Il2CppString* set);
    // static private System.Boolean IsSubtraction(System.String charClass)
    // Offset: 0x12110C8
    static bool IsSubtraction(::Il2CppString* charClass);
    // static System.Boolean IsNegated(System.String set)
    // Offset: 0x121109C
    static bool IsNegated(::Il2CppString* set);
    // static System.Boolean IsECMAWordChar(System.Char ch)
    // Offset: 0x1211430
    static bool IsECMAWordChar(::Il2CppChar ch);
    // static System.Boolean IsWordChar(System.Char ch)
    // Offset: 0x1211518
    static bool IsWordChar(::Il2CppChar ch);
    // static System.Boolean CharInClass(System.Char ch, System.String set)
    // Offset: 0x12114A0
    static bool CharInClass(::Il2CppChar ch, ::Il2CppString* set);
    // static System.Boolean CharInClassRecursive(System.Char ch, System.String set, System.Int32 start)
    // Offset: 0x12115AC
    static bool CharInClassRecursive(::Il2CppChar ch, ::Il2CppString* set, int start);
    // static private System.Boolean CharInClassInternal(System.Char ch, System.String set, System.Int32 start, System.Int32 mySetLength, System.Int32 myCategoryLength)
    // Offset: 0x12116F4
    static bool CharInClassInternal(::Il2CppChar ch, ::Il2CppString* set, int start, int mySetLength, int myCategoryLength);
    // static private System.Boolean CharInCategory(System.Char ch, System.String set, System.Int32 start, System.Int32 mySetLength, System.Int32 myCategoryLength)
    // Offset: 0x1211814
    static bool CharInCategory(::Il2CppChar ch, ::Il2CppString* set, int start, int mySetLength, int myCategoryLength);
    // static private System.Boolean CharInCategoryGroup(System.Char ch, System.Globalization.UnicodeCategory chcategory, System.String category, System.Int32 i)
    // Offset: 0x12119CC
    static bool CharInCategoryGroup(::Il2CppChar ch, System::Globalization::UnicodeCategory chcategory, ::Il2CppString* category, int& i);
    // static private System.String NegateCategory(System.String category)
    // Offset: 0x120FD00
    static ::Il2CppString* NegateCategory(::Il2CppString* category);
    // static System.Text.RegularExpressions.RegexCharClass Parse(System.String charClass)
    // Offset: 0x1211AA0
    static System::Text::RegularExpressions::RegexCharClass* Parse(::Il2CppString* charClass);
    // static private System.Text.RegularExpressions.RegexCharClass ParseRecursive(System.String charClass, System.Int32 start)
    // Offset: 0x1211B08
    static System::Text::RegularExpressions::RegexCharClass* ParseRecursive(::Il2CppString* charClass, int start);
    // private System.Int32 RangeCount()
    // Offset: 0x1210178
    int RangeCount();
    // System.String ToStringClass()
    // Offset: 0x1211D34
    ::Il2CppString* ToStringClass();
    // private System.Text.RegularExpressions.RegexCharClass/SingleRange GetRangeAt(System.Int32 i)
    // Offset: 0x12101C8
    System::Text::RegularExpressions::RegexCharClass::SingleRange* GetRangeAt(int i);
    // private System.Void Canonicalize()
    // Offset: 0x1211EF4
    void Canonicalize();
    // static private System.String SetFromProperty(System.String capname, System.Boolean invert, System.String pattern)
    // Offset: 0x1210690
    static ::Il2CppString* SetFromProperty(::Il2CppString* capname, bool invert, ::Il2CppString* pattern);
    // System.Void .ctor()
    // Offset: 0x120FDF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static RegexCharClass* New_ctor();
  }; // System.Text.RegularExpressions.RegexCharClass
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexCharClass*, "System.Text.RegularExpressions", "RegexCharClass");
#pragma pack(pop)
