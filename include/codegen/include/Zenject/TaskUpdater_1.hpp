// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:47 PM
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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: TaskInfo because it is already included!
  // Skipping declaration: <>c because it is already included!
  // Skipping declaration: <>c__DisplayClass8_0 because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<TResult, T>
  template<typename TResult, typename T>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.TaskUpdater`1
  template<typename TTask>
  class TaskUpdater_1 : public ::Il2CppObject {
    public:
    // Nested type: Zenject::TaskUpdater_1::TaskInfo<TTask>
    class TaskInfo;
    // Nested type: Zenject::TaskUpdater_1::$$c<TTask>
    class $$c;
    // Nested type: Zenject::TaskUpdater_1::$$c__DisplayClass8_0<TTask>
    class $$c__DisplayClass8_0;
    // Autogenerated type: Zenject.TaskUpdater`1/TaskInfo
    class TaskInfo : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = TaskUpdater_1<TTask>*;
      // public TTask Task
      // Offset: 0x0
      TTask Task;
      // public System.Int32 Priority
      // Offset: 0x0
      int Priority;
      // public System.Boolean IsRemoved
      // Offset: 0x0
      bool IsRemoved;
      // public System.Void .ctor(TTask task, System.Int32 priority)
      // Offset: 0x1932D20
      static typename TaskUpdater_1<TTask>::TaskInfo* New_ctor(TTask task, int priority) {
        return (typename TaskUpdater_1<TTask>::TaskInfo*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::TaskInfo*>::get(), task, priority));
      }
    }; // Zenject.TaskUpdater`1/TaskInfo
    // Autogenerated type: Zenject.TaskUpdater`1/<>c
    class $$c : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = TaskUpdater_1<TTask>*;
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.TaskUpdater`1/<>c<TTask> <>9
      static typename Zenject::TaskUpdater_1<TTask>::$$c* _get_$$9() {
        return CRASH_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::TaskUpdater_1<TTask>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.TaskUpdater`1/<>c<TTask> <>9
      static void _set_$$9(typename Zenject::TaskUpdater_1<TTask>::$$c* value) {
        CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get(), "<>9", value));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Func`2<Zenject.TaskUpdater`1/TaskInfo<TTask>,TTask> <>9__7_0
      static System::Func_2<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*, TTask>* _get_$$9__7_0() {
        return CRASH_UNLESS((il2cpp_utils::GetFieldValue<System::Func_2<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*, TTask>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get(), "<>9__7_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Func`2<Zenject.TaskUpdater`1/TaskInfo<TTask>,TTask> <>9__7_0
      static void _set_$$9__7_0(System::Func_2<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*, TTask>* value) {
        CRASH_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get(), "<>9__7_0", value));
      }
      // static private System.Void .cctor()
      // Offset: 0x1932BD8
      static void _cctor() {
        CRASH_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get(), ".cctor"));
      }
      // TTask <AddTaskInternal>b__7_0(Zenject.TaskUpdater`1/TaskInfo<TTask> x)
      // Offset: 0x1932CCC
      TTask $AddTaskInternal$b__7_0(typename Zenject::TaskUpdater_1<TTask>::TaskInfo* x) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<TTask>(this, "<AddTaskInternal>b__7_0", x));
      }
      // public System.Void .ctor()
      // Offset: 0x1932CB4
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename TaskUpdater_1<TTask>::$$c* New_ctor() {
        return (typename TaskUpdater_1<TTask>::$$c*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c*>::get()));
      }
    }; // Zenject.TaskUpdater`1/<>c
    // Autogenerated type: Zenject.TaskUpdater`1/<>c__DisplayClass8_0
    class $$c__DisplayClass8_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = TaskUpdater_1<TTask>*;
      // public TTask task
      // Offset: 0x0
      TTask task;
      // System.Boolean <RemoveTask>b__0(Zenject.TaskUpdater`1/TaskInfo<TTask> x)
      // Offset: 0x1932CFC
      bool $RemoveTask$b__0(typename Zenject::TaskUpdater_1<TTask>::TaskInfo* x) {
        return CRASH_UNLESS(il2cpp_utils::RunMethod<bool>(this, "<RemoveTask>b__0", x));
      }
      // public System.Void .ctor()
      // Offset: 0x1932CE4
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename TaskUpdater_1<TTask>::$$c__DisplayClass8_0* New_ctor() {
        return (typename TaskUpdater_1<TTask>::$$c__DisplayClass8_0*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskUpdater_1<TTask>::$$c__DisplayClass8_0*>::get()));
      }
    }; // Zenject.TaskUpdater`1/<>c__DisplayClass8_0
    // private readonly System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> _tasks
    // Offset: 0x0
    System::Collections::Generic::LinkedList_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* tasks;
    // private readonly System.Collections.Generic.List`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> _queuedTasks
    // Offset: 0x0
    System::Collections::Generic::List_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* queuedTasks;
    // private System.Collections.Generic.IEnumerable`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> get_AllTasks()
    // Offset: 0x1932D70
    System::Collections::Generic::IEnumerable_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* get_AllTasks() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>*>(this, "get_AllTasks"));
    }
    // private System.Collections.Generic.IEnumerable`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> get_ActiveTasks()
    // Offset: 0x1932DC0
    System::Collections::Generic::IEnumerable_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* get_ActiveTasks() {
      return CRASH_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>*>(this, "get_ActiveTasks"));
    }
    // public System.Void AddTask(TTask task, System.Int32 priority)
    // Offset: 0x1932DC8
    void AddTask(TTask task, int priority) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "AddTask", task, priority));
    }
    // private System.Void AddTaskInternal(TTask task, System.Int32 priority)
    // Offset: 0x1932DEC
    void AddTaskInternal(TTask task, int priority) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "AddTaskInternal", task, priority));
    }
    // public System.Void RemoveTask(TTask task)
    // Offset: 0x1933104
    void RemoveTask(TTask task) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "RemoveTask", task));
    }
    // public System.Void OnFrameStart()
    // Offset: 0x1933300
    void OnFrameStart() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "OnFrameStart"));
    }
    // public System.Void UpdateAll()
    // Offset: 0x1933324
    void UpdateAll() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "UpdateAll"));
    }
    // public System.Void UpdateRange(System.Int32 minPriority, System.Int32 maxPriority)
    // Offset: 0x1933350
    void UpdateRange(int minPriority, int maxPriority) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "UpdateRange", minPriority, maxPriority));
    }
    // private System.Void ClearRemovedTasks(System.Collections.Generic.LinkedList`1<Zenject.TaskUpdater`1/TaskInfo<TTask>> tasks)
    // Offset: 0x1933458
    void ClearRemovedTasks(System::Collections::Generic::LinkedList_1<typename Zenject::TaskUpdater_1<TTask>::TaskInfo*>* tasks) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "ClearRemovedTasks", tasks));
    }
    // private System.Void AddQueuedTasks()
    // Offset: 0x193350C
    void AddQueuedTasks() {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "AddQueuedTasks"));
    }
    // private System.Void InsertTaskSorted(Zenject.TaskUpdater`1/TaskInfo<TTask> task)
    // Offset: 0x19335C4
    void InsertTaskSorted(typename Zenject::TaskUpdater_1<TTask>::TaskInfo* task) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "InsertTaskSorted", task));
    }
    // protected System.Void UpdateItem(TTask task)
    // Offset: 0xFFFFFFFF
    void UpdateItem(TTask task) {
      CRASH_UNLESS(il2cpp_utils::RunMethod(this, "UpdateItem", task));
    }
    // protected System.Void .ctor()
    // Offset: 0x19336B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TaskUpdater_1<TTask>* New_ctor() {
      return (TaskUpdater_1<TTask>*)CRASH_UNLESS(il2cpp_utils::New(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TaskUpdater_1<TTask>*>::get()));
    }
  }; // Zenject.TaskUpdater`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::TaskUpdater_1, "Zenject", "TaskUpdater`1");
#pragma pack(pop)
