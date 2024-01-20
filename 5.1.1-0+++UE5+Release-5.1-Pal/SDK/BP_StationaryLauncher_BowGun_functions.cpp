#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C
// (Actor)

class UClass* ABP_StationaryLauncher_BowGun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_StationaryLauncher_BowGun_C");

	return Clss;
}


// BP_StationaryLauncher_BowGun_C BP_StationaryLauncher_BowGun.Default__BP_StationaryLauncher_BowGun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_StationaryLauncher_BowGun_C* ABP_StationaryLauncher_BowGun_C::GetDefaultObj()
{
	static class ABP_StationaryLauncher_BowGun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_StationaryLauncher_BowGun_C*>(ABP_StationaryLauncher_BowGun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetMuzzleRotateLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     RotateLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::GetMuzzleRotateLocation(struct FVector* RotateLocation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetMuzzleRotateLocation");

	Params::ABP_StationaryLauncher_BowGun_C_GetMuzzleRotateLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RotateLocation != nullptr)
		*RotateLocation = std::move(Parms.RotateLocation);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetMontagePlayRate
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             PlayRate                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPullTriggerInterval_PullTriggerInterval              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalAnimInstance*            K2Node_DynamicCast_AsPal_Anim_Instance                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentMontagePlayTimeToEnd_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::GetMontagePlayRate(double* PlayRate, double CallFunc_GetPullTriggerInterval_PullTriggerInterval, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPalAnimInstance* K2Node_DynamicCast_AsPal_Anim_Instance, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetCurrentMontagePlayTimeToEnd_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetMontagePlayRate");

	Params::ABP_StationaryLauncher_BowGun_C_GetMontagePlayRate_Params Parms{};

	Parms.CallFunc_GetPullTriggerInterval_PullTriggerInterval = CallFunc_GetPullTriggerInterval_PullTriggerInterval;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Anim_Instance = K2Node_DynamicCast_AsPal_Anim_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentMontagePlayTimeToEnd_ReturnValue = CallFunc_GetCurrentMontagePlayTimeToEnd_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayRate != nullptr)
		*PlayRate = Parms.PlayRate;

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.OnRep_Rotation
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_StationaryLauncher_BowGun_C::OnRep_Rotation(const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "OnRep_Rotation");

	Params::ABP_StationaryLauncher_BowGun_C_OnRep_Rotation_Params Parms{};

	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetAttackableDistance
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAttackableDistance_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_StationaryLauncher_BowGun_C::GetAttackableDistance(float CallFunc_GetAttackableDistance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetAttackableDistance");

	Params::ABP_StationaryLauncher_BowGun_C_GetAttackableDistance_Params Parms{};

	Parms.CallFunc_GetAttackableDistance_ReturnValue = CallFunc_GetAttackableDistance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetRotateMuzzleRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        Muzzle                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::GetRotateMuzzleRef(class UStaticMeshComponent** Muzzle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetRotateMuzzleRef");

	Params::ABP_StationaryLauncher_BowGun_C_GetRotateMuzzleRef_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Muzzle != nullptr)
		*Muzzle = Parms.Muzzle;

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetAttackableAngle
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAttackableAngle_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_StationaryLauncher_BowGun_C::GetAttackableAngle(float CallFunc_GetAttackableAngle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetAttackableAngle");

	Params::ABP_StationaryLauncher_BowGun_C_GetAttackableAngle_Params Parms{};

	Parms.CallFunc_GetAttackableAngle_ReturnValue = CallFunc_GetAttackableAngle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetPullTriggerInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             PullTriggerInterval                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::GetPullTriggerInterval(double* PullTriggerInterval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetPullTriggerInterval");

	Params::ABP_StationaryLauncher_BowGun_C_GetPullTriggerInterval_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (PullTriggerInterval != nullptr)
		*PullTriggerInterval = Parms.PullTriggerInterval;

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetShootNumMax
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ShootNumMax                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::GetShootNumMax(int32* ShootNumMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetShootNumMax");

	Params::ABP_StationaryLauncher_BowGun_C_GetShootNumMax_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShootNumMax != nullptr)
		*ShootNumMax = Parms.ShootNumMax;

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.CalcBarrelDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OriginWorldLocation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BarrelUpOffset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Direction                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::CalcBarrelDirection(const struct FVector& TargetLocation, const struct FVector& OriginWorldLocation, double BarrelUpOffset, struct FVector* Direction, const struct FVector& CallFunc_GetUpVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "CalcBarrelDirection");

	Params::ABP_StationaryLauncher_BowGun_C_CalcBarrelDirection_Params Parms{};

	Parms.TargetLocation = TargetLocation;
	Parms.OriginWorldLocation = OriginWorldLocation;
	Parms.BarrelUpOffset = BarrelUpOffset;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Direction != nullptr)
		*Direction = std::move(Parms.Direction);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetWeaponDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_StationaryLauncher_BowGun_C::GetWeaponDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetWeaponDamage");

	Params::ABP_StationaryLauncher_BowGun_C_GetWeaponDamage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetMuzzleRotator
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    Rotator                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_StationaryLauncher_BowGun_C::GetMuzzleRotator(struct FRotator* Rotator, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetMuzzleRotator");

	Params::ABP_StationaryLauncher_BowGun_C_GetMuzzleRotator_Params Parms{};

	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetShootInterval
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::GetShootInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetShootInterval");

	Params::ABP_StationaryLauncher_BowGun_C_GetShootInterval_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetBlurAngle
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::GetBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetBlurAngle");

	Params::ABP_StationaryLauncher_BowGun_C_GetBlurAngle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetBulletClass
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      NewParam                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::GetBulletClass(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetBulletClass");

	Params::ABP_StationaryLauncher_BowGun_C_GetBulletClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.GetMuzzleLocation
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     MuzzleLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::GetMuzzleLocation(struct FVector* MuzzleLocation, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "GetMuzzleLocation");

	Params::ABP_StationaryLauncher_BowGun_C_GetMuzzleLocation_Params Parms{};

	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (MuzzleLocation != nullptr)
		*MuzzleLocation = std::move(Parms.MuzzleLocation);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.RotatePitchToTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             LerpSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RSign_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ClampAngle_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RSign_V_ImplicitCast                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ClampAngle_MinAngleDegrees_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_ClampAngle_AngleDegrees_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::RotatePitchToTarget(const struct FVector& TargetLocation, double LerpSpeed, double DeltaTime, float CallFunc_RSign_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, double CallFunc_ClampAngle_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_RSign_V_ImplicitCast, double CallFunc_ClampAngle_MinAngleDegrees_ImplicitCast, double CallFunc_ClampAngle_AngleDegrees_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "RotatePitchToTarget");

	Params::ABP_StationaryLauncher_BowGun_C_RotatePitchToTarget_Params Parms{};

	Parms.TargetLocation = TargetLocation;
	Parms.LerpSpeed = LerpSpeed;
	Parms.DeltaTime = DeltaTime;
	Parms.CallFunc_RSign_ReturnValue = CallFunc_RSign_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_ClampAngle_ReturnValue = CallFunc_ClampAngle_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RSign_V_ImplicitCast = CallFunc_RSign_V_ImplicitCast;
	Parms.CallFunc_ClampAngle_MinAngleDegrees_ImplicitCast = CallFunc_ClampAngle_MinAngleDegrees_ImplicitCast;
	Parms.CallFunc_ClampAngle_AngleDegrees_ImplicitCast = CallFunc_ClampAngle_AngleDegrees_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.OnNotifyEnd_7A4E4031410EE30F3A946787672F311A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::OnNotifyEnd_7A4E4031410EE30F3A946787672F311A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "OnNotifyEnd_7A4E4031410EE30F3A946787672F311A");

	Params::ABP_StationaryLauncher_BowGun_C_OnNotifyEnd_7A4E4031410EE30F3A946787672F311A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.OnNotifyBegin_7A4E4031410EE30F3A946787672F311A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::OnNotifyBegin_7A4E4031410EE30F3A946787672F311A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "OnNotifyBegin_7A4E4031410EE30F3A946787672F311A");

	Params::ABP_StationaryLauncher_BowGun_C_OnNotifyBegin_7A4E4031410EE30F3A946787672F311A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.OnInterrupted_7A4E4031410EE30F3A946787672F311A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::OnInterrupted_7A4E4031410EE30F3A946787672F311A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "OnInterrupted_7A4E4031410EE30F3A946787672F311A");

	Params::ABP_StationaryLauncher_BowGun_C_OnInterrupted_7A4E4031410EE30F3A946787672F311A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.OnBlendOut_7A4E4031410EE30F3A946787672F311A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::OnBlendOut_7A4E4031410EE30F3A946787672F311A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "OnBlendOut_7A4E4031410EE30F3A946787672F311A");

	Params::ABP_StationaryLauncher_BowGun_C_OnBlendOut_7A4E4031410EE30F3A946787672F311A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.OnCompleted_7A4E4031410EE30F3A946787672F311A
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::OnCompleted_7A4E4031410EE30F3A946787672F311A(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "OnCompleted_7A4E4031410EE30F3A946787672F311A");

	Params::ABP_StationaryLauncher_BowGun_C_OnCompleted_7A4E4031410EE30F3A946787672F311A_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_StationaryLauncher_BowGun_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.OnShoot
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_StationaryLauncher_BowGun_C::OnShoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "OnShoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_StationaryLauncher_BowGun.BP_StationaryLauncher_BowGun_C.ExecuteUbergraph_BP_StationaryLauncher_BowGun
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UABP_DefenseFacilityMedieval_Base_Skeleton_C*K2Node_DynamicCast_AsABP_Defense_Facility_Medieval_Base_Skeleton (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMontagePlayRate_PlayRate                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_SetPlayRate_NewPlayRate_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_StationaryLauncher_BowGun_C::ExecuteUbergraph_BP_StationaryLauncher_BowGun(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName Temp_name_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class UABP_DefenseFacilityMedieval_Base_Skeleton_C* K2Node_DynamicCast_AsABP_Defense_Facility_Medieval_Base_Skeleton, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, double CallFunc_GetMontagePlayRate_PlayRate, float CallFunc_Montage_SetPlayRate_NewPlayRate_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_StationaryLauncher_BowGun_C", "ExecuteUbergraph_BP_StationaryLauncher_BowGun");

	Params::ABP_StationaryLauncher_BowGun_C_ExecuteUbergraph_BP_StationaryLauncher_BowGun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.K2Node_DynamicCast_AsABP_Defense_Facility_Medieval_Base_Skeleton = K2Node_DynamicCast_AsABP_Defense_Facility_Medieval_Base_Skeleton;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_GetMontagePlayRate_PlayRate = CallFunc_GetMontagePlayRate_PlayRate;
	Parms.CallFunc_Montage_SetPlayRate_NewPlayRate_ImplicitCast = CallFunc_Montage_SetPlayRate_NewPlayRate_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


