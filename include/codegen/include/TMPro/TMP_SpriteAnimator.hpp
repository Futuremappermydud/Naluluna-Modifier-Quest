// Autogenerated from CppHeaderCreator on 7/24/2020 4:01:20 PM
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "utils/il2cpp-utils.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
  // Forward declaring type: TMP_SpriteAsset
  class TMP_SpriteAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_SpriteAnimator
  class TMP_SpriteAnimator : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: TMPro::TMP_SpriteAnimator::$DoSpriteAnimationInternal$d__7
    class $DoSpriteAnimationInternal$d__7;
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Boolean> m_animations
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, bool>* m_animations;
    // private TMPro.TMP_Text m_TextComponent
    // Offset: 0x20
    TMPro::TMP_Text* m_TextComponent;
    // private System.Void Awake()
    // Offset: 0xB9DED8
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0xB9DF38
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0xB9DF3C
    void OnDisable();
    // public System.Void StopAllAnimations()
    // Offset: 0xB9DF40
    void StopAllAnimations();
    // public System.Void DoSpriteAnimation(System.Int32 currentCharacter, TMPro.TMP_SpriteAsset spriteAsset, System.Int32 start, System.Int32 end, System.Int32 framerate)
    // Offset: 0xB9DFA4
    void DoSpriteAnimation(int currentCharacter, TMPro::TMP_SpriteAsset* spriteAsset, int start, int end, int framerate);
    // private System.Collections.IEnumerator DoSpriteAnimationInternal(System.Int32 currentCharacter, TMPro.TMP_SpriteAsset spriteAsset, System.Int32 start, System.Int32 end, System.Int32 framerate)
    // Offset: 0xB9E088
    System::Collections::IEnumerator* DoSpriteAnimationInternal(int currentCharacter, TMPro::TMP_SpriteAsset* spriteAsset, int start, int end, int framerate);
    // public System.Void .ctor()
    // Offset: 0xB9E178
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TMP_SpriteAnimator* New_ctor();
  }; // TMPro.TMP_SpriteAnimator
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteAnimator*, "TMPro", "TMP_SpriteAnimator");
#pragma pack(pop)
