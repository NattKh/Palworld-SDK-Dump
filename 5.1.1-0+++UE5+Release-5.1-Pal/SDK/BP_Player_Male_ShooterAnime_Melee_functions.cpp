#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Player_Male_ShooterAnime_Melee.BP_Player_Male_ShooterAnime_Melee_C
// (None)

class UClass* UBP_Player_Male_ShooterAnime_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Player_Male_ShooterAnime_Melee_C");

	return Clss;
}


// BP_Player_Male_ShooterAnime_Melee_C BP_Player_Male_ShooterAnime_Melee.Default__BP_Player_Male_ShooterAnime_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Player_Male_ShooterAnime_Melee_C* UBP_Player_Male_ShooterAnime_Melee_C::GetDefaultObj()
{
	static class UBP_Player_Male_ShooterAnime_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Player_Male_ShooterAnime_Melee_C*>(UBP_Player_Male_ShooterAnime_Melee_C::StaticClass()->DefaultObject);

	return Default;
}

}


