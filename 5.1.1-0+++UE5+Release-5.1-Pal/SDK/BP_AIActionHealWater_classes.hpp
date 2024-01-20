#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x150 - 0x130)
// BlueprintGeneratedClass BP_AIActionHealWater.BP_AIActionHealWater_C
class UBP_AIActionHealWater_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                         OwnerPawn;                                         // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         HealTarget;                                        // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*    PartnerSkill;                                      // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIActionHealWater_C* GetDefaultObj();

	void AddSkillLog(int32 CallFunc_GetHealValue_HealValue, class UPalOtomoHolderComponentBase* CallFunc_GetOtomoHolderByOtomoPal_ReturnValue);
	void SetMoveDisableFlag(bool IsDisable, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue);
	void SetDisableThrowPalFlag(bool IsDisable, class FName FlagName, class AController* CallFunc_GetController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void GetHealValue(int32* HealValue, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetActiveSkillMainValueByRank_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast);
	void EndPartnerSkill();
	void StartPartnerSkill();
	void Setup(class UObject* Object, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void OnActionNotify(class UPalActionBase* Action, class FName NotifyName);
	void ExecuteUbergraph_BP_AIActionHealWater(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_2, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_ControlledPawn_1, class APawn* K2Node_Event_ControlledPawn, enum class EPawnActionResult K2Node_Event_WithResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetHealValue_HealValue, const struct FFixedPoint64& CallFunc_Convert_IntToFixedPoint64_ReturnValue, class UPalActionBase* K2Node_CustomEvent_action, class FName K2Node_CustomEvent_NotifyName, bool K2Node_SwitchName_CmpSuccess, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue_1, bool CallFunc_PlayAction_ReturnValue);
};

}


