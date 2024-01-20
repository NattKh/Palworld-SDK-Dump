#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThrowWeapon_FragGrenade_Fire.BP_ThrowWeapon_FragGrenade_Fire_C
// (Actor)

class UClass* ABP_ThrowWeapon_FragGrenade_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThrowWeapon_FragGrenade_Fire_C");

	return Clss;
}


// BP_ThrowWeapon_FragGrenade_Fire_C BP_ThrowWeapon_FragGrenade_Fire.Default__BP_ThrowWeapon_FragGrenade_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThrowWeapon_FragGrenade_Fire_C* ABP_ThrowWeapon_FragGrenade_Fire_C::GetDefaultObj()
{
	static class ABP_ThrowWeapon_FragGrenade_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThrowWeapon_FragGrenade_Fire_C*>(ABP_ThrowWeapon_FragGrenade_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThrowWeapon_FragGrenade_Fire.BP_ThrowWeapon_FragGrenade_Fire_C.GetThrowObjectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ThrowObject                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowWeapon_FragGrenade_Fire_C::GetThrowObjectClass(class UClass** ThrowObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowWeapon_FragGrenade_Fire_C", "GetThrowObjectClass");

	Params::ABP_ThrowWeapon_FragGrenade_Fire_C_GetThrowObjectClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThrowObject != nullptr)
		*ThrowObject = Parms.ThrowObject;

}

}


