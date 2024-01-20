#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RepairAllWindowDispatchParameter.BP_RepairAllWindowDispatchParameter_C
// (None)

class UClass* UBP_RepairAllWindowDispatchParameter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RepairAllWindowDispatchParameter_C");

	return Clss;
}


// BP_RepairAllWindowDispatchParameter_C BP_RepairAllWindowDispatchParameter.Default__BP_RepairAllWindowDispatchParameter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RepairAllWindowDispatchParameter_C* UBP_RepairAllWindowDispatchParameter_C::GetDefaultObj()
{
	static class UBP_RepairAllWindowDispatchParameter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RepairAllWindowDispatchParameter_C*>(UBP_RepairAllWindowDispatchParameter_C::StaticClass()->DefaultObject);

	return Default;
}

}


