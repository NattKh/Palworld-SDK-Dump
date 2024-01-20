#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Ammo_Rocket.BP_Ammo_Rocket_C
// (Actor)

class UClass* ABP_Ammo_Rocket_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Ammo_Rocket_C");

	return Clss;
}


// BP_Ammo_Rocket_C BP_Ammo_Rocket.Default__BP_Ammo_Rocket_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Ammo_Rocket_C* ABP_Ammo_Rocket_C::GetDefaultObj()
{
	static class ABP_Ammo_Rocket_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Ammo_Rocket_C*>(ABP_Ammo_Rocket_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Ammo_Rocket.BP_Ammo_Rocket_C.SetTranformForReload
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  AmmoReloadingTransform                                           (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ammo_Rocket_C::SetTranformForReload(struct FTransform* AmmoReloadingTransform, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ammo_Rocket_C", "SetTranformForReload");

	Params::ABP_Ammo_Rocket_C_SetTranformForReload_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoReloadingTransform != nullptr)
		*AmmoReloadingTransform = std::move(Parms.AmmoReloadingTransform);

}


// Function BP_Ammo_Rocket.BP_Ammo_Rocket_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_SetTranformForReload_AmmoReloadingTransform             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ammo_Rocket_C::UserConstructionScript(const struct FTransform& CallFunc_SetTranformForReload_AmmoReloadingTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ammo_Rocket_C", "UserConstructionScript");

	Params::ABP_Ammo_Rocket_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_SetTranformForReload_AmmoReloadingTransform = CallFunc_SetTranformForReload_AmmoReloadingTransform;

	UObject::ProcessEvent(Func, &Parms);

}

}


