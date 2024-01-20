#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x148 (0x468 - 0x320)
// BlueprintGeneratedClass BP_PalSphere_Body.BP_PalSphere_Body_C
class ABP_PalSphere_Body_C : public ABP_PalCaptureBodyBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitedBallGoalLocation;                             // 0x330(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HitedBallMoveTime;                                 // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HitedBallMoveTimer;                                // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CureEffect;                                        // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EPalCaptureSphereState            PalSphereState;                                    // 0x360(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4265[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 JudgedFlagArray;                                   // 0x368(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	double                                       JudgeInterval;                                     // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       JudgeTimer;                                        // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NowJudgePhaseCount;                                // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4267[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveVector*                          BallShakeCurve;                                    // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       BallShakeTime;                                     // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BallShakeTimer;                                    // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BouncePower;                                       // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShakePower;                                        // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AfterShakePassingPhaseEventDelay;                  // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AfterHitedBallPassingPhaseDelay;                   // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FlyToSkyDelay;                                     // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        PassingPhaseEffect;                                // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<double>                               RateArray;                                         // 0x3D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UNiagaraSystem*                        AbsorbToBallEffect;                                // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        AbsorbToBallCenterEffect;                          // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        OpenSphereEffect;                                  // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_SoundID          SoundId_Shake;                                     // 0x400(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         OpenSphereAnim;                                    // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<enum class E_PalCaptureSphereBouncedReason, class UNiagaraSystem*> BounceEffectMap;                                   // 0x410(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPalCaptureBallEffectSettingDataAsset* EffectSettingDataAsset;                            // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PalSphere_Body_C* GetDefaultObj();

	void FindOwnerPlayer(class APalPlayerCharacter** Player, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, class UPalRideMarkerComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APalCharacter* CallFunc_GetRiderCharacter_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_2, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character_2, bool K2Node_DynamicCast_bSuccess_2);
	void IsSkipFirstJudge(class UPalCharacterParameterComponent* Parameter, TArray<double>& RateList, bool* IsSkip, double Rate, bool CallFunc_IsValid_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FFixedPoint64& CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue, bool CallFunc_IsSneakBonusEnabled_enabled, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, double CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsSneakBonusEnabled_enabled_1, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_LessEqual_FixedPoint64Float_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void SetParameterCaptureAbsorbToBallEffectBySize(class UNiagaraComponent* Effect, const struct FPalCaptureBallEffectSettingData& EffectSettingData, float CallFunc_Conv_IntToFloat_ReturnValue, class APalCharacter* CallFunc_GetTargetActor_TargetActor, const struct FPalCaptureBallEffectSettingData& CallFunc_GetEffectSettingData_ReturnValue);
	void CheckBouncedReason(enum class E_PalCaptureSphereBouncedReason* ReasonType, class APalCharacter* CallFunc_GetTargetActor_TargetActor, bool CallFunc_IsWildNPC_ReturnValue, class APalCharacter* CallFunc_GetTargetActor_TargetActor_1, int32 CallFunc_GetCaptureLevel_level, class APalCharacter* CallFunc_GetTargetActor_TargetActor_2, int32 CallFunc_GetLevel_ReturnValue, const struct FFixedPoint64& CallFunc_GetHP_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FFixedPoint64& CallFunc_GetMaxHP_ReturnValue, float CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void PrevIndexFullPercentage(int32 Index, bool* IsFull, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, double CallFunc_Array_Get_Item, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void BallShakeTick(double DeltaTime, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetVectorValue_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, float CallFunc_GetVectorValue_InTime_ImplicitCast);
	void JudgeProcess(int32 JudgeIndex, bool* Result, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue);
	void PlayOpenSphereEffect(const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void PlayBallCenterEffect(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void PlayCaptureAbsorbToBallEffect(bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetTargetActor_TargetActor, class APalCharacter* CallFunc_GetTargetActor_TargetActor_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue);
	void StopTargetPal(class APalCharacter* CallFunc_GetTargetActor_TargetActor, class APalCharacter* CallFunc_GetTargetActor_TargetActor_1, class AController* CallFunc_GetController_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	void SetupInServer(class APalCharacter* TargetCharacter, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetIsCapturedProcessing_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Variable, class AActor* CallFunc_GetOwnerCharacterOrRiderCharacter_Character, const struct FPalInstanceID& CallFunc_GetIndividualIDByActor_ReturnValue, class AActor* CallFunc_GetOwnerCharacterOrRiderCharacter_Character_1, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, class UPalCharacterManager* CallFunc_GetCharacterManager_ReturnValue, const struct FRotator& CallFunc_GetCameraRotator_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetIndividualHandle_ReturnValue, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, class UPalIndividualCharacterHandle* CallFunc_GetTargetHandle_targetHandle, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, bool CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetCaptureLevel_level, TArray<bool>& CallFunc_JudgePalCapture_TryAllPhase_outJudgeFlagArray, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_CalcCaptureRate_ReturnValue, TArray<float>& CallFunc_GetCalculatedCaptureRate_outCalculatedRateArray, bool CallFunc_IsSkipFirstJudge_isSkip, TArray<double>& CallFunc_IsSkipFirstJudge_RateList_ImplicitCast, TArray<double>& K2Node_VariableSet_RateArray_ImplicitCast);
	void PlaySoundShake();
	void SetCaptureState(enum class EPalCaptureSphereState NewState);
	void Judging(double DeltaTime, int32 Temp_int_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_PrevIndexFullPercentage_IsFull, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_JudgeProcess_result, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void TickMovement_MoveToSky(double DeltaTime, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_K2_AddWorldOffset_SweepHitResult);
	void TickMovement_HitedBall(double DeltaTime, bool bLocalIsComplete, class APalCharacter* CallFunc_GetTargetActor_TargetActor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Lerp_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_VEase_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_VEase_Alpha_ImplicitCast, float CallFunc_SphereTraceSingle_Radius_ImplicitCast);
	void SynchronizeJudgeParameter(TArray<bool>& JudgeFlagArray, TArray<double>& JudgeRateArray);
	void OnShakeBodyToALL();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void CaptureSuccessEvent();
	void PlayCaptureEffectEvent();
	void BounceBallEvent();
	void FlyToSkyEvent(double Delay);
	void DelayPassingPhase(int32 Phase, double DelayTime);
	void DelayPassingPhase_WithEffect(int32 Phase, double DelayTime);
	void OnCompleteCaptureEmissiveEffect(class UPalVisualEffectBase* VisualEffect);
	void OnPassingCapturePhase______0(int32 PhaseCount, class UPalIndividualCharacterHandle* TargetHandle);
	void FailedCapture_OutOfBall();
	void IntoBall(const struct FVector& GoolLocation);
	void ExecuteUbergraph_BP_PalSphere_Body(int32 EntryPoint, class APalPlayerCharacter* CallFunc_FindOwnerPlayer_Player, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class APalCharacter* CallFunc_FindOwnerPalCharacter_ReturnValue, const struct FPalVisualEffectDynamicParameterFloat& K2Node_MakeStruct_PalVisualEffectDynamicParameterFloat, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FPalVisualEffectDynamicParameterFloat>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FPalVisualEffectDynamicParameter& K2Node_MakeStruct_PalVisualEffectDynamicParameter, const struct FRotator& CallFunc_MakeRotFromY_ReturnValue, class APalCharacter* CallFunc_GetTargetActor_TargetActor, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UPalVisualEffectBase* CallFunc_AddVisualEffectForActor_ReturnValue, class UPalIndividualCharacterHandle* CallFunc_GetTargetHandle_targetHandle, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_SwitchEnum_CmpSuccess, class UPalIndividualCharacterHandle* CallFunc_GetTargetHandle_targetHandle_1, class APalCharacter* CallFunc_GetTargetActor_TargetActor_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue, double K2Node_CustomEvent_Delay, bool CallFunc_HasAuthority_ReturnValue_1, class APalCharacter* CallFunc_GetTargetActor_TargetActor_2, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetTargetActor_TargetActor_3, int32 K2Node_CustomEvent_phase_1, double K2Node_CustomEvent_DelayTime_1, class UPalIndividualCharacterHandle* CallFunc_GetTargetHandle_targetHandle_2, int32 K2Node_CustomEvent_phase, double K2Node_CustomEvent_DelayTime, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentScale_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, double CallFunc_Array_Get_Item, class APalCharacter* CallFunc_GetTargetActor_TargetActor_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Round_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class UPalActionComponent* CallFunc_GetActionComponent_ReturnValue, class UPalVisualEffectBase* K2Node_CustomEvent_VisualEffect, int32 K2Node_CustomEvent_phaseCount, class UPalIndividualCharacterHandle* K2Node_CustomEvent_targetHandle, class UPalIndividualCharacterHandle* CallFunc_GetTargetHandle_targetHandle_3, class APalCharacter* CallFunc_GetTargetActor_TargetActor_5, class AController* CallFunc_GetController_ReturnValue, class APalCharacter* CallFunc_GetTargetActor_TargetActor_6, class APalAIController* K2Node_DynamicCast_AsPal_AIController, bool K2Node_DynamicCast_bSuccess, class UPalVisualEffectBase* CallFunc_AddVisualEffectForActor_ReturnValue_1, class APalCharacter* CallFunc_GetTargetActor_TargetActor_7, class APalCharacter* CallFunc_GetTargetActor_TargetActor_8, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue, class APalCharacter* CallFunc_GetTargetActor_TargetActor_9, class APalCharacter* CallFunc_GetTargetActor_TargetActor_10, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, class APalCharacter* CallFunc_GetTargetActor_TargetActor_11, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FVector& K2Node_CustomEvent_GoolLocation, class APalCharacter* CallFunc_GetTargetActor_TargetActor_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalVisualEffectBase* CallFunc_AddVisualEffectForActor_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, TArray<bool>& K2Node_CustomEvent_JudgeFlagArray, TArray<double>& K2Node_CustomEvent_JudgeRateArray, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, enum class E_PalCaptureSphereBouncedReason CallFunc_CheckBouncedReason_ReasonType, bool CallFunc_HasAuthority_ReturnValue_3, class UNiagaraSystem* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue_2, class APalCharacter* CallFunc_GetTargetActor_TargetActor_13, class UPalIndividualCharacterHandle* CallFunc_GetTargetHandle_targetHandle_4, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class APalCharacter* CallFunc_GetTargetActor_TargetActor_14, class UPalCharacterParameterComponent* CallFunc_GetCharacterParameterComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_TickMovement_HitedBall_DeltaTime_ImplicitCast, double CallFunc_Judging_DeltaTime_ImplicitCast, double CallFunc_TickMovement_MoveToSky_DeltaTime_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast_1, float CallFunc_Delay_Duration_ImplicitCast_2);
};

}


