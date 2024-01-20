#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionDragonBreath.BP_ActionDragonBreath_C
// (None)

class UClass* UBP_ActionDragonBreath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionDragonBreath_C");

	return Clss;
}


// BP_ActionDragonBreath_C BP_ActionDragonBreath.Default__BP_ActionDragonBreath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionDragonBreath_C* UBP_ActionDragonBreath_C::GetDefaultObj()
{
	static class UBP_ActionDragonBreath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionDragonBreath_C*>(UBP_ActionDragonBreath_C::StaticClass()->DefaultObject);

	return Default;
}

}


