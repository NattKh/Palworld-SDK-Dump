#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Deer.ABP_Deer_C
// (None)

class UClass* UABP_Deer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Deer_C");

	return Clss;
}


// ABP_Deer_C ABP_Deer.Default__ABP_Deer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Deer_C* UABP_Deer_C::GetDefaultObj()
{
	static class UABP_Deer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Deer_C*>(UABP_Deer_C::StaticClass()->DefaultObject);

	return Default;
}

}


