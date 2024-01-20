#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_Crusher.BP_BuildObject_Crusher_C
// (Actor)

class UClass* ABP_BuildObject_Crusher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_Crusher_C");

	return Clss;
}


// BP_BuildObject_Crusher_C BP_BuildObject_Crusher.Default__BP_BuildObject_Crusher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_Crusher_C* ABP_BuildObject_Crusher_C::GetDefaultObj()
{
	static class ABP_BuildObject_Crusher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_Crusher_C*>(ABP_BuildObject_Crusher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_Crusher.BP_BuildObject_Crusher_C.RotateMill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BuildObject_Crusher_C::RotateMill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Crusher_C", "RotateMill");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_Crusher.BP_BuildObject_Crusher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_Crusher_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Crusher_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_Crusher.BP_BuildObject_Crusher_C.ExecuteUbergraph_BP_BuildObject_Crusher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Crusher_C::ExecuteUbergraph_BP_BuildObject_Crusher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_Crusher_C", "ExecuteUbergraph_BP_BuildObject_Crusher");

	Params::ABP_BuildObject_Crusher_C_ExecuteUbergraph_BP_BuildObject_Crusher_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


