#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x2B3 - 0x2B3)
// BlueprintGeneratedClass BP_ActionFunnelThunder.BP_ActionFunnelThunder_C
class UBP_ActionFunnelThunder_C : public UBP_ActionGeneralAttackFarBase_C
{
public:

	static class UClass* StaticClass();
	static class UBP_ActionFunnelThunder_C* GetDefaultObj();

	void Get_Attack_Owner(class AActor** OwnerActor, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalFunnelCharacter* K2Node_DynamicCast_AsPal_Funnel_Character, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetOwnerPal_ReturnValue);
};

}


