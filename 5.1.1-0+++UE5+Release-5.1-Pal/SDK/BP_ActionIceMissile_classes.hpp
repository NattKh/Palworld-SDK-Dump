#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x15 (0x2C8 - 0x2B3)
// BlueprintGeneratedClass BP_ActionIceMissile.BP_ActionIceMissile_C
class UBP_ActionIceMissile_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_3DCE[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FFixedPoint64                         Next_Sheild_HP;                                    // 0x2C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_ActionIceMissile_C* GetDefaultObj();

	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void OnBreakAction();
	void ExecuteUbergraph_BP_ActionIceMissile(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class ABP_SkillEffect_IceMissile_C* K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Missile, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, class ABP_SkillEffect_IceMissile_Bullet_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


