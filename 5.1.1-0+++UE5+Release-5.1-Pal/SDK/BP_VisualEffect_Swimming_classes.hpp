#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x100 - 0x68)
// BlueprintGeneratedClass BP_VisualEffect_Swimming.BP_VisualEffect_Swimming_C
class UBP_VisualEffect_Swimming_C : public UPalVisualEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x68(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_SplashBody;                                     // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_Swim;                                           // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_InWater;                                        // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*        Movement;                                          // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       InWaterRate_Feet;                                  // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InWaterRate_Body;                                  // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FeetEffectWaitTimeSec;                             // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoving;                                          // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FallingVelocityMin;                                // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Effect_Offset_Z_Feet;                              // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Effect_Offset_Z_Body;                              // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Effect_Offset_Z_Swim;                              // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Effect_Offset_Z_InWater;                           // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Effect_Offset_Z_Dive;                              // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CreateDiveEffectDelay;                             // 0xE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasRayCastCash;                                    // 0xE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23DA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       LengthToBottomCash;                                // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNsSplashBodyActive;                              // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNsSwimActive;                                    // 0xF1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNsInWaterActive;                                 // 0xF2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23DD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       MovimgVelocityThreshold;                           // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_VisualEffect_Swimming_C* GetDefaultObj();

	void Update_NS_InWater(double DeltaTime, bool IsEffectActive, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_GetVelocityLengthXY_Velocity, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsSwimming_ReturnValue);
	void Create_NS_InWater(const struct FTransform& CallFunc_Get_Effect_Transform_NewParam, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Update_Water_Plane_Effect_Transform(class UNiagaraComponent* EffectInst, double OffsetDistance, const struct FTransform& CallFunc_Get_Effect_Transform_NewParam, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue);
	void GetVelocityLengthXY(double* Velocity, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_VSize_ReturnValue);
	void GetOwnerHalfHeight(double* HalfHeight, class AActor* CallFunc_GetOwner_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_HalfHeight_ImplicitCast);
	void GetWaterDepth(double* Length, double TraceLength, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetWaterPlaneLocation_ReturnValue, const struct FVector& CallFunc_GetWaterPlaneLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, double K2Node_FunctionResult_Length_ImplicitCast, double K2Node_VariableSet_LengthToBottomCash_ImplicitCast);
	void IsMakeDiveEffect(bool* IsFalling, double TraceLength, double WaterDepth, double CallFunc_GetOwnerHalfHeight_HalfHeight, double CallFunc_GetWaterDepth_Length, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void HasMovingVelocity(bool* HasVelocity, double CallFunc_GetVelocityLengthXY_Velocity, bool CallFunc_Greater_DoubleDouble_ReturnValue);
	void Update_NS_Dive(double CallFunc_GetInWaterRate_rate, double CallFunc_GetOwnerHalfHeight_HalfHeight, double CallFunc_GetWaterDepth_Length, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Update_NS_Swim(bool IsEffectActive, double CallFunc_GetVelocityLengthXY_Velocity, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_GetInWaterRate_rate, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1);
	void Update_NS_SplashBody(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_GetInWaterRate_rate, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_GetInWaterRate_rate_1, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void Update_NS_SplashFeet(double DeltaTime, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_FMax_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_HasMovingVelocity_HasVelocity, bool CallFunc_HasMovingVelocity_HasVelocity_1);
	void Create_NS_Dive(double MaxScaleLengthToBottom, double MaxScaleFallingVelocity, double EffectScale, double CallFunc_GetWaterDepth_Length, double CallFunc_GetOwnerHalfHeight_HalfHeight, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_GetWaterDepth_Length_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_GetLastUpdateVelocity_ReturnValue, double CallFunc_FClamp_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_GetVelocityLengthXY_Velocity, double CallFunc_Abs_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_2, double CallFunc_FClamp_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FTransform& CallFunc_Get_Effect_Transform_NewParam, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2);
	void Create_NS_Swim(const struct FTransform& CallFunc_Get_Effect_Transform_NewParam, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue);
	void Create_NS_Splash_Body(const struct FTransform& CallFunc_Get_Effect_Transform_NewParam, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuat& CallFunc_Conv_RotatorToQuaternion_ReturnValue);
	void Create_NS_SplashFeet(double CallFunc_GetInWaterRate_rate, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FTransform& CallFunc_Get_Effect_Transform_NewParam, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void CreateInWaterEffect(bool CallFunc_IsMakeDiveEffect_isFalling);
	void GetInWaterRate(double* Rate, float CallFunc_GetInWaterRate_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_rate_ImplicitCast);
	void Get_Effect_Transform(double OffsetDistance, bool IsUseWaterPlaneNormal, struct FTransform* NewParam, const struct FRotator& Rot, const struct FVector& UpVector, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue_1, const struct FRotator& CallFunc_MakeRotationFromAxes_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_GetWaterPlaneNormal_ReturnValue, const struct FVector& CallFunc_GetWaterPlaneLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnBeginVisualEffect();
	void TickVisualEffect(float DeltaTime);
	void OnEndVisualEffect();
	void ExecuteUbergraph_BP_VisualEffect_Swimming(int32 EntryPoint, float K2Node_Event_DeltaTime, class AActor* CallFunc_GetOwner_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, double CallFunc_Update_NS_SplashFeet_DeltaTime_ImplicitCast, double CallFunc_Update_NS_InWater_DeltaTime_ImplicitCast);
};

}


