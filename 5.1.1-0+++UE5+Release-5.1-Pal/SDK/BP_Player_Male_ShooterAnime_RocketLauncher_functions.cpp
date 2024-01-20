#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Player_Male_ShooterAnime_RocketLauncher.BP_Player_Male_ShooterAnime_RocketLauncher_C
// (None)

class UClass* UBP_Player_Male_ShooterAnime_RocketLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Player_Male_ShooterAnime_RocketLauncher_C");

	return Clss;
}


// BP_Player_Male_ShooterAnime_RocketLauncher_C BP_Player_Male_ShooterAnime_RocketLauncher.Default__BP_Player_Male_ShooterAnime_RocketLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Player_Male_ShooterAnime_RocketLauncher_C* UBP_Player_Male_ShooterAnime_RocketLauncher_C::GetDefaultObj()
{
	static class UBP_Player_Male_ShooterAnime_RocketLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Player_Male_ShooterAnime_RocketLauncher_C*>(UBP_Player_Male_ShooterAnime_RocketLauncher_C::StaticClass()->DefaultObject);

	return Default;
}

}


