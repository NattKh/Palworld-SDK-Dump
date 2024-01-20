#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_GrassMammoth.ABP_GrassMammoth_C
// (None)

class UClass* UABP_GrassMammoth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_GrassMammoth_C");

	return Clss;
}


// ABP_GrassMammoth_C ABP_GrassMammoth.Default__ABP_GrassMammoth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_GrassMammoth_C* UABP_GrassMammoth_C::GetDefaultObj()
{
	static class UABP_GrassMammoth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_GrassMammoth_C*>(UABP_GrassMammoth_C::StaticClass()->DefaultObject);

	return Default;
}

}


