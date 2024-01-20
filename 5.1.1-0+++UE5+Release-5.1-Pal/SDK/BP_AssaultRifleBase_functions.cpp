#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_AssaultRifleBase.BP_AssaultRifleBase_C
// (Actor)

class UClass* ABP_AssaultRifleBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_AssaultRifleBase_C");

	return Clss;
}


// BP_AssaultRifleBase_C BP_AssaultRifleBase.Default__BP_AssaultRifleBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_AssaultRifleBase_C* ABP_AssaultRifleBase_C::GetDefaultObj()
{
	static class ABP_AssaultRifleBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_AssaultRifleBase_C*>(ABP_AssaultRifleBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CalcAccuracy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetBlurAngle_Angle                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_AssaultRifleBase_C::CalcAccuracy(double CallFunc_GetBlurAngle_Angle, double CallFunc_Multiply_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "CalcAccuracy");

	Params::ABP_AssaultRifleBase_C_CalcAccuracy_Params Parms{};

	Parms.CallFunc_GetBlurAngle_Angle = CallFunc_GetBlurAngle_Angle;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CalcRange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetBulletClass_NewParam                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UProjectileMovementComponent*CallFunc_GetBulletProjectileComponent_ReturnValue                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_AssaultRifleBase_C::CalcRange(class UClass* CallFunc_GetBulletClass_NewParam, class UProjectileMovementComponent* CallFunc_GetBulletProjectileComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "CalcRange");

	Params::ABP_AssaultRifleBase_C_CalcRange_Params Parms{};

	Parms.CallFunc_GetBulletClass_NewParam = CallFunc_GetBulletClass_NewParam;
	Parms.CallFunc_GetBulletProjectileComponent_ReturnValue = CallFunc_GetBulletProjectileComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = CallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CalcDPS
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetWeaponBaseDamage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_GetShootInterval_Time                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_AssaultRifleBase_C::CalcDPS(int32 CallFunc_GetWeaponBaseDamage_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, double CallFunc_GetShootInterval_Time, class FText CallFunc_Conv_StringToText_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, float K2Node_FunctionResult_ReturnValue_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "CalcDPS");

	Params::ABP_AssaultRifleBase_C_CalcDPS_Params Parms{};

	Parms.CallFunc_GetWeaponBaseDamage_ReturnValue = CallFunc_GetWeaponBaseDamage_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetShootInterval_Time = CallFunc_GetShootInterval_Time;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetAmmoClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      AmmoClass                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetAmmoClass(class UClass** AmmoClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetAmmoClass");

	Params::ABP_AssaultRifleBase_C_GetAmmoClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AmmoClass != nullptr)
		*AmmoClass = Parms.AmmoClass;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.PlayReloadAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AssaultRifleBase_C::PlayReloadAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "PlayReloadAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CanShoot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Can                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShoot_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::CanShoot(bool* Can, class AActor* CallFunc_GetOwner_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_CanShoot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "CanShoot");

	Params::ABP_AssaultRifleBase_C_CanShoot_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_CanShoot_ReturnValue = CallFunc_CanShoot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Can != nullptr)
		*Can = Parms.Can;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.Get Right Hand Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     RightHandLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::Get_Right_Hand_Location(struct FVector* RightHandLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "Get Right Hand Location");

	Params::ABP_AssaultRifleBase_C_Get_Right_Hand_Location_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RightHandLocation != nullptr)
		*RightHandLocation = std::move(Parms.RightHandLocation);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GeyEjectionPortTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GeyEjectionPortTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GeyEjectionPortTransform");

	Params::ABP_AssaultRifleBase_C_GeyEjectionPortTransform_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.Is UseEjectionPort
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsUse                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::Is_UseEjectionPort(bool* IsUse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "Is UseEjectionPort");

	Params::ABP_AssaultRifleBase_C_Is_UseEjectionPort_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsUse != nullptr)
		*IsUse = Parms.IsUse;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetShotAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AssaultRifleBase_C::GetShotAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetShotAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.IsUseLeftHandAttach
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUseLeftHandAttach_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_AssaultRifleBase_C::IsUseLeftHandAttach(bool CallFunc_IsUseLeftHandAttach_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "IsUseLeftHandAttach");

	Params::ABP_AssaultRifleBase_C_IsUseLeftHandAttach_Params Parms{};

	Parms.CallFunc_IsUseLeftHandAttach_ReturnValue = CallFunc_IsUseLeftHandAttach_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnShoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AssaultRifleBase_C::OnShoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnShoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetAimingBlurAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetAimingBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetAimingBlurAngle");

	Params::ABP_AssaultRifleBase_C_GetAimingBlurAngle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetInitializeInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetShootInterval_Time                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetInitializeInterval(double* Time, double CallFunc_GetShootInterval_Time, double CallFunc_Multiply_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetInitializeInterval");

	Params::ABP_AssaultRifleBase_C_GetInitializeInterval_Params Parms{};

	Parms.CallFunc_GetShootInterval_Time = CallFunc_GetShootInterval_Time;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetBulletClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      NewParam                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetBulletClass(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetBulletClass");

	Params::ABP_AssaultRifleBase_C_GetBulletClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetBlurAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Angle                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetBlurAngle");

	Params::ABP_AssaultRifleBase_C_GetBlurAngle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleEffectParticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UParticleSystem*             Particle_System                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetMuzzleEffectParticle(class UParticleSystem** Particle_System)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetMuzzleEffectParticle");

	Params::ABP_AssaultRifleBase_C_GetMuzzleEffectParticle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Particle_System != nullptr)
		*Particle_System = Parms.Particle_System;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraSystem*              NewParam                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetMuzzleEffect(class UNiagaraSystem** NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetMuzzleEffect");

	Params::ABP_AssaultRifleBase_C_GetMuzzleEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     MuzzleLocation                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetMuzzleLocation(struct FVector* MuzzleLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetMuzzleLocation");

	Params::ABP_AssaultRifleBase_C_GetMuzzleLocation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MuzzleLocation != nullptr)
		*MuzzleLocation = std::move(Parms.MuzzleLocation);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleRotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                    Rotator                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AssaultRifleBase_C::GetMuzzleRotator(struct FRotator* Rotator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetMuzzleRotator");

	Params::ABP_AssaultRifleBase_C_GetMuzzleRotator_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetShootInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             Time                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetShootInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetShootInterval");

	Params::ABP_AssaultRifleBase_C_GetShootInterval_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetTargetPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     TargetPosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalCharacterParameterComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetTargetPosition(struct FVector* TargetPosition, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetTargetPosition");

	Params::ABP_AssaultRifleBase_C_GetTargetPosition_Params Parms{};

	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue = CallFunc_GetOverrideTargetLocation_ConsiderRide_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetPosition != nullptr)
		*TargetPosition = std::move(Parms.TargetPosition);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.ShootBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             BlurAngle                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Local_SocketTransform                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Blur                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetBlurModifierValue_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetShooterComponentBlurRate_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_FloatToDouble_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDefaultBlurAngle_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanReload_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmptyMagazine_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalShooterComponent*        CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetAmmoClass_AmmoClass                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanReload_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalBulletCreator*           CallFunc_GetBulletCreator_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DecrementBullet_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmptyMagazine_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanShoot_can                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GeyEjectionPortTransform_Transform                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Is_UseEjectionPort_isUse                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetMuzzleEffectParticle_Particle_System                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetMuzzleRotator_Rotator                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetMuzzleLocation_MuzzleLocation                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_GetMuzzleEffectParticle_Particle_System_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetMuzzleRotator_Rotator_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMuzzleLocation_MuzzleLocation_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_GetMuzzleEffect_NewParam                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetBulletClass_NewParam                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_GetMuzzleEffect_NewParam_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetMuzzleLocation_MuzzleLocation_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTargetPosition_TargetPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalBullet*                  CallFunc_CreateBullet_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomFloat_Max_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomFloat_Max_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomFloat_Min_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRandomFloat_Min_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::ShootBullet(double BlurAngle, const struct FVector& Local_SocketTransform, const struct FRotator& Blur, float CallFunc_GetBlurModifierValue_ReturnValue, float CallFunc_GetShooterComponentBlurRate_ReturnValue, double CallFunc_Conv_FloatToDouble_ReturnValue, float CallFunc_GetDefaultBlurAngle_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool CallFunc_CanReload_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsEmptyMagazine_ReturnValue, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class UPalShooterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class UClass* CallFunc_GetAmmoClass_AmmoClass, bool CallFunc_CanReload_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_3, class UPalBulletCreator* CallFunc_GetBulletCreator_ReturnValue, bool CallFunc_DecrementBullet_ReturnValue, bool CallFunc_IsEmptyMagazine_ReturnValue_1, bool CallFunc_CanShoot_can, const struct FTransform& CallFunc_GeyEjectionPortTransform_Transform, bool CallFunc_Is_UseEjectionPort_isUse, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class UParticleSystem* CallFunc_GetMuzzleEffectParticle_Particle_System, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation, class UParticleSystem* CallFunc_GetMuzzleEffectParticle_Particle_System_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_GetMuzzleRotator_Rotator_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation_1, float CallFunc_GetRandomFloat_ReturnValue, float CallFunc_GetRandomFloat_ReturnValue_1, class UNiagaraSystem* CallFunc_GetMuzzleEffect_NewParam, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, class UClass* CallFunc_GetBulletClass_NewParam, class UNiagaraSystem* CallFunc_GetMuzzleEffect_NewParam_1, const struct FVector& CallFunc_GetMuzzleLocation_MuzzleLocation_2, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetTargetPosition_TargetPosition, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APalBullet* CallFunc_CreateBullet_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_GetRandomFloat_Max_ImplicitCast, float CallFunc_GetRandomFloat_Max_ImplicitCast_1, float CallFunc_GetRandomFloat_Min_ImplicitCast, float CallFunc_GetRandomFloat_Min_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "ShootBullet");

	Params::ABP_AssaultRifleBase_C_ShootBullet_Params Parms{};

	Parms.BlurAngle = BlurAngle;
	Parms.Local_SocketTransform = Local_SocketTransform;
	Parms.Blur = Blur;
	Parms.CallFunc_GetBlurModifierValue_ReturnValue = CallFunc_GetBlurModifierValue_ReturnValue;
	Parms.CallFunc_GetShooterComponentBlurRate_ReturnValue = CallFunc_GetShooterComponentBlurRate_ReturnValue;
	Parms.CallFunc_Conv_FloatToDouble_ReturnValue = CallFunc_Conv_FloatToDouble_ReturnValue;
	Parms.CallFunc_GetDefaultBlurAngle_ReturnValue = CallFunc_GetDefaultBlurAngle_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_CanReload_ReturnValue = CallFunc_CanReload_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_IsEmptyMagazine_ReturnValue = CallFunc_IsEmptyMagazine_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = CallFunc_GetOwner_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_GetAmmoClass_AmmoClass = CallFunc_GetAmmoClass_AmmoClass;
	Parms.CallFunc_CanReload_ReturnValue_1 = CallFunc_CanReload_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_3 = CallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetBulletCreator_ReturnValue = CallFunc_GetBulletCreator_ReturnValue;
	Parms.CallFunc_DecrementBullet_ReturnValue = CallFunc_DecrementBullet_ReturnValue;
	Parms.CallFunc_IsEmptyMagazine_ReturnValue_1 = CallFunc_IsEmptyMagazine_ReturnValue_1;
	Parms.CallFunc_CanShoot_can = CallFunc_CanShoot_can;
	Parms.CallFunc_GeyEjectionPortTransform_Transform = CallFunc_GeyEjectionPortTransform_Transform;
	Parms.CallFunc_Is_UseEjectionPort_isUse = CallFunc_Is_UseEjectionPort_isUse;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetMuzzleEffectParticle_Particle_System = CallFunc_GetMuzzleEffectParticle_Particle_System;
	Parms.CallFunc_GetMuzzleRotator_Rotator = CallFunc_GetMuzzleRotator_Rotator;
	Parms.CallFunc_GetMuzzleLocation_MuzzleLocation = CallFunc_GetMuzzleLocation_MuzzleLocation;
	Parms.CallFunc_GetMuzzleEffectParticle_Particle_System_1 = CallFunc_GetMuzzleEffectParticle_Particle_System_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMuzzleRotator_Rotator_1 = CallFunc_GetMuzzleRotator_Rotator_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetMuzzleLocation_MuzzleLocation_1 = CallFunc_GetMuzzleLocation_MuzzleLocation_1;
	Parms.CallFunc_GetRandomFloat_ReturnValue = CallFunc_GetRandomFloat_ReturnValue;
	Parms.CallFunc_GetRandomFloat_ReturnValue_1 = CallFunc_GetRandomFloat_ReturnValue_1;
	Parms.CallFunc_GetMuzzleEffect_NewParam = CallFunc_GetMuzzleEffect_NewParam;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_GetBulletClass_NewParam = CallFunc_GetBulletClass_NewParam;
	Parms.CallFunc_GetMuzzleEffect_NewParam_1 = CallFunc_GetMuzzleEffect_NewParam_1;
	Parms.CallFunc_GetMuzzleLocation_MuzzleLocation_2 = CallFunc_GetMuzzleLocation_MuzzleLocation_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTargetPosition_TargetPosition = CallFunc_GetTargetPosition_TargetPosition;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_CreateBullet_ReturnValue = CallFunc_CreateBullet_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_GetRandomFloat_Max_ImplicitCast = CallFunc_GetRandomFloat_Max_ImplicitCast;
	Parms.CallFunc_GetRandomFloat_Max_ImplicitCast_1 = CallFunc_GetRandomFloat_Max_ImplicitCast_1;
	Parms.CallFunc_GetRandomFloat_Min_ImplicitCast = CallFunc_GetRandomFloat_Min_ImplicitCast;
	Parms.CallFunc_GetRandomFloat_Min_ImplicitCast_1 = CallFunc_GetRandomFloat_Min_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_AssaultRifleBase_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetEquipSocketName");

	Params::ABP_AssaultRifleBase_C_GetEquipSocketName_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnStartAim
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AssaultRifleBase_C::OnStartAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnStartAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnEndAim
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AssaultRifleBase_C::OnEndAim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnEndAim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnPullTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AssaultRifleBase_C::OnPullTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnPullTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnReleaseTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_AssaultRifleBase_C::OnReleaseTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnReleaseTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnReloadStart
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_AssaultRifleBase_C::OnReloadStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnReloadStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnAttachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttachActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::OnAttachWeapon(class AActor* AttachActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnAttachWeapon");

	Params::ABP_AssaultRifleBase_C_OnAttachWeapon_Params Parms{};

	Parms.AttachActor = AttachActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.StopReloadWhenRoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionBase*              Action                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::StopReloadWhenRoll(class UPalActionBase* Action)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "StopReloadWhenRoll");

	Params::ABP_AssaultRifleBase_C_StopReloadWhenRoll_Params Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnDetachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DetachActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::OnDetachWeapon(class AActor* DetachActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnDetachWeapon");

	Params::ABP_AssaultRifleBase_C_OnDetachWeapon_Params Parms{};

	Parms.DetachActor = DetachActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.ExecuteUbergraph_BP_AssaultRifleBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetShootInterval_Time                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetInitializeInterval_Time                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_attachActor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalActionBase*              K2Node_CustomEvent_action                                        (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_ActionStepBase_C*        K2Node_DynamicCast_AsBP_Action_Step_Base                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalActionComponent*         CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_detachActor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::ExecuteUbergraph_BP_AssaultRifleBase(int32 EntryPoint, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, double CallFunc_GetShootInterval_Time, double CallFunc_GetInitializeInterval_Time, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* K2Node_Event_attachActor, class UPalActionBase* K2Node_CustomEvent_action, class UBP_ActionStepBase_C* K2Node_DynamicCast_AsBP_Action_Step_Base, bool K2Node_DynamicCast_bSuccess, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue_2, class AActor* K2Node_Event_detachActor, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "ExecuteUbergraph_BP_AssaultRifleBase");

	Params::ABP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetShootInterval_Time = CallFunc_GetShootInterval_Time;
	Parms.CallFunc_GetInitializeInterval_Time = CallFunc_GetInitializeInterval_Time;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_attachActor = K2Node_Event_attachActor;
	Parms.K2Node_CustomEvent_action = K2Node_CustomEvent_action;
	Parms.K2Node_DynamicCast_AsBP_Action_Step_Base = K2Node_DynamicCast_AsBP_Action_Step_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = CallFunc_GetComponentByClass_ReturnValue_2;
	Parms.K2Node_Event_detachActor = K2Node_Event_detachActor;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast = CallFunc_K2_SetTimerDelegate_InitialStartDelay_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


