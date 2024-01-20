#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_Stump.BP_BuildObject_Stump_C
// (Actor)

class UClass* ABP_BuildObject_Stump_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_Stump_C");

	return Clss;
}


// BP_BuildObject_Stump_C BP_BuildObject_Stump.Default__BP_BuildObject_Stump_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_Stump_C* ABP_BuildObject_Stump_C::GetDefaultObj()
{
	static class ABP_BuildObject_Stump_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_Stump_C*>(ABP_BuildObject_Stump_C::StaticClass()->DefaultObject);

	return Default;
}

}


