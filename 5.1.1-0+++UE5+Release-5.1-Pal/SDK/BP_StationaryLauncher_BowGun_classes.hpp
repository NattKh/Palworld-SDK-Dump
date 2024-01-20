#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6F (0x608 - 0x599)
// BlueprintGeneratedClass BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C
class ABP_StationaryLauncher_BowGun_C : public ABP_NormalStationaryLauncherBase_C
{
public:
	uint8                                        Pad_3DC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UArrowComponent*                       MuzzleDirection;                                   // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       RotatePartPoint;                                   // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DefenseFacilityMedieval_Bolt;                      // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DefenseFacilityMedieval_Sand;                      // 0x5C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  RotatePart;                                        // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                DefenseFacilityMedieval_Base;                      // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       PitchRange;                                        // 0x5D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UABP_DefenseFacilityMedieval_Base_Skeleton_C* ABP_BowGun;                                        // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ShootMontage;                                      // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0x5F0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_StationaryLauncher_BowGun_C* GetDefaultObj();

	void GetMuzzleRotateLocation(struct FVector* RotateLocation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void GetMontagePlayRate(double* PlayRate, double CallFunc_GetPullTriggerInterval_PullTriggerInterval, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentMontagePlayTimeToEnd_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	void OnRep_Rotation(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	float GetAttackableDistance(float CallFunc_GetAttackableDistance_ReturnValue);
	void GetRotateMuzzleRef(class UStaticMeshComponent** Muzzle);
	float GetAttackableAngle(float CallFunc_GetAttackableAngle_ReturnValue);
	void GetPullTriggerInterval(double* PullTriggerInterval);
	void GetShootNumMax(int32* ShootNumMax);
	void CalcBarrelDirection(const struct FVector& TargetLocation, const struct FVector& OriginWorldLocation, double BarrelUpOffset, struct FVector* Direction, const struct FVector& CallFunc_GetUpVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	int32 GetWeaponDamage();
	void GetMuzzleRotator(struct FRotator* Rotator, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue);
	void GetShootInterval(double* Time);
	void GetBlurAngle(double* Angle);
	void GetBulletClass(class UClass** NewParam);
	void GetMuzzleLocation(struct FVector* MuzzleLocation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	void RotatePitchToTarget(const struct FVector& TargetLocation, double LerpSpeed, double DeltaTime, float CallFunc_RSign_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_ClampAngle_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_RSign_V_ImplicitCast, double CallFunc_ClampAngle_MinAngleDegrees_ImplicitCast, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void OnNotifyEnd_7A4E4031410EE30F3A946787672F311A(class FName NotifyName);
	void OnNotifyBegin_7A4E4031410EE30F3A946787672F311A(class FName NotifyName);
	void OnInterrupted_7A4E4031410EE30F3A946787672F311A(class FName NotifyName);
	void OnBlendOut_7A4E4031410EE30F3A946787672F311A(class FName NotifyName);
	void OnCompleted_7A4E4031410EE30F3A946787672F311A(class FName NotifyName);
	void ReceiveBeginPlay();
	void OnShoot();
	void ExecuteUbergraph_BP_StationaryLauncher_BowGun(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UABP_DefenseFacilityMedieval_Base_Skeleton_C* K2Node_DynamicCast_AsABP_Defense_Facility_Medieval_Base_Skeleton, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, double CallFunc_GetMontagePlayRate_PlayRate, float CallFunc_Montage_SetPlayRate_NewPlayRate_ImplicitCast);
};

}


