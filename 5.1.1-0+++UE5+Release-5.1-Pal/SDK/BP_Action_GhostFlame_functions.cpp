#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Action_GhostFlame.BP_Action_GhostFlame_C
// (None)

class UClass* UBP_Action_GhostFlame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Action_GhostFlame_C");

	return Clss;
}


// BP_Action_GhostFlame_C BP_Action_GhostFlame.Default__BP_Action_GhostFlame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Action_GhostFlame_C* UBP_Action_GhostFlame_C::GetDefaultObj()
{
	static class UBP_Action_GhostFlame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Action_GhostFlame_C*>(UBP_Action_GhostFlame_C::StaticClass()->DefaultObject);

	return Default;
}

}


