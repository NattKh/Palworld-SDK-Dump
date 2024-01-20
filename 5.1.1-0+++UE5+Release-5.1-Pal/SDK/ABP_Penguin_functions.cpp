#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Penguin.ABP_Penguin_C
// (None)

class UClass* UABP_Penguin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Penguin_C");

	return Clss;
}


// ABP_Penguin_C ABP_Penguin.Default__ABP_Penguin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Penguin_C* UABP_Penguin_C::GetDefaultObj()
{
	static class UABP_Penguin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Penguin_C*>(UABP_Penguin_C::StaticClass()->DefaultObject);

	return Default;
}

}


