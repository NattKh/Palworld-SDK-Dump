#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_HeaterMedieval.BP_BuildObject_HeaterMedieval_C
// (Actor)

class UClass* ABP_BuildObject_HeaterMedieval_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_HeaterMedieval_C");

	return Clss;
}


// BP_BuildObject_HeaterMedieval_C BP_BuildObject_HeaterMedieval.Default__BP_BuildObject_HeaterMedieval_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_HeaterMedieval_C* ABP_BuildObject_HeaterMedieval_C::GetDefaultObj()
{
	static class ABP_BuildObject_HeaterMedieval_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_HeaterMedieval_C*>(ABP_BuildObject_HeaterMedieval_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_HeaterMedieval.BP_BuildObject_HeaterMedieval_C.SetActive_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bOn                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HeaterMedieval_C::SetActive_Internal(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HeaterMedieval_C", "SetActive_Internal");

	Params::ABP_BuildObject_HeaterMedieval_C_SetActive_Internal_Params Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HeaterMedieval.BP_BuildObject_HeaterMedieval_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_HeaterMedieval_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HeaterMedieval_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_HeaterMedieval.BP_BuildObject_HeaterMedieval_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_HeaterMedieval_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HeaterMedieval_C", "OnAvailable_BlueprintImpl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_HeaterMedieval.BP_BuildObject_HeaterMedieval_C.ExecuteUbergraph_BP_BuildObject_HeaterMedieval
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HeaterMedieval_C::ExecuteUbergraph_BP_BuildObject_HeaterMedieval(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HeaterMedieval_C", "ExecuteUbergraph_BP_BuildObject_HeaterMedieval");

	Params::ABP_BuildObject_HeaterMedieval_C_ExecuteUbergraph_BP_BuildObject_HeaterMedieval_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


