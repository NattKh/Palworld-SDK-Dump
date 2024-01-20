#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Boar.ABP_Boar_C
// (None)

class UClass* UABP_Boar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Boar_C");

	return Clss;
}


// ABP_Boar_C ABP_Boar.Default__ABP_Boar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Boar_C* UABP_Boar_C::GetDefaultObj()
{
	static class UABP_Boar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Boar_C*>(UABP_Boar_C::StaticClass()->DefaultObject);

	return Default;
}

}


