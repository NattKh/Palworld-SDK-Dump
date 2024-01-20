#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GrassMammoth.BP_GrassMammoth_C
// (Actor, Pawn)

class UClass* ABP_GrassMammoth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GrassMammoth_C");

	return Clss;
}


// BP_GrassMammoth_C BP_GrassMammoth.Default__BP_GrassMammoth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GrassMammoth_C* ABP_GrassMammoth_C::GetDefaultObj()
{
	static class ABP_GrassMammoth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GrassMammoth_C*>(ABP_GrassMammoth_C::StaticClass()->DefaultObject);

	return Default;
}

}


