#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_Alpaca.ABP_Alpaca_C
// (None)

class UClass* UABP_Alpaca_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_Alpaca_C");

	return Clss;
}


// ABP_Alpaca_C ABP_Alpaca.Default__ABP_Alpaca_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_Alpaca_C* UABP_Alpaca_C::GetDefaultObj()
{
	static class UABP_Alpaca_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_Alpaca_C*>(UABP_Alpaca_C::StaticClass()->DefaultObject);

	return Default;
}

}


