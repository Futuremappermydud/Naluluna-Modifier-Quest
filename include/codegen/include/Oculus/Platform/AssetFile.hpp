// Autogenerated from CppHeaderCreator on 7/27/2020 3:10:08 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "utils/typedefs.h"
// Including type: System.Object
#include "System/Object.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetFileDeleteResult
  class AssetFileDeleteResult;
  // Forward declaring type: AssetFileDownloadResult
  class AssetFileDownloadResult;
  // Forward declaring type: AssetFileDownloadCancelResult
  class AssetFileDownloadCancelResult;
  // Forward declaring type: AssetDetailsList
  class AssetDetailsList;
  // Forward declaring type: AssetDetails
  class AssetDetails;
  // Forward declaring type: AssetFileDownloadUpdate
  class AssetFileDownloadUpdate;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.AssetFile
  class AssetFile : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDeleteResult> Delete(System.UInt64 assetFileID)
    // Offset: 0x157E82C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDeleteResult*>* Delete(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDeleteResult> DeleteById(System.UInt64 assetFileID)
    // Offset: 0x157E9C4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDeleteResult*>* DeleteById(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDeleteResult> DeleteByName(System.String assetFileName)
    // Offset: 0x157EB5C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDeleteResult*>* DeleteByName(::Il2CppString* assetFileName);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadResult> Download(System.UInt64 assetFileID)
    // Offset: 0x157ED1C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadResult*>* Download(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadResult> DownloadById(System.UInt64 assetFileID)
    // Offset: 0x157EEB4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadResult*>* DownloadById(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadResult> DownloadByName(System.String assetFileName)
    // Offset: 0x157F04C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadResult*>* DownloadByName(::Il2CppString* assetFileName);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadCancelResult> DownloadCancel(System.UInt64 assetFileID)
    // Offset: 0x157F20C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancel(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadCancelResult> DownloadCancelById(System.UInt64 assetFileID)
    // Offset: 0x157F3A4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancelById(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetFileDownloadCancelResult> DownloadCancelByName(System.String assetFileName)
    // Offset: 0x157F53C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetFileDownloadCancelResult*>* DownloadCancelByName(::Il2CppString* assetFileName);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetailsList> GetList()
    // Offset: 0x157F6FC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetailsList*>* GetList();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetails> Status(System.UInt64 assetFileID)
    // Offset: 0x157F878
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetails*>* Status(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetails> StatusById(System.UInt64 assetFileID)
    // Offset: 0x157FA10
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetails*>* StatusById(uint64_t assetFileID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AssetDetails> StatusByName(System.String assetFileName)
    // Offset: 0x157FBA8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::AssetDetails*>* StatusByName(::Il2CppString* assetFileName);
    // static public System.Void SetDownloadUpdateNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.AssetFileDownloadUpdate> callback)
    // Offset: 0x157FD68
    static void SetDownloadUpdateNotificationCallback(typename Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDownloadUpdate*>::Callback* callback);
  }; // Oculus.Platform.AssetFile
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::AssetFile*, "Oculus.Platform", "AssetFile");
#pragma pack(pop)
