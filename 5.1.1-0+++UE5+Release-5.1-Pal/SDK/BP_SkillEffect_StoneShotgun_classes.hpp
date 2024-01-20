#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x3E0 - 0x3C0)
// BlueprintGeneratedClass BP_SkillEffect_StoneShotgun.BP_SkillEffect_StoneShotgun_C
class ABP_SkillEffect_StoneShotgun_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       BaseAngle;                                         // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BlurAngle;                                         // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WidthShotNum;                                      // 0x3D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HightShotNum;                                      // 0x3DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkillEffect_StoneShotgun_C* GetDefaultObj();

	void GetBulletTransform(TArray<struct FTransform>* Result, const struct FTransform& BaseTransform, const TArray<struct FTransform>& TransformList, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetActionTargetLocation_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Divide_IntInt_ReturnValue_1, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, int32 Temp_int_Variable_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast, float CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_RandomFloatInRangeFromStream_Min_ImplicitCast_1, float CallFunc_RandomFloatInRangeFromStream_Max_ImplicitCast_1, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void OnInitialize();
	void OnAttackDelegate______0(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent);
	void ExecuteUbergraph_BP_SkillEffect_StoneShotgun(int32 EntryPoint, class AActor* K2Node_CustomEvent_Defencer, const struct FPalDamageInfo& K2Node_CustomEvent_DamageInfo, int32 K2Node_CustomEvent_HitCount, class UPrimitiveComponent* K2Node_CustomEvent_AttackerComponent, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FTransform>& CallFunc_GetBulletTransform_Result, const struct FTransform& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SkillEffect_StoneShotgunBullet_C* CallFunc_FinishSpawningActor_ReturnValue);
};

}


