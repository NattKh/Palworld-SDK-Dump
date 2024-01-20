#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Baphomet.BP_Baphomet_C
// (Actor, Pawn)

class UClass* ABP_Baphomet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Baphomet_C");

	return Clss;
}


// BP_Baphomet_C BP_Baphomet.Default__BP_Baphomet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Baphomet_C* ABP_Baphomet_C::GetDefaultObj()
{
	static class ABP_Baphomet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Baphomet_C*>(ABP_Baphomet_C::StaticClass()->DefaultObject);

	return Default;
}

}


