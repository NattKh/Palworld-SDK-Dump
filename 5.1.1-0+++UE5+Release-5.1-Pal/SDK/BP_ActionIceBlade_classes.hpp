#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x2C0 - 0x2B3)
// BlueprintGeneratedClass BP_ActionIceBlade.BP_ActionIceBlade_C
class UBP_ActionIceBlade_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_1830[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_ActionIceBlade_C* GetDefaultObj();

	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void ExecuteUbergraph_BP_ActionIceBlade(int32 EntryPoint, class APalSkillEffectBase* K2Node_Event_Effect, class ABP_SkillEffect_IceBlade_C* K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Blade, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTime);
};

}


