#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x5D0 - 0x588)
// BlueprintGeneratedClass BP_BuildObjectDefenseBulletLauncher_Base.BP_BuildObjectDefenseBulletLauncher_Base_C
class ABP_BuildObjectDefenseBulletLauncher_Base_C : public APalBuildObjectDefenseBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x588(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                  WeaponActor;                                       // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_NormalStationaryLauncherBase_C*    StationaryWeapon;                                  // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       RotateYawSpeed;                                    // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RotatePitchSpeed;                                  // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x5B8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObjectDefenseBulletLauncher_Base_C* GetDefaultObj();

	void GetLineEnd(const struct FVector& StartLocation, double Yaw, struct FVector* LineEnd, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_GetAttackableDistance_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void SetupWeapon(class ABP_NormalStationaryLauncherBase_C* K2Node_DynamicCast_AsBP_Normal_Stationary_Launcher_Base, bool K2Node_DynamicCast_bSuccess);
	void TurnToTarget_Internal(class AActor* TargetActor, double DeltaTime, const struct FVector& CallFunc_GetMuzzleRotateLocation_RotateLocation, const struct FVector& CallFunc_GetAttackTargetLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UStaticMeshComponent* CallFunc_GetRotateMuzzleRef_Muzzle, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_RInterpTo_DeltaTime_ImplicitCast, float CallFunc_RInterpTo_InterpSpeed_ImplicitCast);
	void DebugDrawAttackableRange(double Duration, const struct FVector& StartLocation, float CallFunc_GetAttackableAngle_ReturnValue, float CallFunc_GetAttackableAngle_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetLineEnd_LineEnd, const struct FVector& CallFunc_GetLineEnd_LineEnd_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast_1, float CallFunc_DrawDebugLine_Duration_ImplicitCast, float CallFunc_DrawDebugLine_Duration_ImplicitCast_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnAvailable_BlueprintImpl();
	void ExecuteUbergraph_BP_BuildObjectDefenseBulletLauncher_Base(int32 EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, class UPalDebugSetting* CallFunc_GetPalDebugSetting_ReturnValue, double CallFunc_DebugDrawAttackableRange_Duration_ImplicitCast);
};

}


