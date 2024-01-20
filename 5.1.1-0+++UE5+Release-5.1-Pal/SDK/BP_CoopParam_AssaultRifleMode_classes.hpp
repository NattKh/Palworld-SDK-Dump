#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x108 - 0xA0)
// BlueprintGeneratedClass BP_CoopParam_AssaultRifleMode.BP_CoopParam_AssaultRifleMode_C
class UBP_CoopParam_AssaultRifleMode_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAnimMontage*                          MovingAnim;                                        // 0xA8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ShootingAnim;                                      // 0xB0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          IdleAnim;                                          // 0xB8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BulletMesh;                                        // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                GunMesh;                                           // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Trainer;                                           // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnShoot;                                           // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FVector                               AimStartPoint;                                     // 0xE8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimBlurAngle;                                      // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_CoopParam_AssaultRifleMode_C* GetDefaultObj();

	void CalcShootBlurRotator(double BlurAngle, struct FRotator* BlurRotator, const struct FRotator& Blur, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_MakeRotator_Pitch_ImplicitCast, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void GetWeaponDamage(int32* Damage, class AActor* CallFunc_GetOwner_ReturnValue, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue, float CallFunc_GetActiveSkillMainValueByRank_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_FTrunc_A_ImplicitCast);
	void ShootBullet(const struct FRotator& LocalRotation, const struct FRotator& CallFunc_CalcShootBlurRotator_BlurRotator, int32 CallFunc_GetWeaponDamage_Damage, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AActor* CallFunc_FindOwnerActor_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class APalBullet* CallFunc_FinishSpawningActor_ReturnValue, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void ReceiveBeginPlay();
	void ShootStart();
	void ExecuteUbergraph_BP_CoopParam_AssaultRifleMode(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, TArray<class USkeletalMeshComponent*>& CallFunc_GetComponentsByTag_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item);
	void OnShoot__DelegateSignature();
};

}


