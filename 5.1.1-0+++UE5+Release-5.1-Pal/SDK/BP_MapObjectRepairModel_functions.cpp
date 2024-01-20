#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObjectRepairModel.BP_MapObjectRepairModel_C
// (None)

class UClass* UBP_MapObjectRepairModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObjectRepairModel_C");

	return Clss;
}


// BP_MapObjectRepairModel_C BP_MapObjectRepairModel.Default__BP_MapObjectRepairModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MapObjectRepairModel_C* UBP_MapObjectRepairModel_C::GetDefaultObj()
{
	static class UBP_MapObjectRepairModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MapObjectRepairModel_C*>(UBP_MapObjectRepairModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


