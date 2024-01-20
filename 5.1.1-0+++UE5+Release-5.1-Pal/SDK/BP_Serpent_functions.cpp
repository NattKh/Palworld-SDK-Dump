#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Serpent.BP_Serpent_C
// (Actor, Pawn)

class UClass* ABP_Serpent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Serpent_C");

	return Clss;
}


// BP_Serpent_C BP_Serpent.Default__BP_Serpent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Serpent_C* ABP_Serpent_C::GetDefaultObj()
{
	static class ABP_Serpent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Serpent_C*>(ABP_Serpent_C::StaticClass()->DefaultObject);

	return Default;
}

}


