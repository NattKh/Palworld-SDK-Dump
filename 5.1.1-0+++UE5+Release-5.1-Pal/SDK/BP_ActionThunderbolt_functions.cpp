#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionThunderbolt.BP_ActionThunderbolt_C
// (None)

class UClass* UBP_ActionThunderbolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionThunderbolt_C");

	return Clss;
}


// BP_ActionThunderbolt_C BP_ActionThunderbolt.Default__BP_ActionThunderbolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionThunderbolt_C* UBP_ActionThunderbolt_C::GetDefaultObj()
{
	static class UBP_ActionThunderbolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionThunderbolt_C*>(UBP_ActionThunderbolt_C::StaticClass()->DefaultObject);

	return Default;
}

}


