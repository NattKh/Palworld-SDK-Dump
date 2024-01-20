#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x99 (0x639 - 0x5A0)
// BlueprintGeneratedClass BP_PenguinLauncher.BP_PenguinLauncher_C
class ABP_PenguinLauncher_C : public ABP_RocketLauncher_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  Flag_Name;                                         // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalShooterComponent*                  Shooter;                                           // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BulletReloadLocationStart;                         // 0x5B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BulletReloadLocationEnd;                           // 0x5D0(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              BulletReloadRotationStart;                         // 0x5E8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              BulletReloadRotationEnd;                           // 0x600(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsBulletInterpolation;                             // 0x618(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BC4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       BulletInterpolTime;                                // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WeaponDamageByOutSide;                             // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Attacker;                                          // 0x630(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsShootComplated;                                  // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_PenguinLauncher_C* GetDefaultObj();

	class AActor* GetWeaponAttacker();
	void UpdateBulletTransform(double Delta, double Progress, double InterpolTimeSec, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_RLerp_Alpha_ImplicitCast, float CallFunc_VLerp_Alpha_ImplicitCast);
	void SetDisplayReloadCompleted(bool CallFunc_K2_AttachToComponent_ReturnValue);
	void SetDisplayReloadStart(const struct FVector& StartLocation, const struct FRotator& StartRotation, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
	int32 GetWeaponDamage();
	void ChangeTransformForRocketReload(const struct FVector& Location, const struct FRotator& Rotation);
	void ChangeTransformForRocketWhenReloadIsDone(const struct FVector& Location, const struct FRotator& Lotation);
	void GetBulletClass(class UClass** NewParam);
	void OnPullTrigger();
	void ShootComplated();
	void OnAttachWeapon(class AActor* AttachActor);
	void ReceiveTick(float DeltaSeconds);
	void SetWeaponDamage(int32 Damageam);
	void SetAttacker(class AActor* AttackerPal);
	void OnWeaponNotify(enum class EWeaponNotifyType Type);
	void OnReloadStart();
	void ExecuteUbergraph_BP_PenguinLauncher(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_attachActor, double CallFunc_GetShootInterval_Time, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds, int32 K2Node_Event_Damageam, class AActor* K2Node_Event_AttackerPal, enum class EWeaponNotifyType K2Node_Event_type, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_UpdateBulletTransform_delta_ImplicitCast);
};

}


