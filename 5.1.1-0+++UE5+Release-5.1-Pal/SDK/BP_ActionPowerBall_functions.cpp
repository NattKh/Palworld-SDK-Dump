#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionPowerBall.BP_ActionPowerBall_C
// (None)

class UClass* UBP_ActionPowerBall_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionPowerBall_C");

	return Clss;
}


// BP_ActionPowerBall_C BP_ActionPowerBall.Default__BP_ActionPowerBall_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionPowerBall_C* UBP_ActionPowerBall_C::GetDefaultObj()
{
	static class UBP_ActionPowerBall_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionPowerBall_C*>(UBP_ActionPowerBall_C::StaticClass()->DefaultObject);

	return Default;
}

}


