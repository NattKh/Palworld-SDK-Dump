#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x278 - 0x248)
// BlueprintGeneratedClass BP_MapObjectPlayerBedModel.BP_MapObjectPlayerBedModel_C
class UBP_MapObjectPlayerBedModel_C : public UPalMapObjectPlayerBedModel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                SleepActionClass;                                  // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PrevViewTarget;                                    // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AActor*                                SleepPlayer;                                       // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerBedCamera_C*                 Camera;                                            // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        CameraBeginBlendTime;                              // 0x270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CameraEndBlendTime;                                // 0x274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_MapObjectPlayerBedModel_C* GetDefaultObj();

	bool IsSleepingInteractor(class APalCharacter* Character, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue);
	void BP_OnTriggerInteract_SleepPlayerBed(class AActor* Other, enum class EPalInteractiveObjectIndicatorType IndicatorType, const struct FTransform& MapObjectTransform, bool K2Node_SwitchEnum_CmpSuccess);
	void Setup(const struct FVector& FixPos, const struct FRotator& BedRotate);
	void PutPlayerToSleep(class UPalIndividualCharacterHandle* CharacterHandle);
	void OnBeginSleep(class AActor* Other);
	void ExecuteUbergraph_BP_MapObjectPlayerBedModel(int32 EntryPoint, class AActor* K2Node_CustomEvent_Other, const struct FActionDynamicParameter& K2Node_MakeStruct_ActionDynamicParameter, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSleepingInteractor_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalIndividualCharacterHandle* K2Node_Event_CharacterHandle, class UPalActionBase* CallFunc_PlayActionParameter_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_TryGetIndividualActor_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FRotator& CallFunc_RotatorFromAxisAndAngle_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue);
};

}


