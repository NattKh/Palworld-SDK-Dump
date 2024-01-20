#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TemperatureComponent.BP_TemperatureComponent_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_TemperatureComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TemperatureComponent_C");

	return Clss;
}


// BP_TemperatureComponent_C BP_TemperatureComponent.Default__BP_TemperatureComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_TemperatureComponent_C* UBP_TemperatureComponent_C::GetDefaultObj()
{
	static class UBP_TemperatureComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_TemperatureComponent_C*>(UBP_TemperatureComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


