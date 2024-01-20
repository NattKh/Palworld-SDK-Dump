#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass ABP_FlowerDoll.ABP_FlowerDoll_C
// (None)

class UClass* UABP_FlowerDoll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ABP_FlowerDoll_C");

	return Clss;
}


// ABP_FlowerDoll_C ABP_FlowerDoll.Default__ABP_FlowerDoll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UABP_FlowerDoll_C* UABP_FlowerDoll_C::GetDefaultObj()
{
	static class UABP_FlowerDoll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UABP_FlowerDoll_C*>(UABP_FlowerDoll_C::StaticClass()->DefaultObject);

	return Default;
}

}


