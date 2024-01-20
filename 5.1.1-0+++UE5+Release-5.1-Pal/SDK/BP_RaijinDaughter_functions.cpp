#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RaijinDaughter.BP_RaijinDaughter_C
// (Actor, Pawn)

class UClass* ABP_RaijinDaughter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RaijinDaughter_C");

	return Clss;
}


// BP_RaijinDaughter_C BP_RaijinDaughter.Default__BP_RaijinDaughter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RaijinDaughter_C* ABP_RaijinDaughter_C::GetDefaultObj()
{
	static class ABP_RaijinDaughter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RaijinDaughter_C*>(ABP_RaijinDaughter_C::StaticClass()->DefaultObject);

	return Default;
}

}


