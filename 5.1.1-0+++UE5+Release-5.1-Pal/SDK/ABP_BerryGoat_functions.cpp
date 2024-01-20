#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_BerryGoat.ABP_BerryGoat_C
// (None)

class UClass* UABP_BerryGoat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_BerryGoat_C");

	return Clss;
}


// ABP_BerryGoat_C ABP_BerryGoat.Default__ABP_BerryGoat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_BerryGoat_C* UABP_BerryGoat_C::GetDefaultObj()
{
	static class UABP_BerryGoat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_BerryGoat_C*>(UABP_BerryGoat_C::StaticClass()->DefaultObject);

	return Default;
}

}


