#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x428 - 0x3C0)
// BlueprintGeneratedClass BP_SkillEffect_IceMissile.BP_SkillEffect_IceMissile_C
class ABP_SkillEffect_IceMissile_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        ShootIceNum;                                       // 0x3C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D80[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ShootDegree;                                       // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShootInterval;                                     // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShootStarted;                                    // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D81[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Timer;                                             // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Count;                                             // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Target;                                            // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ShootSpeed;                                        // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ABP_SkillEffect_IceMissile_Bullet_C*> SpawnedBullet;                                     // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnSpawnedChildEffect;                              // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_SkillEffect_IceMissile_C* GetDefaultObj();

	void ShootProcess(double DeltaTime, int32 NumFadeOutEffect, const struct FRotator& LocalRotator, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABP_SkillEffect_IceMissile_Bullet_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class AActor* CallFunc_GetActionTargetActor_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class ABP_SkillEffect_IceMissile_Bullet_C* CallFunc_FinishSpawningActor_ReturnValue, class UProjectileMovementComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, float CallFunc_MakeRotator_Roll_ImplicitCast);
	void ReceiveTick(float DeltaSeconds);
	void OnInitialize();
	void ExecuteUbergraph_BP_SkillEffect_IceMissile(int32 EntryPoint, float K2Node_Event_DeltaSeconds, double CallFunc_ShootProcess_DeltaTime_ImplicitCast);
	void OnSpawnedChildEffect__DelegateSignature();
};

}


