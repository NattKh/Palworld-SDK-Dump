#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObjectBaseCampModel.BP_MapObjectBaseCampModel_C
// (None)

class UClass* UBP_MapObjectBaseCampModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObjectBaseCampModel_C");

	return Clss;
}


// BP_MapObjectBaseCampModel_C BP_MapObjectBaseCampModel.Default__BP_MapObjectBaseCampModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MapObjectBaseCampModel_C* UBP_MapObjectBaseCampModel_C::GetDefaultObj()
{
	static class UBP_MapObjectBaseCampModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MapObjectBaseCampModel_C*>(UBP_MapObjectBaseCampModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


