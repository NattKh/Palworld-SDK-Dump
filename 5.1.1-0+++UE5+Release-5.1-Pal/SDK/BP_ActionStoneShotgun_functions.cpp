#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionStoneShotgun.BP_ActionStoneShotgun_C
// (None)

class UClass* UBP_ActionStoneShotgun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionStoneShotgun_C");

	return Clss;
}


// BP_ActionStoneShotgun_C BP_ActionStoneShotgun.Default__BP_ActionStoneShotgun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionStoneShotgun_C* UBP_ActionStoneShotgun_C::GetDefaultObj()
{
	static class UBP_ActionStoneShotgun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionStoneShotgun_C*>(UBP_ActionStoneShotgun_C::StaticClass()->DefaultObject);

	return Default;
}

}


