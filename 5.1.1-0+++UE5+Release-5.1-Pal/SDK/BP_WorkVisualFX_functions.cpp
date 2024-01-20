#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WorkVisualFX.BP_WorkVisualFX_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_WorkVisualFX_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WorkVisualFX_C");

	return Clss;
}


// BP_WorkVisualFX_C BP_WorkVisualFX.Default__BP_WorkVisualFX_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WorkVisualFX_C* UBP_WorkVisualFX_C::GetDefaultObj()
{
	static class UBP_WorkVisualFX_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WorkVisualFX_C*>(UBP_WorkVisualFX_C::StaticClass()->DefaultObject);

	return Default;
}

}


