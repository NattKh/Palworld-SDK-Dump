#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x2CC - 0x2B3)
// BlueprintGeneratedClass BP_ActionHydroPump.BP_ActionHydroPump_C
class UBP_ActionHydroPump_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_3DE3[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraSystem*                        EndEffect;                                         // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        EndEffectTimeOffset;                               // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionHydroPump_C* GetDefaultObj();

	void _________0();
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void ExecuteUbergraph_BP_ActionHydroPump(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalSkillEffectBase* K2Node_Event_Effect, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast);
};

}


