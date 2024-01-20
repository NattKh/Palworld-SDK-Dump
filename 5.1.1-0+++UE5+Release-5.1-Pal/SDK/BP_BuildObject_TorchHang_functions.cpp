#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_TorchHang.BP_BuildObject_TorchHang_C
// (Actor)

class UClass* ABP_BuildObject_TorchHang_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_TorchHang_C");

	return Clss;
}


// BP_BuildObject_TorchHang_C BP_BuildObject_TorchHang.Default__BP_BuildObject_TorchHang_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_TorchHang_C* ABP_BuildObject_TorchHang_C::GetDefaultObj()
{
	static class ABP_BuildObject_TorchHang_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_TorchHang_C*>(ABP_BuildObject_TorchHang_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_TorchHang.BP_BuildObject_TorchHang_C.SetActiveLight
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_TorchHang_C::SetActiveLight(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_TorchHang_C", "SetActiveLight");

	Params::ABP_BuildObject_TorchHang_C_SetActiveLight_Params Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_TorchHang.BP_BuildObject_TorchHang_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_TorchHang_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_TorchHang_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_TorchHang.BP_BuildObject_TorchHang_C.ExecuteUbergraph_BP_BuildObject_TorchHang
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_TorchHang_C::ExecuteUbergraph_BP_BuildObject_TorchHang(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_TorchHang_C", "ExecuteUbergraph_BP_BuildObject_TorchHang");

	Params::ABP_BuildObject_TorchHang_C_ExecuteUbergraph_BP_BuildObject_TorchHang_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


