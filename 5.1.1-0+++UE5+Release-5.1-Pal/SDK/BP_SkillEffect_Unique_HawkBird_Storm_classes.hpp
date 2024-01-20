#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x488 - 0x3C0)
// BlueprintGeneratedClass BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C
class ABP_SkillEffect_Unique_HawkBird_Storm_C : public ABP_SkillEffectBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       SideOffset;                                        // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DegereeOffset;                                     // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                   RightTornado;                                      // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                   LeftTornado;                                       // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                   CenterTornado;                                     // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                bulletClass;                                       // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ForwardVec2D;                                      // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             LeftTargetLocation2D;                              // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             LeftNormalizedDirection2D;                         // 0x418(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DotThreshold;                                      // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RotationDegree;                                    // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Speed;                                             // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RightTargetLocation2D;                             // 0x440(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             RightNormalizedDirection2D;                        // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CenterTargetLocation2D;                            // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CenterNormalizedDirection2D;                       // 0x470(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FrontOffset;                                       // 0x480(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_SkillEffect_Unique_HawkBird_Storm_C* GetDefaultObj();

	void SpawnTornado(double SpawnSideOffset, double SpawnFrontOffset, class APalSkillEffectBase** SpawnEffect, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class APalSkillEffectBase* K2Node_DynamicCast_AsPal_Skill_Effect_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_AdjustActorToFloor_ReturnValue);
	void GetDesiredLocation(double DeltaTime, const struct FVector2D& TargetLocation2D, const struct FVector2D& NormalizedDirection2D, struct FVector2D* NewDirection, struct FVector* NewLocation, const struct FVector2D& NewNormalizedDirection, double Temp, const struct FVector2D& LocalActorLocation2D, const struct FVector2D& LocalNormalizedDirectionForTarget, bool CallFunc_IsNearlyZero2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_DotProduct2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, double CallFunc_CrossProduct2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast);
	void MoveToTargetLocation(class APalSkillEffectBase*& Tornado, double DeltaTime, const struct FVector2D& TargetLocation2D, const struct FVector2D& NormalizedDirection2D, struct FVector2D* NewDirection, const struct FVector2D& NewNormalizedDirection, double Temp, const struct FVector2D& LocalActorLocation2D, const struct FVector2D& LocalNormalizedDirectionForTarget, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsNearlyZero2D_ReturnValue, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_DotProduct2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_CrossProduct2D_ReturnValue, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_Normal2D_ReturnValue, float CallFunc_Conv_Vector2DToVector_Z_ImplicitCast, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast);
	void Shoot(const struct FVector& TargetLocation, const struct FVector2D& Foward2D, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void CancelShoot();
	void ReceiveTick(float DeltaSeconds);
	void OnInitialize();
	void ShootBullet(const struct FVector& TargetLocation);
	void ExecuteUbergraph_BP_SkillEffect_Unique_HawkBird_Storm(int32 EntryPoint, class APalSkillEffectBase* CallFunc_SpawnTornado_SpawnEffect, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_2, const struct FVector2D& CallFunc_MoveToTargetLocation_NewDirection, const struct FVector2D& CallFunc_MoveToTargetLocation_NewDirection_1, bool CallFunc_IsValid_ReturnValue_3, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& K2Node_Event_TargetLocation, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_3, const struct FVector2D& CallFunc_MoveToTargetLocation_NewDirection_2, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast_1, double CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast, double CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast_1, double CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast_2, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast_2);
};

}


