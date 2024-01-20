#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_EnergyGenerator_Electric.BP_BuildObject_EnergyGenerator_Electric_C
// (Actor)

class UClass* ABP_BuildObject_EnergyGenerator_Electric_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_EnergyGenerator_Electric_C");

	return Clss;
}


// BP_BuildObject_EnergyGenerator_Electric_C BP_BuildObject_EnergyGenerator_Electric.Default__BP_BuildObject_EnergyGenerator_Electric_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_EnergyGenerator_Electric_C* ABP_BuildObject_EnergyGenerator_Electric_C::GetDefaultObj()
{
	static class ABP_BuildObject_EnergyGenerator_Electric_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_EnergyGenerator_Electric_C*>(ABP_BuildObject_EnergyGenerator_Electric_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_EnergyGenerator_Electric.BP_BuildObject_EnergyGenerator_Electric_C.OnEndGenerate
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_EnergyGenerator_Electric_C::OnEndGenerate(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_EnergyGenerator_Electric_C", "OnEndGenerate");

	Params::ABP_BuildObject_EnergyGenerator_Electric_C_OnEndGenerate_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_EnergyGenerator_Electric.BP_BuildObject_EnergyGenerator_Electric_C.OnStartGenerate
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_EnergyGenerator_Electric_C::OnStartGenerate(bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_EnergyGenerator_Electric_C", "OnStartGenerate");

	Params::ABP_BuildObject_EnergyGenerator_Electric_C_OnStartGenerate_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


