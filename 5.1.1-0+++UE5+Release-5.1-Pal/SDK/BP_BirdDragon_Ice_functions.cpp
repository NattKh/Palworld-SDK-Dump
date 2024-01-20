#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BirdDragon_Ice.BP_BirdDragon_Ice_C
// (Actor, Pawn)

class UClass* ABP_BirdDragon_Ice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BirdDragon_Ice_C");

	return Clss;
}


// BP_BirdDragon_Ice_C BP_BirdDragon_Ice.Default__BP_BirdDragon_Ice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BirdDragon_Ice_C* ABP_BirdDragon_Ice_C::GetDefaultObj()
{
	static class ABP_BirdDragon_Ice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BirdDragon_Ice_C*>(ABP_BirdDragon_Ice_C::StaticClass()->DefaultObject);

	return Default;
}

}


