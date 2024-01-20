#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4F (0x258 - 0x209)
// BlueprintGeneratedClass BP_Action_Unique_Eagle_GlidingNail.BP_Action_Unique_Eagle_GlidingNail_C
class UBP_Action_Unique_Eagle_GlidingNail_C : public UBP_ActionUniqueAttackBase_C
{
public:
	uint8                                        Pad_2A6F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       Const_LoopTime;                                    // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Const_MoveSpeed;                                   // 0x220(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Montage_Start;                                     // 0x228(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAnimMontage*                          Montage_Loop;                                      // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAnimMontage*                          Montage_End;                                       // 0x238(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         IsMoving;                                          // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	bool                                         IsBreaking;                                        // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	uint8                                        Pad_2A76[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BreakTimer;                                        // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class ABP_SkillEffect_Unique_Eagle_GlidingNail_C* TrailEffectActor;                                  // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Unique_Eagle_GlidingNail_C* GetDefaultObj();

	void FadeOutEffect(bool CallFunc_IsValid_ReturnValue);
	void SetDisableLookat(bool Disable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue);
	void UpdateHoming(class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FRotator& CallFunc_GetRotation_Rotation, bool CallFunc_K2_SetActorRotation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetMoveSpeed(double* Speed, double TempAlpha, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_GetPlayLength_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast);
	void UpdateVelocity(double DeltaTime, double CallFunc_GetMoveSpeed_Speed, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue);
	void OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void OnNotifyEnd_EDA18BFB417CE49ED186BCB8C436895E(class FName NotifyName);
	void OnNotifyBegin_EDA18BFB417CE49ED186BCB8C436895E(class FName NotifyName);
	void OnInterrupted_EDA18BFB417CE49ED186BCB8C436895E(class FName NotifyName);
	void OnBlendOut_EDA18BFB417CE49ED186BCB8C436895E(class FName NotifyName);
	void OnCompleted_EDA18BFB417CE49ED186BCB8C436895E(class FName NotifyName);
	void OnNotifyEnd_1A98F1044BF6822D636ED1B6065CD900(class FName NotifyName);
	void OnNotifyBegin_1A98F1044BF6822D636ED1B6065CD900(class FName NotifyName);
	void OnInterrupted_1A98F1044BF6822D636ED1B6065CD900(class FName NotifyName);
	void OnBlendOut_1A98F1044BF6822D636ED1B6065CD900(class FName NotifyName);
	void OnCompleted_1A98F1044BF6822D636ED1B6065CD900(class FName NotifyName);
	void OnNotifyEnd_047D21A3488F8E09C3818E9481BBE5FB(class FName NotifyName);
	void OnNotifyBegin_047D21A3488F8E09C3818E9481BBE5FB(class FName NotifyName);
	void OnInterrupted_047D21A3488F8E09C3818E9481BBE5FB(class FName NotifyName);
	void OnBlendOut_047D21A3488F8E09C3818E9481BBE5FB(class FName NotifyName);
	void OnCompleted_047D21A3488F8E09C3818E9481BBE5FB(class FName NotifyName);
	void OnBeginAction();
	void OnLoopEnd();
	void TickAction(float DeltaTime);
	void OnEndAction();
	void ExecuteUbergraph_BP_Action_Unique_Eagle_GlidingNail(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_9, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName Temp_name_Variable_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_2, float K2Node_Event_DeltaTime, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_5, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_6, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_7, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_SkillEffect_Unique_Eagle_GlidingNail_C* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_UpdateVelocity_DeltaTime_ImplicitCast);
};

}


