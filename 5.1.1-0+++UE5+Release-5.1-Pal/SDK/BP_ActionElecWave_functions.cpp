#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionElecWave.BP_ActionElecWave_C
// (None)

class UClass* UBP_ActionElecWave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionElecWave_C");

	return Clss;
}


// BP_ActionElecWave_C BP_ActionElecWave.Default__BP_ActionElecWave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionElecWave_C* UBP_ActionElecWave_C::GetDefaultObj()
{
	static class UBP_ActionElecWave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionElecWave_C*>(UBP_ActionElecWave_C::StaticClass()->DefaultObject);

	return Default;
}

}


