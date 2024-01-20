#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CharacterScrollListBlock.WBP_CharacterScrollListBlock_C
// (None)

class UClass* UWBP_CharacterScrollListBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CharacterScrollListBlock_C");

	return Clss;
}


// WBP_CharacterScrollListBlock_C WBP_CharacterScrollListBlock.Default__WBP_CharacterScrollListBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CharacterScrollListBlock_C* UWBP_CharacterScrollListBlock_C::GetDefaultObj()
{
	static class UWBP_CharacterScrollListBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CharacterScrollListBlock_C*>(UWBP_CharacterScrollListBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


