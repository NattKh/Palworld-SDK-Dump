#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_ElecCat.ABP_ElecCat_C
// (None)

class UClass* UABP_ElecCat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_ElecCat_C");

	return Clss;
}


// ABP_ElecCat_C ABP_ElecCat.Default__ABP_ElecCat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_ElecCat_C* UABP_ElecCat_C::GetDefaultObj()
{
	static class UABP_ElecCat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_ElecCat_C*>(UABP_ElecCat_C::StaticClass()->DefaultObject);

	return Default;
}

}


