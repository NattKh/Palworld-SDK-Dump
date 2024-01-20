#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2B3 - 0x2B3)
// BlueprintGeneratedClass BP_Action_ThunderFunnel.BP_Action_ThunderFunnel_C
class UBP_Action_ThunderFunnel_C : public UBP_ActionGeneralAttackFarBase_C
{
public:

	static class UClass* StaticClass();
	static class UBP_Action_ThunderFunnel_C* GetDefaultObj();

	void OnSpawnEffect(class APalSkillEffectBase* Effect, const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class ABP_Skill_ThunderFunnel_C* K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetActionTarget_ReturnValue);
};

}


