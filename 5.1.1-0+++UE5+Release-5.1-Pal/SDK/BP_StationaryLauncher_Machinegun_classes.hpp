#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5F (0x5F8 - 0x599)
// BlueprintGeneratedClass BP_StationaryLauncher_Machinegun.BP_StationaryLauncher_Machinegun_C
class ABP_StationaryLauncher_Machinegun_C : public ABP_NormalStationaryLauncherBase_C
{
public:
	uint8                                        Pad_3E00[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPoseableMeshComponent*                PoseableMesh;                                      // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  M2HMG_RotatePart;                                  // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  DefenseFacilityMedieval_Sand;                      // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       RotatePartPoint;                                   // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                       MuzzleDirection;                                   // 0x5C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       PitchRange;                                        // 0x5C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation;                                          // 0x5D0(0x18)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	class FName                                  HorizontalBoneName;                                // 0x5E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  VerticalBoneName;                                  // 0x5F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StationaryLauncher_Machinegun_C* GetDefaultObj();

	void OnRep_Rotation(const struct FRotator& CallFunc_GetBoneRotationByName_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FRotator& CallFunc_GetBoneRotationByName_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_3, float CallFunc_BreakRotator_Pitch_3, float CallFunc_BreakRotator_Yaw_3, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	void RotatePitchToTarget(const struct FVector& TargetLocation, double LerpSpeed, double DeltaTime, float CallFunc_RSign_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_ClampAngle_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_RSign_V_ImplicitCast, double CallFunc_ClampAngle_MinAngleDegrees_ImplicitCast, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast);
	void GetMuzzleRotateLocation(struct FVector* RotateLocation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
	float GetAttackableDistance(float CallFunc_GetAttackableDistance_ReturnValue);
	void GetRotateMuzzleRef(class UStaticMeshComponent** Muzzle);
	float GetAttackableAngle(float CallFunc_GetAttackableAngle_ReturnValue);
	void GetPullTriggerInterval(double* PullTriggerInterval, double CallFunc_GetPullTriggerInterval_PullTriggerInterval);
	void GetShootNumMax(int32* ShootNumMax);
	void CalcBarrelDirection(const struct FVector& TargetLocation, const struct FVector& OriginWorldLocation, double BarrelUpOffset, struct FVector* Direction, const struct FVector& CallFunc_GetUpVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void OnShoot(class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue);
	int32 GetWeaponDamage();
	void GetMuzzleRotator(struct FRotator* Rotator, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue);
	void GetShootInterval(double* Time);
	void GetBlurAngle(double* Angle);
	void GetBulletClass(class UClass** NewParam);
	void GetMuzzleLocation(struct FVector* MuzzleLocation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue);
};

}


