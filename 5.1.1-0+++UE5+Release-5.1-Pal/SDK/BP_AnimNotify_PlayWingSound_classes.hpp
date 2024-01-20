#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x98 - 0x81)
// BlueprintGeneratedClass BP_AnimNotify_PlayWingSound.BP_AnimNotify_PlayWingSound_C
class UBP_AnimNotify_PlayWingSound_C : public UBP_AnimNotify_PlaySound_C
{
public:
	uint8                                        Pad_3E16[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Switch_Group;                                      // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AnimNotify_PlayWingSound_C* GetDefaultObj();

	void MakeSwitchStatePalSize(class APalMonsterCharacter* Pal, class FString* PalSize, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, class APalMonsterCharacter* K2Node_DynamicCast_AsPal_Monster_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetActiveActorFlag_ReturnValue, bool CallFunc_Received_Notify_ReturnValue, const class FString& CallFunc_MakeSwitchStatePalSize_PalSize, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
};

}


