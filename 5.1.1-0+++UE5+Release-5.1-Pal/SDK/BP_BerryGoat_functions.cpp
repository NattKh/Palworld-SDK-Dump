#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BerryGoat.BP_BerryGoat_C
// (Actor, Pawn)

class UClass* ABP_BerryGoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BerryGoat_C");

	return Clss;
}


// BP_BerryGoat_C BP_BerryGoat.Default__BP_BerryGoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BerryGoat_C* ABP_BerryGoat_C::GetDefaultObj()
{
	static class ABP_BerryGoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BerryGoat_C*>(ABP_BerryGoat_C::StaticClass()->DefaultObject);

	return Default;
}

}


