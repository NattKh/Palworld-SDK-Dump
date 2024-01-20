#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Monkey.BP_Monkey_C
// (Actor, Pawn)

class UClass* ABP_Monkey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Monkey_C");

	return Clss;
}


// BP_Monkey_C BP_Monkey.Default__BP_Monkey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Monkey_C* ABP_Monkey_C::GetDefaultObj()
{
	static class ABP_Monkey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Monkey_C*>(ABP_Monkey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Monkey.BP_Monkey_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Monkey_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Monkey_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Monkey.BP_Monkey_C.ExecuteUbergraph_BP_Monkey
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Monkey_C::ExecuteUbergraph_BP_Monkey(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Monkey_C", "ExecuteUbergraph_BP_Monkey");

	Params::ABP_Monkey_C_ExecuteUbergraph_BP_Monkey_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


