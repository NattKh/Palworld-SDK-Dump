#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C
// (Actor)

class UClass* ABP_Explosion_RocketLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Explosion_RocketLauncher_C");

	return Clss;
}


// BP_Explosion_RocketLauncher_C BP_Explosion_RocketLauncher.Default__BP_Explosion_RocketLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Explosion_RocketLauncher_C* ABP_Explosion_RocketLauncher_C::GetDefaultObj()
{
	static class ABP_Explosion_RocketLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Explosion_RocketLauncher_C*>(ABP_Explosion_RocketLauncher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.GetEffectValue
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_RocketLauncher_C::GetEffectValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_RocketLauncher_C", "GetEffectValue");

	Params::ABP_Explosion_RocketLauncher_C_GetEffectValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.GetEffectType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalAdditionalEffectTypeEffect                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_RocketLauncher_C::GetEffectType(enum class EPalAdditionalEffectType* Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_RocketLauncher_C", "GetEffectType");

	Params::ABP_Explosion_RocketLauncher_C_GetEffectType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;

}


// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           PSystem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_RocketLauncher_C::BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_RocketLauncher_C", "BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");

	Params::ABP_Explosion_RocketLauncher_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature_Params Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.ExecuteUbergraph_BP_Explosion_RocketLauncher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_ComponentBoundEvent_PSystem                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_RocketLauncher_C::ExecuteUbergraph_BP_Explosion_RocketLauncher(int32 EntryPoint, class UNiagaraComponent* K2Node_ComponentBoundEvent_PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_RocketLauncher_C", "ExecuteUbergraph_BP_Explosion_RocketLauncher");

	Params::ABP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_PSystem = K2Node_ComponentBoundEvent_PSystem;

	UObject::ProcessEvent(Func, &Parms);

}

}


