#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionThreeThunder.BP_ActionThreeThunder_C
// (None)

class UClass* UBP_ActionThreeThunder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionThreeThunder_C");

	return Clss;
}


// BP_ActionThreeThunder_C BP_ActionThreeThunder.Default__BP_ActionThreeThunder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionThreeThunder_C* UBP_ActionThreeThunder_C::GetDefaultObj()
{
	static class UBP_ActionThreeThunder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionThreeThunder_C*>(UBP_ActionThreeThunder_C::StaticClass()->DefaultObject);

	return Default;
}

}


