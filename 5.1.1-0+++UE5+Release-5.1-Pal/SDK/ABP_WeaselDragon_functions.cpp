#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_WeaselDragon.ABP_WeaselDragon_C
// (None)

class UClass* UABP_WeaselDragon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_WeaselDragon_C");

	return Clss;
}


// ABP_WeaselDragon_C ABP_WeaselDragon.Default__ABP_WeaselDragon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_WeaselDragon_C* UABP_WeaselDragon_C::GetDefaultObj()
{
	static class UABP_WeaselDragon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_WeaselDragon_C*>(UABP_WeaselDragon_C::StaticClass()->DefaultObject);

	return Default;
}

}


