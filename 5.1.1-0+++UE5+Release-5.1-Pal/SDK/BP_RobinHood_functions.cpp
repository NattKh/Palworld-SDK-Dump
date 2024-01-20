#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RobinHood.BP_RobinHood_C
// (Actor, Pawn)

class UClass* ABP_RobinHood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RobinHood_C");

	return Clss;
}


// BP_RobinHood_C BP_RobinHood.Default__BP_RobinHood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RobinHood_C* ABP_RobinHood_C::GetDefaultObj()
{
	static class ABP_RobinHood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RobinHood_C*>(ABP_RobinHood_C::StaticClass()->DefaultObject);

	return Default;
}

}


