#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObjectRankUpCharacterModel.BP_MapObjectRankUpCharacterModel_C
// (None)

class UClass* UBP_MapObjectRankUpCharacterModel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObjectRankUpCharacterModel_C");

	return Clss;
}


// BP_MapObjectRankUpCharacterModel_C BP_MapObjectRankUpCharacterModel.Default__BP_MapObjectRankUpCharacterModel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_MapObjectRankUpCharacterModel_C* UBP_MapObjectRankUpCharacterModel_C::GetDefaultObj()
{
	static class UBP_MapObjectRankUpCharacterModel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_MapObjectRankUpCharacterModel_C*>(UBP_MapObjectRankUpCharacterModel_C::StaticClass()->DefaultObject);

	return Default;
}

}


