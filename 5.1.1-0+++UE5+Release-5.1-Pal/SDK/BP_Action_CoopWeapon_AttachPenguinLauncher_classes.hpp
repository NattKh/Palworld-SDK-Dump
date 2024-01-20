#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x1D0 - 0x138)
// BlueprintGeneratedClass BP_Action_CoopWeapon_AttachPenguinLauncher.BP_Action_CoopWeapon_AttachPenguinLauncher_C
class UBP_Action_CoopWeapon_AttachPenguinLauncher_C : public UPalActionBase
{
public:
	uint8                                        Pad_1795[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CoopParam_Weapon_C*                CoopParam;                                         // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_PenguinLauncher_C*                 WeaponObject;                                      // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsJumping;                                         // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17B1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ToTargetLocation;                                  // 0x160(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ElapsedTime;                                       // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ScaleTime;                                         // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LowerScaleSize;                                    // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               OriginalScale;                                     // 0x190(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       VelocityXY;                                        // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       JumpTimeSec;                                       // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       JumpVelocity;                                      // 0x1B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionEnabled                 TargetCollisionEnabled_Capsule;                    // 0x1C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionEnabled                 TargetCollisionEnabled_Mesh;                       // 0x1C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17D1[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USplineComponent*                      Spline;                                            // 0x1C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_CoopWeapon_AttachPenguinLauncher_C* GetDefaultObj();

	void GetLocationAtSpline(const struct FVector& StartLocation, const struct FVector& ArriveLocation, double Progress, struct FVector* NewLocation, const struct FVector& CallFunc_GetLocationAtTime_ReturnValue, float CallFunc_GetLocationAtTime_Time_ImplicitCast);
	void GetTargetCollisionSetting(class AActor* CallFunc_GetActionTarget_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, enum class ECollisionEnabled CallFunc_GetCollisionEnabled_ReturnValue, enum class ECollisionEnabled CallFunc_GetCollisionEnabled_ReturnValue_1);
	void SetTargetCollision(bool IsEnable, class AActor* CallFunc_GetActionTarget_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue_1, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue, class UCapsuleComponent* CallFunc_GetComponentByClass_ReturnValue_1);
	void SetShooterDisableFlag(bool IsDisable, bool IsDsable, class UPalShooterComponent* Shooter, class FName FlagName, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_1, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue);
	void OnNotifyEnd_5D248DC6452B5B279DB010AF957CC7DD(class FName NotifyName);
	void OnNotifyBegin_5D248DC6452B5B279DB010AF957CC7DD(class FName NotifyName);
	void OnInterrupted_5D248DC6452B5B279DB010AF957CC7DD(class FName NotifyName);
	void OnBlendOut_5D248DC6452B5B279DB010AF957CC7DD(class FName NotifyName);
	void OnCompleted_5D248DC6452B5B279DB010AF957CC7DD(class FName NotifyName);
	void OnEndAction();
	void TickAction(float DeltaTime);
	void OnBeginAction();
	void ExecuteUbergraph_BP_Action_CoopWeapon_AttachPenguinLauncher(int32 EntryPoint, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UBP_CoopParam_Weapon_C* CallFunc_GetComponentByClass_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Attach_Weapon_Result, bool CallFunc_Attach_Weapon_IsWeaponChanged, class AActor* CallFunc_GetActionTarget_ReturnValue_1, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class ABP_PenguinLauncher_C* K2Node_DynamicCast_AsBP_Penguin_Launcher, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetActionTarget_ReturnValue_2, float K2Node_Event_DeltaTime, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class AActor* CallFunc_GetActionTarget_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_4, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class FName K2Node_CustomEvent_NotifyName_1, bool CallFunc_Vector_IsNearlyZero_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_5, bool CallFunc_K2_SetActorRotation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AActor* CallFunc_GetActionTarget_ReturnValue_6, class AActor* CallFunc_GetActionTarget_ReturnValue_7, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, class FName K2Node_CustomEvent_NotifyName_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Greater_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, bool CallFunc_Vector_IsNearlyZero_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_8, class UMovementComponent* CallFunc_GetComponentByClass_ReturnValue_2, class AActor* CallFunc_GetActionTarget_ReturnValue_9, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_4, class AActor* CallFunc_GetActionTarget_ReturnValue_10, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID, double CallFunc_Add_DoubleDouble_B_ImplicitCast);
};

}


