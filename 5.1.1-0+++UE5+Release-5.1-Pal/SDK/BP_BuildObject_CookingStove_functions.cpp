#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_CookingStove.BP_BuildObject_CookingStove_C
// (Actor)

class UClass* ABP_BuildObject_CookingStove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_CookingStove_C");

	return Clss;
}


// BP_BuildObject_CookingStove_C BP_BuildObject_CookingStove.Default__BP_BuildObject_CookingStove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_CookingStove_C* ABP_BuildObject_CookingStove_C::GetDefaultObj()
{
	static class ABP_BuildObject_CookingStove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_CookingStove_C*>(ABP_BuildObject_CookingStove_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_CookingStove.BP_BuildObject_CookingStove_C.SetActive_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bOn                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_CookingStove_C::SetActive_Internal(bool bOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_CookingStove_C", "SetActive_Internal");

	Params::ABP_BuildObject_CookingStove_C_SetActive_Internal_Params Parms{};

	Parms.bOn = bOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_CookingStove.BP_BuildObject_CookingStove_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_CookingStove_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_CookingStove_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_CookingStove.BP_BuildObject_CookingStove_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_CookingStove_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_CookingStove_C", "OnAvailable_BlueprintImpl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_CookingStove.BP_BuildObject_CookingStove_C.ExecuteUbergraph_BP_BuildObject_CookingStove
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_CookingStove_C::ExecuteUbergraph_BP_BuildObject_CookingStove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_CookingStove_C", "ExecuteUbergraph_BP_BuildObject_CookingStove");

	Params::ABP_BuildObject_CookingStove_C_ExecuteUbergraph_BP_BuildObject_CookingStove_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


