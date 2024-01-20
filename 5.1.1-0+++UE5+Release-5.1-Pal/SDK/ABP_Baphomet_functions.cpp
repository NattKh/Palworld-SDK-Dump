#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Baphomet.ABP_Baphomet_C
// (None)

class UClass* UABP_Baphomet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Baphomet_C");

	return Clss;
}


// ABP_Baphomet_C ABP_Baphomet.Default__ABP_Baphomet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Baphomet_C* UABP_Baphomet_C::GetDefaultObj()
{
	static class UABP_Baphomet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Baphomet_C*>(UABP_Baphomet_C::StaticClass()->DefaultObject);

	return Default;
}

}


