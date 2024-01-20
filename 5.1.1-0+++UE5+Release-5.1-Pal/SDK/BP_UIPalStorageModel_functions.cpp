#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIPalStorageModel.BP_UIPalStorageModel_C
// (None)

class UClass* UBP_UIPalStorageModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIPalStorageModel_C");

	return Clss;
}


// BP_UIPalStorageModel_C BP_UIPalStorageModel.Default__BP_UIPalStorageModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIPalStorageModel_C* UBP_UIPalStorageModel_C::GetDefaultObj()
{
	static class UBP_UIPalStorageModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIPalStorageModel_C*>(UBP_UIPalStorageModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


