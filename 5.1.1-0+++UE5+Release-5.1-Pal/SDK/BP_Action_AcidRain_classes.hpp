#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D (0x2D0 - 0x2B3)
// BlueprintGeneratedClass BP_Action_AcidRain.BP_Action_AcidRain_C
class UBP_Action_AcidRain_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_3FF[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_SkillEffect_AcidRain_Cloud_C*      CloudEffect;                                       // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_AcidRain_C*            ChargeEffect;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_AcidRain_C* GetDefaultObj();

	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void ExecuteUbergraph_BP_Action_AcidRain(int32 EntryPoint, class APalSkillEffectBase* K2Node_Event_Effect, class ABP_SkillEffect_AcidRain_Cloud_C* K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain_Cloud, bool K2Node_DynamicCast_bSuccess, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, class ABP_SkillEffect_AcidRain_C* K2Node_DynamicCast_AsBP_Skill_Effect_Acid_Rain, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetTargetLocation_Location, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


