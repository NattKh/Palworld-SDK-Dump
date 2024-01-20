#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2F (0x5A0 - 0x571)
// BlueprintGeneratedClass BP_RocketLauncher.BP_RocketLauncher_C
class ABP_RocketLauncher_C : public ABP_AssaultRifleBase_C
{
public:
	uint8                                        Pad_434A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Sphere;                                            // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  BP_Ammo_Rocket;                                    // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              RocketMask;                                        // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_RocketLauncher_C* GetDefaultObj();

	void OnShoot(const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void StopReloadSound(const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID);
	void PlayReloadSound(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID);
	void PlayFireSound(const struct FPalSoundOptions& K2Node_MakeStruct_PalSoundOptions, const struct FPalDataTableRowName_SoundID& K2Node_MakeStruct_PalDataTableRowName_SoundID);
	void ShootBullet();
	void ChangeTransformForRocketWhenReloadIsDone(const struct FVector& Location, const struct FRotator& Lotation, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult);
	void ChangeTransformForRocketReload(const struct FVector& Location, const struct FRotator& Rotation, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult);
	struct FTransform GetLeftHandTransform(const struct FTransform& CallFunc_GetSocketTransform_ReturnValue);
	void OnEndShootAnimation(class UAnimMontage* Montage, bool CallFunc_IsEmptyMagazine_ReturnValue);
	void GetAimingBlurAngle(double* Angle);
	void GetBlurAngle(double* Angle);
	void IsUseRightHandAttach(bool* IsUse);
	void Get_Right_Hand_Location(struct FVector* RightHandLocation, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	bool IsUseLeftHandAttach();
	void GetMuzzleRotator(struct FRotator* Rotator, const struct FRotator& CallFunc_GetSocketRotation_ReturnValue);
	void GetBulletClass(class UClass** NewParam);
	void GetInitializeInterval(double* Time, double CallFunc_GetShootInterval_Time, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void GetShootInterval(double* Time);
	void GetMuzzleEffect(class UNiagaraSystem** NewParam);
	void GetMuzzleLocation(struct FVector* MuzzleLocation, const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	void ReceiveTick(float DeltaSeconds);
	void OnReload(int32 bulletsNum);
	void OnReloadStart();
	void OnPullTrigger();
	void ReceiveBeginPlay();
	void OnDetachWeapon(class AActor* DetachActor);
	void OnAttachWeapon(class AActor* AttachActor);
	void ExecuteUbergraph_BP_RocketLauncher(int32 EntryPoint, float K2Node_Event_DeltaSeconds, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_bulletsNum, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, class AActor* K2Node_Event_detachActor, bool CallFunc_K2_AttachToComponent_ReturnValue_2, class AActor* K2Node_Event_attachActor, bool CallFunc_IsEmptyMagazine_ReturnValue);
};

}


