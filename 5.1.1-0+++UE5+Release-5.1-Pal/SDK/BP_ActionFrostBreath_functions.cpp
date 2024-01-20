#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionFrostBreath.BP_ActionFrostBreath_C
// (None)

class UClass* UBP_ActionFrostBreath_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionFrostBreath_C");

	return Clss;
}


// BP_ActionFrostBreath_C BP_ActionFrostBreath.Default__BP_ActionFrostBreath_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionFrostBreath_C* UBP_ActionFrostBreath_C::GetDefaultObj()
{
	static class UBP_ActionFrostBreath_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionFrostBreath_C*>(UBP_ActionFrostBreath_C::StaticClass()->DefaultObject);

	return Default;
}

}


