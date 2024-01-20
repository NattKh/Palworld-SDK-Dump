#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SphereLauncher_OneShot.BP_SphereLauncher_OneShot_C
// (Actor)

class UClass* ABP_SphereLauncher_OneShot_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SphereLauncher_OneShot_C");

	return Clss;
}


// BP_SphereLauncher_OneShot_C BP_SphereLauncher_OneShot.Default__BP_SphereLauncher_OneShot_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SphereLauncher_OneShot_C* ABP_SphereLauncher_OneShot_C::GetDefaultObj()
{
	static class ABP_SphereLauncher_OneShot_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SphereLauncher_OneShot_C*>(ABP_SphereLauncher_OneShot_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SphereLauncher_OneShot.BP_SphereLauncher_OneShot_C.GetShootTransformList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             BaseAnglePitch                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BaseAngleYaw                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             BlurAngle                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          ShootTransformList                                               (Parm, OutParm)
// struct FTransform                  CallFunc_GetMuzzleTransform_Transform                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          K2Node_MakeArray_Array                                           (ReferenceParm)

void ABP_SphereLauncher_OneShot_C::GetShootTransformList(double BaseAnglePitch, double BaseAngleYaw, double BlurAngle, TArray<struct FTransform>* ShootTransformList, const struct FTransform& CallFunc_GetMuzzleTransform_Transform, TArray<struct FTransform>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SphereLauncher_OneShot_C", "GetShootTransformList");

	Params::ABP_SphereLauncher_OneShot_C_GetShootTransformList_Params Parms{};

	Parms.BaseAnglePitch = BaseAnglePitch;
	Parms.BaseAngleYaw = BaseAngleYaw;
	Parms.BlurAngle = BlurAngle;
	Parms.CallFunc_GetMuzzleTransform_Transform = CallFunc_GetMuzzleTransform_Transform;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (ShootTransformList != nullptr)
		*ShootTransformList = std::move(Parms.ShootTransformList);

}

}


