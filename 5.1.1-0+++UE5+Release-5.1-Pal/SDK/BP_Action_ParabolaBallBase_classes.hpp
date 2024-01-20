#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D (0x2D0 - 0x2B3)
// BlueprintGeneratedClass BP_Action_ParabolaBallBase.BP_Action_ParabolaBallBase_C
class UBP_Action_ParabolaBallBase_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_2B3A[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Const_ShootDelay;                                  // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                   MainEffect;                                        // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_ParabolaBallBase_C* GetDefaultObj();

	void GetTaegetLocation(struct FVector* Pos, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_GetPredictedTargetLocation_Location, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, const struct FVector& CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue);
	void OnStartProcessAnimation();
	void ExecuteUbergraph_BP_Action_ParabolaBallBase(int32 EntryPoint, const struct FVector& CallFunc_GetTaegetLocation_Pos, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_SuggestProjectileVelocity_CustomArc_OutLaunchVelocity, bool CallFunc_SuggestProjectileVelocity_CustomArc_ReturnValue, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, bool CallFunc_Greater_DoubleDouble_ReturnValue, TScriptInterface<class IBPI_SkillEffect_C> K2Node_DynamicCast_AsBPI_Skill_Effect, bool K2Node_DynamicCast_bSuccess, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast);
};

}


