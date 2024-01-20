#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Boar.BP_Boar_C
// (Actor, Pawn)

class UClass* ABP_Boar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Boar_C");

	return Clss;
}


// BP_Boar_C BP_Boar.Default__BP_Boar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Boar_C* ABP_Boar_C::GetDefaultObj()
{
	static class ABP_Boar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Boar_C*>(ABP_Boar_C::StaticClass()->DefaultObject);

	return Default;
}

}


