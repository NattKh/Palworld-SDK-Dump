#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_FlourMill.BP_BuildObject_FlourMill_C
// (Actor)

class UClass* ABP_BuildObject_FlourMill_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_FlourMill_C");

	return Clss;
}


// BP_BuildObject_FlourMill_C BP_BuildObject_FlourMill.Default__BP_BuildObject_FlourMill_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_FlourMill_C* ABP_BuildObject_FlourMill_C::GetDefaultObj()
{
	static class ABP_BuildObject_FlourMill_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_FlourMill_C*>(ABP_BuildObject_FlourMill_C::StaticClass()->DefaultObject);

	return Default;
}

}


