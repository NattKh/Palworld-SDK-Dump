#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Kitsunebi.ABP_Kitsunebi_C
// (None)

class UClass* UABP_Kitsunebi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Kitsunebi_C");

	return Clss;
}


// ABP_Kitsunebi_C ABP_Kitsunebi.Default__ABP_Kitsunebi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Kitsunebi_C* UABP_Kitsunebi_C::GetDefaultObj()
{
	static class UABP_Kitsunebi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Kitsunebi_C*>(UABP_Kitsunebi_C::StaticClass()->DefaultObject);

	return Default;
}

}


