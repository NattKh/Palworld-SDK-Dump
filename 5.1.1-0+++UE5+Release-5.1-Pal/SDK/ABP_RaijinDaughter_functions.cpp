#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_RaijinDaughter.ABP_RaijinDaughter_C
// (None)

class UClass* UABP_RaijinDaughter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_RaijinDaughter_C");

	return Clss;
}


// ABP_RaijinDaughter_C ABP_RaijinDaughter.Default__ABP_RaijinDaughter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_RaijinDaughter_C* UABP_RaijinDaughter_C::GetDefaultObj()
{
	static class UABP_RaijinDaughter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_RaijinDaughter_C*>(UABP_RaijinDaughter_C::StaticClass()->DefaultObject);

	return Default;
}

}


