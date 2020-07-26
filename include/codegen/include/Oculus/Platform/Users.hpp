// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:02 PM
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
  // Forward declaring type: UserOptions
  class UserOptions;
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
  // Forward declaring type: Request
  class Request;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: User
  class User;
  // Forward declaring type: UserList
  class UserList;
  // Forward declaring type: UserAndRoomList
  class UserAndRoomList;
  // Forward declaring type: OrgScopedID
  class OrgScopedID;
  // Forward declaring type: SdkAccountList
  class SdkAccountList;
  // Forward declaring type: UserProof
  class UserProof;
  // Forward declaring type: LaunchFriendRequestFlowResult
  class LaunchFriendRequestFlowResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Autogenerated type: Oculus.Platform.Users
  class Users : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.User> Get(System.UInt64 userID)
    // Offset: 0x194E8C4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::User*>* Get(uint64_t userID);
    // static public Oculus.Platform.Request`1<System.String> GetAccessToken()
    // Offset: 0x194E9E0
    static Oculus::Platform::Request_1<::Il2CppString*>* GetAccessToken();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.User> GetLoggedInUser()
    // Offset: 0x194EAEC
    static Oculus::Platform::Request_1<Oculus::Platform::Models::User*>* GetLoggedInUser();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> GetLoggedInUserFriends()
    // Offset: 0x194EBF8
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserList*>* GetLoggedInUserFriends();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> GetLoggedInUserFriendsAndRooms()
    // Offset: 0x194ED04
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList*>* GetLoggedInUserFriendsAndRooms();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> GetLoggedInUserRecentlyMetUsersAndRooms(Oculus.Platform.UserOptions userOptions)
    // Offset: 0x194EE10
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList*>* GetLoggedInUserRecentlyMetUsersAndRooms(Oculus::Platform::UserOptions* userOptions);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.OrgScopedID> GetOrgScopedID(System.UInt64 userID)
    // Offset: 0x194EF40
    static Oculus::Platform::Request_1<Oculus::Platform::Models::OrgScopedID*>* GetOrgScopedID(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.SdkAccountList> GetSdkAccounts()
    // Offset: 0x194F05C
    static Oculus::Platform::Request_1<Oculus::Platform::Models::SdkAccountList*>* GetSdkAccounts();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserProof> GetUserProof()
    // Offset: 0x194F168
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserProof*>* GetUserProof();
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.LaunchFriendRequestFlowResult> LaunchFriendRequestFlow(System.UInt64 userID)
    // Offset: 0x194F274
    static Oculus::Platform::Request_1<Oculus::Platform::Models::LaunchFriendRequestFlowResult*>* LaunchFriendRequestFlow(uint64_t userID);
    // static public Oculus.Platform.Request LaunchProfile(System.UInt64 userID)
    // Offset: 0x194F390
    static Oculus::Platform::Request* LaunchProfile(uint64_t userID);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserAndRoomList> GetNextUserAndRoomListPage(Oculus.Platform.Models.UserAndRoomList list)
    // Offset: 0x194F4A4
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserAndRoomList*>* GetNextUserAndRoomListPage(Oculus::Platform::Models::UserAndRoomList* list);
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserList> GetNextUserListPage(Oculus.Platform.Models.UserList list)
    // Offset: 0x194F620
    static Oculus::Platform::Request_1<Oculus::Platform::Models::UserList*>* GetNextUserListPage(Oculus::Platform::Models::UserList* list);
  }; // Oculus.Platform.Users
}
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Users*, "Oculus.Platform", "Users");
#pragma pack(pop)
