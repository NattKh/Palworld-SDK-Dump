#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CoopParam_Cover.BP_CoopParam_Cover_C
// (None)

class UClass* UBP_CoopParam_Cover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CoopParam_Cover_C");

	return Clss;
}


// BP_CoopParam_Cover_C BP_CoopParam_Cover.Default__BP_CoopParam_Cover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CoopParam_Cover_C* UBP_CoopParam_Cover_C::GetDefaultObj()
{
	static class UBP_CoopParam_Cover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CoopParam_Cover_C*>(UBP_CoopParam_Cover_C::StaticClass()->DefaultObject);

	return Default;
}

}


