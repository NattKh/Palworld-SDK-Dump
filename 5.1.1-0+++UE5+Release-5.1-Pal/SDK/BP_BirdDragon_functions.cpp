#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BirdDragon.BP_BirdDragon_C
// (Actor, Pawn)

class UClass* ABP_BirdDragon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BirdDragon_C");

	return Clss;
}


// BP_BirdDragon_C BP_BirdDragon.Default__BP_BirdDragon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BirdDragon_C* ABP_BirdDragon_C::GetDefaultObj()
{
	static class ABP_BirdDragon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BirdDragon_C*>(ABP_BirdDragon_C::StaticClass()->DefaultObject);

	return Default;
}

}


