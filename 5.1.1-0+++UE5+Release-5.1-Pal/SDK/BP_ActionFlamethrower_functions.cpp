#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ActionFlamethrower.BP_ActionFlamethrower_C
// (None)

class UClass* UBP_ActionFlamethrower_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ActionFlamethrower_C");

	return Clss;
}


// BP_ActionFlamethrower_C BP_ActionFlamethrower.Default__BP_ActionFlamethrower_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ActionFlamethrower_C* UBP_ActionFlamethrower_C::GetDefaultObj()
{
	static class UBP_ActionFlamethrower_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ActionFlamethrower_C*>(UBP_ActionFlamethrower_C::StaticClass()->DefaultObject);

	return Default;
}

}


