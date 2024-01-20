#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_Stone_Roof.BP_BuildObject_Stone_Roof_C
// (Actor)

class UClass* ABP_BuildObject_Stone_Roof_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_Stone_Roof_C");

	return Clss;
}


// BP_BuildObject_Stone_Roof_C BP_BuildObject_Stone_Roof.Default__BP_BuildObject_Stone_Roof_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_Stone_Roof_C* ABP_BuildObject_Stone_Roof_C::GetDefaultObj()
{
	static class ABP_BuildObject_Stone_Roof_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_Stone_Roof_C*>(ABP_BuildObject_Stone_Roof_C::StaticClass()->DefaultObject);

	return Default;
}

}


