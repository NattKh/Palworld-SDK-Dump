#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSphere_ThrowObject_Mega.BP_PalSphere_ThrowObject_Mega_C
// (Actor)

class UClass* ABP_PalSphere_ThrowObject_Mega_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSphere_ThrowObject_Mega_C");

	return Clss;
}


// BP_PalSphere_ThrowObject_Mega_C BP_PalSphere_ThrowObject_Mega.Default__BP_PalSphere_ThrowObject_Mega_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalSphere_ThrowObject_Mega_C* ABP_PalSphere_ThrowObject_Mega_C::GetDefaultObj()
{
	static class ABP_PalSphere_ThrowObject_Mega_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalSphere_ThrowObject_Mega_C*>(ABP_PalSphere_ThrowObject_Mega_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalSphere_ThrowObject_Mega.BP_PalSphere_ThrowObject_Mega_C.GetBodyClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      bodyClass                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_ThrowObject_Mega_C::GetBodyClass(class UClass** bodyClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSphere_ThrowObject_Mega_C", "GetBodyClass");

	Params::ABP_PalSphere_ThrowObject_Mega_C_GetBodyClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bodyClass != nullptr)
		*bodyClass = Parms.bodyClass;

}

}


