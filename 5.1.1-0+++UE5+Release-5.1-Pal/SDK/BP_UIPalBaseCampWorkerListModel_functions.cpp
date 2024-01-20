#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_UIPalBaseCampWorkerListModel.BP_UIPalBaseCampWorkerListModel_C
// (None)

class UClass* UBP_UIPalBaseCampWorkerListModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_UIPalBaseCampWorkerListModel_C");

	return Clss;
}


// BP_UIPalBaseCampWorkerListModel_C BP_UIPalBaseCampWorkerListModel.Default__BP_UIPalBaseCampWorkerListModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_UIPalBaseCampWorkerListModel_C* UBP_UIPalBaseCampWorkerListModel_C::GetDefaultObj()
{
	static class UBP_UIPalBaseCampWorkerListModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_UIPalBaseCampWorkerListModel_C*>(UBP_UIPalBaseCampWorkerListModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


