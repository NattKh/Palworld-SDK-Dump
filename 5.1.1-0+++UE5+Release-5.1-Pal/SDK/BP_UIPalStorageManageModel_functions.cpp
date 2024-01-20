#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIPalStorageManageModel.BP_UIPalStorageManageModel_C
// (None)

class UClass* UBP_UIPalStorageManageModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIPalStorageManageModel_C");

	return Clss;
}


// BP_UIPalStorageManageModel_C BP_UIPalStorageManageModel.Default__BP_UIPalStorageManageModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIPalStorageManageModel_C* UBP_UIPalStorageManageModel_C::GetDefaultObj()
{
	static class UBP_UIPalStorageManageModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIPalStorageManageModel_C*>(UBP_UIPalStorageManageModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


