#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_BirdDragon.ABP_BirdDragon_C
// (None)

class UClass* UABP_BirdDragon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_BirdDragon_C");

	return Clss;
}


// ABP_BirdDragon_C ABP_BirdDragon.Default__ABP_BirdDragon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_BirdDragon_C* UABP_BirdDragon_C::GetDefaultObj()
{
	static class UABP_BirdDragon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_BirdDragon_C*>(UABP_BirdDragon_C::StaticClass()->DefaultObject);

	return Default;
}

}


