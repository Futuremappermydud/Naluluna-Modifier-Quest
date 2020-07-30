// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:21 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.ProBuilder.Edge
#include "UnityEngine/ProBuilder/Edge.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Bounds
  struct Bounds;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Bounds2D
  class Bounds2D;
  // Forward declaring type: Vertex
  class Vertex;
  // Forward declaring type: ProBuilderMesh
  class ProBuilderMesh;
  // Forward declaring type: Face
  class Face;
  // Forward declaring type: Normal
  struct Normal;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IComparable`1 because it is already included!
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.Math
  class Math : public ::Il2CppObject {
    public:
    // static field const value: static public System.Single phi
    static constexpr const float phi = 1.618034;
    // Get static field: static public System.Single phi
    static float _get_phi();
    // Set static field: static public System.Single phi
    static void _set_phi(float value);
    // static field const value: static private System.Single k_FltEpsilon
    static constexpr const float k_FltEpsilon = 1e-45;
    // Get static field: static private System.Single k_FltEpsilon
    static float _get_k_FltEpsilon();
    // Set static field: static private System.Single k_FltEpsilon
    static void _set_k_FltEpsilon(float value);
    // static field const value: static private System.Single k_FltCompareEpsilon
    static constexpr const float k_FltCompareEpsilon = 0.0001;
    // Get static field: static private System.Single k_FltCompareEpsilon
    static float _get_k_FltCompareEpsilon();
    // Set static field: static private System.Single k_FltCompareEpsilon
    static void _set_k_FltCompareEpsilon(float value);
    // static field const value: static System.Single handleEpsilon
    static constexpr const float handleEpsilon = 0.0001;
    // Get static field: static System.Single handleEpsilon
    static float _get_handleEpsilon();
    // Set static field: static System.Single handleEpsilon
    static void _set_handleEpsilon(float value);
    // Get static field: static private UnityEngine.Vector3 tv1
    static UnityEngine::Vector3 _get_tv1();
    // Set static field: static private UnityEngine.Vector3 tv1
    static void _set_tv1(UnityEngine::Vector3 value);
    // Get static field: static private UnityEngine.Vector3 tv2
    static UnityEngine::Vector3 _get_tv2();
    // Set static field: static private UnityEngine.Vector3 tv2
    static void _set_tv2(UnityEngine::Vector3 value);
    // Get static field: static private UnityEngine.Vector3 tv3
    static UnityEngine::Vector3 _get_tv3();
    // Set static field: static private UnityEngine.Vector3 tv3
    static void _set_tv3(UnityEngine::Vector3 value);
    // Get static field: static private UnityEngine.Vector3 tv4
    static UnityEngine::Vector3 _get_tv4();
    // Set static field: static private UnityEngine.Vector3 tv4
    static void _set_tv4(UnityEngine::Vector3 value);
    // static UnityEngine.Vector2 PointInCircumference(System.Single radius, System.Single angleInDegrees, UnityEngine.Vector2 origin)
    // Offset: 0xF88E54
    static UnityEngine::Vector2 PointInCircumference(float radius, float angleInDegrees, UnityEngine::Vector2 origin);
    // static UnityEngine.Vector3 PointInSphere(System.Single radius, System.Single latitudeAngle, System.Single longitudeAngle)
    // Offset: 0xF88F24
    static UnityEngine::Vector3 PointInSphere(float radius, float latitudeAngle, float longitudeAngle);
    // static System.Single SignedAngle(UnityEngine.Vector2 a, UnityEngine.Vector2 b)
    // Offset: 0xF89024
    static float SignedAngle(UnityEngine::Vector2 a, UnityEngine::Vector2 b);
    // static public System.Single SqrDistance(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0xF890D0
    static float SqrDistance(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // static public System.Single TriangleArea(UnityEngine.Vector3 x, UnityEngine.Vector3 y, UnityEngine.Vector3 z)
    // Offset: 0xF890F4
    static float TriangleArea(UnityEngine::Vector3 x, UnityEngine::Vector3 y, UnityEngine::Vector3 z);
    // static System.Single PolygonArea(UnityEngine.Vector3[] vertices, System.Int32[] indexes)
    // Offset: 0xF89268
    static float PolygonArea(::Array<UnityEngine::Vector3>* vertices, ::Array<int>* indexes);
    // static UnityEngine.Vector2 RotateAroundPoint(UnityEngine.Vector2 v, UnityEngine.Vector2 origin, System.Single theta)
    // Offset: 0xF89388
    static UnityEngine::Vector2 RotateAroundPoint(UnityEngine::Vector2 v, UnityEngine::Vector2 origin, float theta);
    // static public UnityEngine.Vector2 ScaleAroundPoint(UnityEngine.Vector2 v, UnityEngine.Vector2 origin, UnityEngine.Vector2 scale)
    // Offset: 0xF8946C
    static UnityEngine::Vector2 ScaleAroundPoint(UnityEngine::Vector2 v, UnityEngine::Vector2 origin, UnityEngine::Vector2 scale);
    // static UnityEngine.Vector2 Perpendicular(UnityEngine.Vector2 value)
    // Offset: 0xF8952C
    static UnityEngine::Vector2 Perpendicular(UnityEngine::Vector2 value);
    // static public UnityEngine.Vector2 ReflectPoint(UnityEngine.Vector2 point, UnityEngine.Vector2 lineStart, UnityEngine.Vector2 lineEnd)
    // Offset: 0xF89564
    static UnityEngine::Vector2 ReflectPoint(UnityEngine::Vector2 point, UnityEngine::Vector2 lineStart, UnityEngine::Vector2 lineEnd);
    // static System.Single SqrDistanceRayPoint(UnityEngine.Ray ray, UnityEngine.Vector3 point)
    // Offset: 0xF89740
    static float SqrDistanceRayPoint(UnityEngine::Ray ray, UnityEngine::Vector3 point);
    // static public System.Single DistancePointLineSegment(UnityEngine.Vector2 point, UnityEngine.Vector2 lineStart, UnityEngine.Vector2 lineEnd)
    // Offset: 0xF89860
    static float DistancePointLineSegment(UnityEngine::Vector2 point, UnityEngine::Vector2 lineStart, UnityEngine::Vector2 lineEnd);
    // static public System.Single DistancePointLineSegment(UnityEngine.Vector3 point, UnityEngine.Vector3 lineStart, UnityEngine.Vector3 lineEnd)
    // Offset: 0xF89A5C
    static float DistancePointLineSegment(UnityEngine::Vector3 point, UnityEngine::Vector3 lineStart, UnityEngine::Vector3 lineEnd);
    // static public UnityEngine.Vector3 GetNearestPointRayRay(UnityEngine.Ray a, UnityEngine.Ray b)
    // Offset: 0xF89D10
    static UnityEngine::Vector3 GetNearestPointRayRay(UnityEngine::Ray a, UnityEngine::Ray b);
    // static UnityEngine.Vector3 GetNearestPointRayRay(UnityEngine.Vector3 ao, UnityEngine.Vector3 ad, UnityEngine.Vector3 bo, UnityEngine.Vector3 bd)
    // Offset: 0xF89DD4
    static UnityEngine::Vector3 GetNearestPointRayRay(UnityEngine::Vector3 ao, UnityEngine::Vector3 ad, UnityEngine::Vector3 bo, UnityEngine::Vector3 bd);
    // static System.Boolean GetLineSegmentIntersect(UnityEngine.Vector2 p0, UnityEngine.Vector2 p1, UnityEngine.Vector2 p2, UnityEngine.Vector2 p3, UnityEngine.Vector2 intersect)
    // Offset: 0xF8A090
    static bool GetLineSegmentIntersect(UnityEngine::Vector2 p0, UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, UnityEngine::Vector2 p3, UnityEngine::Vector2& intersect);
    // static System.Boolean GetLineSegmentIntersect(UnityEngine.Vector2 p0, UnityEngine.Vector2 p1, UnityEngine.Vector2 p2, UnityEngine.Vector2 p3)
    // Offset: 0xF8A1C0
    static bool GetLineSegmentIntersect(UnityEngine::Vector2 p0, UnityEngine::Vector2 p1, UnityEngine::Vector2 p2, UnityEngine::Vector2 p3);
    // static System.Boolean PointInPolygon(UnityEngine.Vector2[] polygon, UnityEngine.Vector2 point, System.Int32[] indexes)
    // Offset: 0xF8A234
    static bool PointInPolygon(::Array<UnityEngine::Vector2>* polygon, UnityEngine::Vector2 point, ::Array<int>* indexes);
    // static System.Boolean PointInPolygon(UnityEngine.Vector2[] positions, UnityEngine.ProBuilder.Bounds2D polyBounds, UnityEngine.ProBuilder.Edge[] edges, UnityEngine.Vector2 point)
    // Offset: 0xF8A4F0
    static bool PointInPolygon(::Array<UnityEngine::Vector2>* positions, UnityEngine::ProBuilder::Bounds2D* polyBounds, ::Array<UnityEngine::ProBuilder::Edge>* edges, UnityEngine::Vector2 point);
    // static System.Boolean PointInPolygon(UnityEngine.Vector3[] positions, UnityEngine.ProBuilder.Bounds2D polyBounds, UnityEngine.ProBuilder.Edge[] edges, UnityEngine.Vector2 point)
    // Offset: 0xF8A654
    static bool PointInPolygon(::Array<UnityEngine::Vector3>* positions, UnityEngine::ProBuilder::Bounds2D* polyBounds, ::Array<UnityEngine::ProBuilder::Edge>* edges, UnityEngine::Vector2 point);
    // static System.Boolean RectIntersectsLineSegment(UnityEngine.Rect rect, UnityEngine.Vector2 a, UnityEngine.Vector2 b)
    // Offset: 0xF8A81C
    static bool RectIntersectsLineSegment(UnityEngine::Rect rect, UnityEngine::Vector2 a, UnityEngine::Vector2 b);
    // static System.Boolean RectIntersectsLineSegment(UnityEngine.Rect rect, UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0xF8A824
    static bool RectIntersectsLineSegment(UnityEngine::Rect rect, UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // static public System.Boolean RayIntersectsTriangle(UnityEngine.Ray InRay, UnityEngine.Vector3 InTriangleA, UnityEngine.Vector3 InTriangleB, UnityEngine.Vector3 InTriangleC, System.Single OutDistance, UnityEngine.Vector3 OutPoint)
    // Offset: 0xF83244
    static bool RayIntersectsTriangle(UnityEngine::Ray InRay, UnityEngine::Vector3 InTriangleA, UnityEngine::Vector3 InTriangleB, UnityEngine::Vector3 InTriangleC, float& OutDistance, UnityEngine::Vector3& OutPoint);
    // static System.Boolean RayIntersectsTriangle2(UnityEngine.Vector3 origin, UnityEngine.Vector3 dir, UnityEngine.Vector3 vert0, UnityEngine.Vector3 vert1, UnityEngine.Vector3 vert2, System.Single distance, UnityEngine.Vector3 normal)
    // Offset: 0xF8484C
    static bool RayIntersectsTriangle2(UnityEngine::Vector3 origin, UnityEngine::Vector3 dir, UnityEngine::Vector3 vert0, UnityEngine::Vector3 vert1, UnityEngine::Vector3 vert2, float& distance, UnityEngine::Vector3& normal);
    // static public System.Single Secant(System.Single x)
    // Offset: 0xF8A878
    static float Secant(float x);
    // static public UnityEngine.Vector3 Normal(UnityEngine.Vector3 p0, UnityEngine.Vector3 p1, UnityEngine.Vector3 p2)
    // Offset: 0xF8A8F0
    static UnityEngine::Vector3 Normal(UnityEngine::Vector3 p0, UnityEngine::Vector3 p1, UnityEngine::Vector3 p2);
    // static UnityEngine.Vector3 Normal(System.Collections.Generic.IList`1<UnityEngine.ProBuilder.Vertex> vertices, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0xF8AAAC
    static UnityEngine::Vector3 Normal(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex*>* vertices, System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector3 Normal(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0xF8B288
    static UnityEngine::Vector3 Normal(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static UnityEngine.Vector3 Normal(System.Collections.Generic.IList`1<UnityEngine.Vector3> p)
    // Offset: 0xF8B4DC
    static UnityEngine::Vector3 Normal(System::Collections::Generic::IList_1<UnityEngine::Vector3>* p);
    // static public UnityEngine.ProBuilder.Normal NormalTangentBitangent(UnityEngine.ProBuilder.ProBuilderMesh mesh, UnityEngine.ProBuilder.Face face)
    // Offset: 0xF85764
    static UnityEngine::ProBuilder::Normal NormalTangentBitangent(UnityEngine::ProBuilder::ProBuilderMesh* mesh, UnityEngine::ProBuilder::Face* face);
    // static System.Boolean IsCardinalAxis(UnityEngine.Vector3 v, System.Single epsilon)
    // Offset: 0xF8BBEC
    static bool IsCardinalAxis(UnityEngine::Vector3 v, float epsilon);
    // static UnityEngine.Vector2 DivideBy(UnityEngine.Vector2 v, UnityEngine.Vector2 o)
    // Offset: 0xF8BDE0
    static UnityEngine::Vector2 DivideBy(UnityEngine::Vector2 v, UnityEngine::Vector2 o);
    // static UnityEngine.Vector3 DivideBy(UnityEngine.Vector3 v, UnityEngine.Vector3 o)
    // Offset: 0xF8BE14
    static UnityEngine::Vector3 DivideBy(UnityEngine::Vector3 v, UnityEngine::Vector3 o);
    // static T Max(T[] array)
    // Offset: 0xD3A7F4
    template<class T>
    static T Max(::Array<T>* array) {
      static_assert(std::is_convertible_v<T, System::IComparable_1<T>*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<T>("UnityEngine.ProBuilder", "Math", "Max", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, array));
    }
    // static T Min(T[] array)
    // Offset: 0xD3A924
    template<class T>
    static T Min(::Array<T>* array) {
      static_assert(std::is_convertible_v<T, System::IComparable_1<T>*>);
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<T>("UnityEngine.ProBuilder", "Math", "Min", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, array));
    }
    // static System.Single LargestValue(UnityEngine.Vector3 v)
    // Offset: 0xF8BE54
    static float LargestValue(UnityEngine::Vector3 v);
    // static System.Single LargestValue(UnityEngine.Vector2 v)
    // Offset: 0xF8BE78
    static float LargestValue(UnityEngine::Vector2 v);
    // static UnityEngine.Vector2 SmallestVector2(UnityEngine.Vector2[] v)
    // Offset: 0xF8BE84
    static UnityEngine::Vector2 SmallestVector2(::Array<UnityEngine::Vector2>* v);
    // static UnityEngine.Vector2 SmallestVector2(UnityEngine.Vector2[] v, System.Int32[] indexes)
    // Offset: 0xF8BF04
    static UnityEngine::Vector2 SmallestVector2(::Array<UnityEngine::Vector2>* v, ::Array<int>* indexes);
    // static UnityEngine.Vector2 SmallestVector2(UnityEngine.Vector2[] v, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0xF8BFA4
    static UnityEngine::Vector2 SmallestVector2(::Array<UnityEngine::Vector2>* v, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Vector2 LargestVector2(UnityEngine.Vector2[] v)
    // Offset: 0xF8C338
    static UnityEngine::Vector2 LargestVector2(::Array<UnityEngine::Vector2>* v);
    // static UnityEngine.Vector2 LargestVector2(UnityEngine.Vector2[] v, System.Int32[] indexes)
    // Offset: 0xF8C3B8
    static UnityEngine::Vector2 LargestVector2(::Array<UnityEngine::Vector2>* v, ::Array<int>* indexes);
    // static UnityEngine.Vector2 LargestVector2(UnityEngine.Vector2[] v, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0xF8C458
    static UnityEngine::Vector2 LargestVector2(::Array<UnityEngine::Vector2>* v, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Bounds GetBounds(UnityEngine.Vector3[] positions, System.Collections.Generic.IList`1<System.Int32> indices)
    // Offset: 0xF8614C
    static UnityEngine::Bounds GetBounds(::Array<UnityEngine::Vector3>* positions, System::Collections::Generic::IList_1<int>* indices);
    // static UnityEngine.Bounds GetBounds(UnityEngine.Vector3[] positions, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Face> faces)
    // Offset: 0xF8C7EC
    static UnityEngine::Bounds GetBounds(::Array<UnityEngine::Vector3>* positions, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face*>* faces);
    // static private UnityEngine.Vector3 ComponentMin(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0xF8CF24
    static UnityEngine::Vector3 ComponentMin(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // static private UnityEngine.Vector3 ComponentMax(UnityEngine.Vector3 a, UnityEngine.Vector3 b)
    // Offset: 0xF8D018
    static UnityEngine::Vector3 ComponentMax(UnityEngine::Vector3 a, UnityEngine::Vector3 b);
    // static UnityEngine.Bounds GetBounds(UnityEngine.Vector3[] positions, System.Collections.Generic.IEnumerable`1<UnityEngine.ProBuilder.Edge> edges)
    // Offset: 0xF8D10C
    static UnityEngine::Bounds GetBounds(::Array<UnityEngine::Vector3>* positions, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge>* edges);
    // static public UnityEngine.Vector2 Average(System.Collections.Generic.IList`1<UnityEngine.Vector2> array, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0xF8D670
    static UnityEngine::Vector2 Average(System::Collections::Generic::IList_1<UnityEngine::Vector2>* array, System::Collections::Generic::IList_1<int>* indexes);
    // static public UnityEngine.Vector3 Average(System.Collections.Generic.IList`1<UnityEngine.Vector3> array, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0xF8DA58
    static UnityEngine::Vector3 Average(System::Collections::Generic::IList_1<UnityEngine::Vector3>* array, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Vector3 Average(System.Collections.Generic.IList`1<T> list, System.Func`2<T,UnityEngine.Vector3> selector, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0x13D05C8
    template<class T>
    static UnityEngine::Vector3 Average(System::Collections::Generic::IList_1<T>* list, System::Func_2<T, UnityEngine::Vector3>* selector, System::Collections::Generic::IList_1<int>* indexes) {
      return CRASH_UNLESS(il2cpp_utils::RunGenericMethod<UnityEngine::Vector3>("UnityEngine.ProBuilder", "Math", "Average", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, list, selector, indexes));
    }
    // static public UnityEngine.Vector4 Average(System.Collections.Generic.IList`1<UnityEngine.Vector4> v, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0xF8E050
    static UnityEngine::Vector4 Average(System::Collections::Generic::IList_1<UnityEngine::Vector4>* v, System::Collections::Generic::IList_1<int>* indexes);
    // static UnityEngine.Color Average(System.Collections.Generic.IList`1<UnityEngine.Color> c, System.Collections.Generic.IList`1<System.Int32> indexes)
    // Offset: 0xF8E46C
    static UnityEngine::Color Average(System::Collections::Generic::IList_1<UnityEngine::Color>* c, System::Collections::Generic::IList_1<int>* indexes);
    // static System.Boolean Approx2(UnityEngine.Vector2 a, UnityEngine.Vector2 b, System.Single delta)
    // Offset: 0xF8E830
    static bool Approx2(UnityEngine::Vector2 a, UnityEngine::Vector2 b, float delta);
    // static System.Boolean Approx3(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single delta)
    // Offset: 0xF8E8F0
    static bool Approx3(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float delta);
    // static System.Boolean Approx4(UnityEngine.Vector4 a, UnityEngine.Vector4 b, System.Single delta)
    // Offset: 0xF8E9E4
    static bool Approx4(UnityEngine::Vector4 a, UnityEngine::Vector4 b, float delta);
    // static System.Boolean ApproxC(UnityEngine.Color a, UnityEngine.Color b, System.Single delta)
    // Offset: 0xF8EB08
    static bool ApproxC(UnityEngine::Color a, UnityEngine::Color b, float delta);
    // static System.Boolean Approx(System.Single a, System.Single b, System.Single delta)
    // Offset: 0xF8EC2C
    static bool Approx(float a, float b, float delta);
    // static System.Int32 Wrap(System.Int32 value, System.Int32 lowerBound, System.Int32 upperBound)
    // Offset: 0xF8ECB4
    static int Wrap(int value, int lowerBound, int upperBound);
    // static public System.Int32 Clamp(System.Int32 value, System.Int32 lowerBound, System.Int32 upperBound)
    // Offset: 0xF88DC0
    static int Clamp(int value, int lowerBound, int upperBound);
    // static UnityEngine.Vector3 ToSignedMask(UnityEngine.Vector3 vec, System.Single delta)
    // Offset: 0xF8ECE4
    static UnityEngine::Vector3 ToSignedMask(UnityEngine::Vector3 vec, float delta);
    // static UnityEngine.Vector3 Abs(UnityEngine.Vector3 v)
    // Offset: 0xF8EE48
    static UnityEngine::Vector3 Abs(UnityEngine::Vector3 v);
    // static System.Int32 IntSum(UnityEngine.Vector3 mask)
    // Offset: 0xF8EEF0
    static int IntSum(UnityEngine::Vector3 mask);
    // static System.Void Cross(UnityEngine.Vector3 a, UnityEngine.Vector3 b, System.Single x, System.Single y, System.Single z)
    // Offset: 0xF8EF88
    static void Cross(UnityEngine::Vector3 a, UnityEngine::Vector3 b, float& x, float& y, float& z);
    // static System.Void Cross(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 res)
    // Offset: 0xF8A848
    static void Cross(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3& res);
    // static System.Void Cross(System.Single ax, System.Single ay, System.Single az, System.Single bx, System.Single by, System.Single bz, System.Single x, System.Single y, System.Single z)
    // Offset: 0xF8AA78
    static void Cross(float ax, float ay, float az, float bx, float by, float bz, float& x, float& y, float& z);
    // static System.Void Subtract(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 res)
    // Offset: 0xF8A830
    static void Subtract(UnityEngine::Vector3 a, UnityEngine::Vector3 b, UnityEngine::Vector3& res);
    // static System.Int32 Min(System.Int32 a, System.Int32 b)
    // Offset: 0xF8EFBC
    static int Min(int a, int b);
    // static System.Int32 Max(System.Int32 a, System.Int32 b)
    // Offset: 0xF8EFC8
    static int Max(int a, int b);
    // static System.Boolean IsNumber(System.Single value)
    // Offset: 0xF8EFD4
    static bool IsNumber(float value);
    // static System.Boolean IsNumber(UnityEngine.Vector2 value)
    // Offset: 0xF8F018
    static bool IsNumber(UnityEngine::Vector2 value);
    // static System.Boolean IsNumber(UnityEngine.Vector3 value)
    // Offset: 0xF8F050
    static bool IsNumber(UnityEngine::Vector3 value);
    // static System.Boolean IsNumber(UnityEngine.Vector4 value)
    // Offset: 0xF8F098
    static bool IsNumber(UnityEngine::Vector4 value);
    // static System.Single MakeNonZero(System.Single value, System.Single min)
    // Offset: 0xF8F0FC
    static float MakeNonZero(float value, float min);
  }; // UnityEngine.ProBuilder.Math
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Math*, "UnityEngine.ProBuilder", "Math");
#pragma pack(pop)
