#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Serpent.ABP_Serpent_C
// (None)

class UClass* UABP_Serpent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Serpent_C");

	return Clss;
}


// ABP_Serpent_C ABP_Serpent.Default__ABP_Serpent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Serpent_C* UABP_Serpent_C::GetDefaultObj()
{
	static class UABP_Serpent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Serpent_C*>(UABP_Serpent_C::StaticClass()->DefaultObject);

	return Default;
}

}


