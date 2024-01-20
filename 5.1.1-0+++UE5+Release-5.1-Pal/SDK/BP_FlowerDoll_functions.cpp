#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_FlowerDoll.BP_FlowerDoll_C
// (Actor, Pawn)

class UClass* ABP_FlowerDoll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FlowerDoll_C");

	return Clss;
}


// BP_FlowerDoll_C BP_FlowerDoll.Default__BP_FlowerDoll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FlowerDoll_C* ABP_FlowerDoll_C::GetDefaultObj()
{
	static class ABP_FlowerDoll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FlowerDoll_C*>(ABP_FlowerDoll_C::StaticClass()->DefaultObject);

	return Default;
}

}


