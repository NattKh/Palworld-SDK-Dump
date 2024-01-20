#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionDragonWave.BP_ActionDragonWave_C
// (None)

class UClass* UBP_ActionDragonWave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionDragonWave_C");

	return Clss;
}


// BP_ActionDragonWave_C BP_ActionDragonWave.Default__BP_ActionDragonWave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionDragonWave_C* UBP_ActionDragonWave_C::GetDefaultObj()
{
	static class UBP_ActionDragonWave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionDragonWave_C*>(UBP_ActionDragonWave_C::StaticClass()->DefaultObject);

	return Default;
}

}


