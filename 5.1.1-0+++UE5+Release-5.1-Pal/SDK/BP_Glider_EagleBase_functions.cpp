#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Glider_EagleBase.BP_Glider_EagleBase_C
// (Actor)

class UClass* ABP_Glider_EagleBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Glider_EagleBase_C");

	return Clss;
}


// BP_Glider_EagleBase_C BP_Glider_EagleBase.Default__BP_Glider_EagleBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Glider_EagleBase_C* ABP_Glider_EagleBase_C::GetDefaultObj()
{
	static class ABP_Glider_EagleBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Glider_EagleBase_C*>(ABP_Glider_EagleBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Glider_EagleBase.BP_Glider_EagleBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Glider_EagleBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Glider_EagleBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Glider_EagleBase.BP_Glider_EagleBase_C.OnStartGliding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Glider_EagleBase_C::OnStartGliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Glider_EagleBase_C", "OnStartGliding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Glider_EagleBase.BP_Glider_EagleBase_C.OnEndGliding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Glider_EagleBase_C::OnEndGliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Glider_EagleBase_C", "OnEndGliding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Glider_EagleBase.BP_Glider_EagleBase_C.ExecuteUbergraph_BP_Glider_EagleBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Glider_EagleBase_C::ExecuteUbergraph_BP_Glider_EagleBase(int32 EntryPoint, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Glider_EagleBase_C", "ExecuteUbergraph_BP_Glider_EagleBase");

	Params::ABP_Glider_EagleBase_C_ExecuteUbergraph_BP_Glider_EagleBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


