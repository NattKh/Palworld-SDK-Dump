#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ThrowObject_FragGrenade_Fire.BP_ThrowObject_FragGrenade_Fire_C
// (Actor)

class UClass* ABP_ThrowObject_FragGrenade_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ThrowObject_FragGrenade_Fire_C");

	return Clss;
}


// BP_ThrowObject_FragGrenade_Fire_C BP_ThrowObject_FragGrenade_Fire.Default__BP_ThrowObject_FragGrenade_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ThrowObject_FragGrenade_Fire_C* ABP_ThrowObject_FragGrenade_Fire_C::GetDefaultObj()
{
	static class ABP_ThrowObject_FragGrenade_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ThrowObject_FragGrenade_Fire_C*>(ABP_ThrowObject_FragGrenade_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ThrowObject_FragGrenade_Fire.BP_ThrowObject_FragGrenade_Fire_C.GetExplosionClass
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ExClass                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_ThrowObject_FragGrenade_Fire_C::GetExplosionClass(class UClass** ExClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ThrowObject_FragGrenade_Fire_C", "GetExplosionClass");

	Params::ABP_ThrowObject_FragGrenade_Fire_C_GetExplosionClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ExClass != nullptr)
		*ExClass = Parms.ExClass;

}

}


