#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSphere_Master.BP_PalSphere_Master_C
// (Actor)

class UClass* ABP_PalSphere_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSphere_Master_C");

	return Clss;
}


// BP_PalSphere_Master_C BP_PalSphere_Master.Default__BP_PalSphere_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalSphere_Master_C* ABP_PalSphere_Master_C::GetDefaultObj()
{
	static class ABP_PalSphere_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalSphere_Master_C*>(ABP_PalSphere_Master_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalSphere_Master.BP_PalSphere_Master_C.GetThrowObjectClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      ThrowObject                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Master_C::GetThrowObjectClass(class UClass** ThrowObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSphere_Master_C", "GetThrowObjectClass");

	Params::ABP_PalSphere_Master_C_GetThrowObjectClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThrowObject != nullptr)
		*ThrowObject = Parms.ThrowObject;

}

}


