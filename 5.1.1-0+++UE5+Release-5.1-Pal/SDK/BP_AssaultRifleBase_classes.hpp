#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x39 (0x571 - 0x538)
// BlueprintGeneratedClass BP_AssaultRifleBase.BP_AssaultRifleBase_C
class ABP_AssaultRifleBase_C : public APalWeaponBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x538(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ShootingHandle;                                    // 0x548(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAccurate;                                        // 0x550(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4405[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               TargetPosition;                                    // 0x558(0x18)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SendShootCompletedNotify;                          // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_AssaultRifleBase_C* GetDefaultObj();

	float CalcAccuracy(double CallFunc_GetBlurAngle_Angle, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast);
	float CalcRange(class UClass* CallFunc_GetBulletClass_NewParam, class UProjectileMovementComponent* CallFunc_GetBulletProjectileComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast);
	float CalcDPS(int32 CallFunc_GetWeaponBaseDamage_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, double CallFunc_GetShootInterval_Time, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void GetAmmoClass(class UClass** AmmoClass);
	void PlayReloadAnimation();
	void CanShoot(bool* Can, class AActor* CallFunc_GetOwner_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanShoot_ReturnValue);
	void Get_Right_Hand_Location(struct FVector* RightHandLocation);
	void GeyEjectionPortTransform(struct FTransform* Transform);
	void Is_UseEjectionPort(bool* IsUse);
	void GetShotAnimation();
	bool IsUseLeftHandAttach(bool CallFunc_IsUseLeftHandAttach_ReturnValue);
	void OnShoot();
	void GetAimingBlurAngle(double* Angle);
	void GetInitializeInterval(double* Time, double CallFunc_GetShootInterval_Time, double CallFunc_Multiply_DoubleDouble_ReturnValue);
	void GetBulletClass(class UClass** NewParam);
	void GetBlurAngle(double* Angle);
	void GetMuzzleEffectParticle(class UParticleSystem** Particle_System);
	void GetMuzzleEffect(class UNiagaraSystem** NewParam);
	void GetMuzzleLocation(struct FVector* MuzzleLocation);
	void GetMuzzleRotator(struct FRotator* Rotator);
	void GetShootInterval(double* Time);
	void GetTargetPosition(struct FVector* TargetPosition, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue);
	void ShootBullet(double BlurAngle, const struct FVector& Local_SocketTransform, const struct FRotator& Blur, float CallFunc_GetBlurModifierValue_ReturnValue, float CallFunc_GetShooterComponentBlurRate_ReturnValue, double CallFunc_Conv_FloatToDouble_ReturnValue, float CallFunc_GetDefaultBlurAngle_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_CanReload_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsEmptyMagazine_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UClass* CallFunc_GetAmmoClass_AmmoClass, bool CallFunc_CanReload_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, class UPalBulletCreator* CallFunc_GetBulletCreator_ReturnValue, bool CallFunc_DecrementBullet_ReturnValue, bool CallFunc_IsEmptyMagazine_ReturnValue_1, bool CallFunc_CanShoot_can, const struct FTransform& CallFunc_GeyEjectionPortTransform_Transform, bool CallFunc_Is_UseEjectionPort_isUse, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class UParticleSystem* CallFunc_GetMuzzleEffectParticle_Particle_System, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation, class UParticleSystem* CallFunc_GetMuzzleEffectParticle_Particle_System_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation_1, float CallFunc_GetRandomFloat_ReturnValue, float CallFunc_GetRandomFloat_ReturnValue_1, class UNiagaraSystem* CallFunc_GetMuzzleEffect_NewParam, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UClass* CallFunc_GetBulletClass_NewParam, class UNiagaraSystem* CallFunc_GetMuzzleEffect_NewParam_1, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation_2, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetTargetPosition_TargetPosition, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APalBullet* CallFunc_CreateBullet_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_GetRandomFloat_Max_ImplicitCast, float CallFunc_GetRandomFloat_Max_ImplicitCast_1, float CallFunc_GetRandomFloat_Min_ImplicitCast, float CallFunc_GetRandomFloat_Min_ImplicitCast_1);
	class FName GetEquipSocketName();
	void OnStartAim();
	void OnEndAim();
	void OnPullTrigger();
	void OnReleaseTrigger();
	void OnReloadStart();
	void OnAttachWeapon(class AActor* AttachActor);
	void StopReloadWhenRoll(class UPalActionBase* Action);
	void OnDetachWeapon(class AActor* DetachActor);
	void ExecuteUbergraph_BP_AssaultRifleBase(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_GetShootInterval_Time, double CallFunc_GetInitializeInterval_Time, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* K2Node_Event_attachActor, class UPalActionBase* K2Node_CustomEvent_action, class UBP_ActionStepBase_C* K2Node_DynamicCast_AsBP_Action_Step_Base, bool K2Node_DynamicCast_bSuccess, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_2, class AActor* K2Node_Event_detachActor, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast);
};

}


