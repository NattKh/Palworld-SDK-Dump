#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSphere_Body_Giga.BP_PalSphere_Body_Giga_C
// (Actor)

class UClass* ABP_PalSphere_Body_Giga_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSphere_Body_Giga_C");

	return Clss;
}


// BP_PalSphere_Body_Giga_C BP_PalSphere_Body_Giga.Default__BP_PalSphere_Body_Giga_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalSphere_Body_Giga_C* ABP_PalSphere_Body_Giga_C::GetDefaultObj()
{
	static class ABP_PalSphere_Body_Giga_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalSphere_Body_Giga_C*>(ABP_PalSphere_Body_Giga_C::StaticClass()->DefaultObject);

	return Default;
}

}


