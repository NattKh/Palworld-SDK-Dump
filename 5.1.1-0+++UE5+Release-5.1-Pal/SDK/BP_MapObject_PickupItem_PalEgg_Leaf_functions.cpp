#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObject_PickupItem_PalEgg_Leaf.BP_MapObject_PickupItem_PalEgg_Leaf_C
// (Actor)

class UClass* ABP_MapObject_PickupItem_PalEgg_Leaf_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObject_PickupItem_PalEgg_Leaf_C");

	return Clss;
}


// BP_MapObject_PickupItem_PalEgg_Leaf_C BP_MapObject_PickupItem_PalEgg_Leaf.Default__BP_MapObject_PickupItem_PalEgg_Leaf_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObject_PickupItem_PalEgg_Leaf_C* ABP_MapObject_PickupItem_PalEgg_Leaf_C::GetDefaultObj()
{
	static class ABP_MapObject_PickupItem_PalEgg_Leaf_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObject_PickupItem_PalEgg_Leaf_C*>(ABP_MapObject_PickupItem_PalEgg_Leaf_C::StaticClass()->DefaultObject);

	return Default;
}

}


