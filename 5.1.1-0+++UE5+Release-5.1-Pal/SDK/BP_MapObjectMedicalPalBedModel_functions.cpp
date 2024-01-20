#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObjectMedicalPalBedModel.BP_MapObjectMedicalPalBedModel_C
// (None)

class UClass* UBP_MapObjectMedicalPalBedModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObjectMedicalPalBedModel_C");

	return Clss;
}


// BP_MapObjectMedicalPalBedModel_C BP_MapObjectMedicalPalBedModel.Default__BP_MapObjectMedicalPalBedModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MapObjectMedicalPalBedModel_C* UBP_MapObjectMedicalPalBedModel_C::GetDefaultObj()
{
	static class UBP_MapObjectMedicalPalBedModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MapObjectMedicalPalBedModel_C*>(UBP_MapObjectMedicalPalBedModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


