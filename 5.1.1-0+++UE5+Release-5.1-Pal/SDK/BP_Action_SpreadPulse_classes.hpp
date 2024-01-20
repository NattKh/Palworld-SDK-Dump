#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D (0x2E0 - 0x2B3)
// BlueprintGeneratedClass BP_Action_SpreadPulse.BP_Action_SpreadPulse_C
class UBP_Action_SpreadPulse_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_31D0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        BulletNum;                                         // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Angle;                                             // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class APalSkillEffectBase*>           BulletEffects;                                     // 0x2C8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class APalSkillEffectBase*                   TargetEffect;                                      // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_SpreadPulse_C* GetDefaultObj();

	void CalcBulletRotation(int32 Index, struct FRotator* Rotation, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnSpawnEffect(class APalSkillEffectBase* Effect);
	void ShootBullet(TArray<class APalSkillEffectBase*>& Effects);
	void ExecuteUbergraph_BP_Action_SpreadPulse(int32 EntryPoint, const struct FVector& CallFunc_GetPredictedTargetLocation_Location, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FRotator& CallFunc_CalcBulletRotation_Rotation, float K2Node_Event_DeltaTime, class APalSkillEffectBase* K2Node_Event_Effect, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsSpecificEffect_ReturnValue, TArray<class APalSkillEffectBase*>& K2Node_CustomEvent_Effects, int32 CallFunc_Array_Length_ReturnValue, class APalSkillEffectBase* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, class AActor* CallFunc_FindOwnerActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FHitResult& CallFunc_K2_AddActorLocalRotation_SweepHitResult, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item_1, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}


