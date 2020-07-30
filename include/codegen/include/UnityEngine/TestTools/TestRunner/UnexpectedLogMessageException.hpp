// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:36 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: NUnit.Framework.ResultStateException
#include "NUnit/Framework/ResultStateException.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogMatch
  class LogMatch;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException
  class UnexpectedLogMessageException : public NUnit::Framework::ResultStateException {
    public:
    // public UnityEngine.TestTools.Logging.LogMatch LogEvent
    // Offset: 0x88
    UnityEngine::TestTools::Logging::LogMatch* LogEvent;
    // public System.Void .ctor(UnityEngine.TestTools.Logging.LogMatch log)
    // Offset: 0xE209C8
    static UnexpectedLogMessageException* New_ctor(UnityEngine::TestTools::Logging::LogMatch* log);
    // static private System.String BuildMessage(UnityEngine.TestTools.Logging.LogMatch log)
    // Offset: 0xE321B8
    static ::Il2CppString* BuildMessage(UnityEngine::TestTools::Logging::LogMatch* log);
    // public override NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0xE3220C
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: NUnit.Framework.Interfaces.ResultState ResultStateException::get_ResultState()
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
    // public override System.String get_StackTrace()
    // Offset: 0xE32274
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_StackTrace()
    ::Il2CppString* get_StackTrace();
  }; // UnityEngine.TestTools.TestRunner.UnexpectedLogMessageException
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::UnexpectedLogMessageException*, "UnityEngine.TestTools.TestRunner", "UnexpectedLogMessageException");
#pragma pack(pop)
