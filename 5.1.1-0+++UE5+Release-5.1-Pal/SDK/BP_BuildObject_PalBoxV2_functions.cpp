#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C
// (Actor)

class UClass* ABP_BuildObject_PalBoxV2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_PalBoxV2_C");

	return Clss;
}


// BP_BuildObject_PalBoxV2_C BP_BuildObject_PalBoxV2.Default__BP_BuildObject_PalBoxV2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_PalBoxV2_C* ABP_BuildObject_PalBoxV2_C::GetDefaultObj()
{
	static class ABP_BuildObject_PalBoxV2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_PalBoxV2_C*>(ABP_BuildObject_PalBoxV2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BuildObject_PalBoxV2_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "OnAvailable_BlueprintImpl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.GetWorkerSpawnLocalTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_BuildObject_PalBoxV2_C::GetWorkerSpawnLocalTransform(const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "GetWorkerSpawnLocalTransform");

	Params::ABP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.GetFastTravelLocalTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_BuildObject_PalBoxV2_C::GetFastTravelLocalTransform(const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "GetFastTravelLocalTransform");

	Params::ABP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform_Params Parms{};

	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_PalBoxV2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.ExecuteUbergraph_BP_BuildObject_PalBoxV2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_PalBoxV2_C::ExecuteUbergraph_BP_BuildObject_PalBoxV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "ExecuteUbergraph_BP_BuildObject_PalBoxV2");

	Params::ABP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


