#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Alpaca.BP_Alpaca_C
// (Actor, Pawn)

class UClass* ABP_Alpaca_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Alpaca_C");

	return Clss;
}


// BP_Alpaca_C BP_Alpaca.Default__BP_Alpaca_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Alpaca_C* ABP_Alpaca_C::GetDefaultObj()
{
	static class ABP_Alpaca_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Alpaca_C*>(ABP_Alpaca_C::StaticClass()->DefaultObject);

	return Default;
}

}


