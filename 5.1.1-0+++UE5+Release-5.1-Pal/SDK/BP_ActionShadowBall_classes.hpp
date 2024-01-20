#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x55 (0x308 - 0x2B3)
// BlueprintGeneratedClass BP_ActionShadowBall.BP_ActionShadowBall_C
class UBP_ActionShadowBall_C : public UBP_ActionGeneralAttackFarBase_C
{
public:
	uint8                                        Pad_4129[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsSpawned;                                         // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_412B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ElapsedTime;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                   Effect_0;                                          // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BallEffectSize;                                    // 0x2D8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableChangeEffectSizeByBP;                        // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_412F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BallEffectScale;                                   // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BulletSpeed_0;                                     // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionShadowBall_C* GetDefaultObj();

	void OnSpawnEffect(class APalSkillEffectBase* Effect, int32 Temp_int_Array_Index_Variable, class UNiagaraComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UNiagaraComponent*>& CallFunc_GetComponentsByTag_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item_1, class UNiagaraComponent* CallFunc_Array_Get_Item_2, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1);
	void TickAction(float DeltaTime);
	void OnStartProcessAnimation();
	void Shoot();
	void OnBeginAction();
	void ExecuteUbergraph_BP_ActionShadowBall(int32 EntryPoint, class ABP_SkillEffectBase_C* K2Node_DynamicCast_AsBP_Skill_Effect_Base, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, TArray<class UNiagaraComponent*>& CallFunc_GetComponentsByTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item, TArray<class UNiagaraComponent*>& CallFunc_GetComponentsByTag_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_NormalizeToRange_ReturnValue, int32 Temp_int_Array_Index_Variable, double CallFunc_Ease_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item_1, const struct FSkillEffectSpawnParameter& CallFunc_Array_Get_Item_2, class APalSkillEffectBase* CallFunc_FindEffectByClass_Effect_1, int32 Temp_int_Array_Index_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UNiagaraComponent* CallFunc_Array_Get_Item_3, bool CallFunc_IsValid_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const struct FVector& CallFunc_GetPredictedTargetLocation_Location, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float K2Node_VariableSet_MaxSpeed_ImplicitCast);
};

}


