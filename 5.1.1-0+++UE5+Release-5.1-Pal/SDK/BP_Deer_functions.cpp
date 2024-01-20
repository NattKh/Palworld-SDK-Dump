#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Deer.BP_Deer_C
// (Actor, Pawn)

class UClass* ABP_Deer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Deer_C");

	return Clss;
}


// BP_Deer_C BP_Deer.Default__BP_Deer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Deer_C* ABP_Deer_C::GetDefaultObj()
{
	static class ABP_Deer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Deer_C*>(ABP_Deer_C::StaticClass()->DefaultObject);

	return Default;
}

}


