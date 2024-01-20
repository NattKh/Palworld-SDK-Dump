#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObject_PickupItem_MushRoom.BP_MapObject_PickupItem_MushRoom_C
// (Actor)

class UClass* ABP_MapObject_PickupItem_MushRoom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObject_PickupItem_MushRoom_C");

	return Clss;
}


// BP_MapObject_PickupItem_MushRoom_C BP_MapObject_PickupItem_MushRoom.Default__BP_MapObject_PickupItem_MushRoom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObject_PickupItem_MushRoom_C* ABP_MapObject_PickupItem_MushRoom_C::GetDefaultObj()
{
	static class ABP_MapObject_PickupItem_MushRoom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObject_PickupItem_MushRoom_C*>(ABP_MapObject_PickupItem_MushRoom_C::StaticClass()->DefaultObject);

	return Default;
}

}


