#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIPalStorageManageRightModel.BP_UIPalStorageManageRightModel_C
// (None)

class UClass* UBP_UIPalStorageManageRightModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIPalStorageManageRightModel_C");

	return Clss;
}


// BP_UIPalStorageManageRightModel_C BP_UIPalStorageManageRightModel.Default__BP_UIPalStorageManageRightModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIPalStorageManageRightModel_C* UBP_UIPalStorageManageRightModel_C::GetDefaultObj()
{
	static class UBP_UIPalStorageManageRightModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIPalStorageManageRightModel_C*>(UBP_UIPalStorageManageRightModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


