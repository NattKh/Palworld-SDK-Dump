#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x181 - 0x138)
// BlueprintGeneratedClass BP_Action_Coop_AssaultRifle_Monkey.BP_Action_Coop_AssaultRifle_Monkey_C
class UBP_Action_Coop_AssaultRifle_Monkey_C : public UPalActionBase
{
public:
	uint8                                        Pad_406D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x140(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       AimRotSpeed;                                       // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShooting;                                        // 0x150(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_406F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShootCount;                                        // 0x154(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShootStopCount;                                    // 0x158(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4072[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ShootElapsedTime;                                  // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ShootInterval;                                     // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BulletMesh;                                        // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_CoopParam_AssaultRifleMode_C*      CoopParam;                                         // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoving;                                          // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Coop_AssaultRifle_Monkey_C* GetDefaultObj();

	void UpdateAnimation(bool CallFunc_BooleanOR_ReturnValue);
	void ChangeAnime(class UAnimMontage* NewAnime, class UAnimMontage* StopAnime, class UAnimMontage* StopAnime2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_PlayAnimMontage_ReturnValue);
	void SetGunMeshTransform(double ArmLength, const struct FVector& Hand_r, const struct FVector& Lowerarm_r, const struct FVector& Upperarm_r, class UPalSkeletalMeshComponent* Mesh, class AActor* CallFunc_GetActionTarget_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh_Output, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USkeletalMeshComponent* CallFunc_GetGunMesh_Output_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, class USkeletalMeshComponent* CallFunc_GetMainMeshByActor_ReturnValue, class UPalSkeletalMeshComponent* K2Node_DynamicCast_AsPal_Skeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess);
	void SetLookAtTarget(bool IsLookAt, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalStaticCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UPalLookAtComponent* CallFunc_GetComponentByClass_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1);
	void GetGunMesh(class USkeletalMeshComponent** Output, const TArray<class USkeletalMeshComponent*>& MeshList, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue);
	void SetGunVisibility(bool IsVisible, class USkeletalMeshComponent* GunMesh, class USkeletalMeshComponent* CallFunc_GetGunMesh_Output, bool CallFunc_IsValid_ReturnValue);
	void ShootBullet(const struct FRotator& LocalRotation, class UStaticMeshComponent* GunMesh, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UBP_CoopParam_AssaultRifleMode_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateShoot(double DeltaTime, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Is_Aim_Sufficiently__Result, double CallFunc_Add_DoubleDouble_ReturnValue);
	void Is_Aim_Sufficiently_(bool* Result, class AActor* CallFunc_GetActionTarget_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_AngleBetweenVector_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
	void Turn_to_Target(double DeltaTime, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue, class AActor* CallFunc_GetActionTarget_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_GeneralTurnLinearToActor_LerpSpeed_ImplicitCast, float CallFunc_GeneralTurnLinearToActor_DeltaTime_ImplicitCast);
	void SetMovementDisable(bool IsDisable, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateAim(double DeltaTime, bool CallFunc_Is_Aim_Sufficiently__Result, bool CallFunc_Not_PreBool_ReturnValue);
	void OnBeginAction();
	void OnEndAction();
	void TickAction(float DeltaTime);
	void ExecuteUbergraph_BP_Action_Coop_AssaultRifle_Monkey(int32 EntryPoint, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, float K2Node_Event_DeltaTime, class AActor* CallFunc_GetActionTarget_ReturnValue, bool CallFunc_IsLive_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, class UBP_CoopParam_AssaultRifleMode_C* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_UpdateAim_DeltaTime_ImplicitCast, double CallFunc_UpdateShoot_DeltaTime_ImplicitCast);
};

}


