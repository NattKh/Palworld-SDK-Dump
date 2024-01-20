#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2B3 - 0x2B3)
// BlueprintGeneratedClass BP_ActionSandTornado.BP_ActionSandTornado_C
class UBP_ActionSandTornado_C : public UBP_ActionGeneralAttackFarBase_C
{
public:

	static class UClass* StaticClass();
	static class UBP_ActionSandTornado_C* GetDefaultObj();

	void OnStartProcessAnimation(const struct FVector& CallFunc_GetTargetLocation_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, TScriptInterface<class IBPI_SkillEffect_C> K2Node_DynamicCast_AsBPI_Skill_Effect, bool K2Node_DynamicCast_bSuccess);
};

}


