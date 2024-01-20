#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Explosion_FragGrenade_Fire.BP_Explosion_FragGrenade_Fire_C
// (Actor)

class UClass* ABP_Explosion_FragGrenade_Fire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Explosion_FragGrenade_Fire_C");

	return Clss;
}


// BP_Explosion_FragGrenade_Fire_C BP_Explosion_FragGrenade_Fire.Default__BP_Explosion_FragGrenade_Fire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Explosion_FragGrenade_Fire_C* ABP_Explosion_FragGrenade_Fire_C::GetDefaultObj()
{
	static class ABP_Explosion_FragGrenade_Fire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Explosion_FragGrenade_Fire_C*>(ABP_Explosion_FragGrenade_Fire_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Explosion_FragGrenade_Fire.BP_Explosion_FragGrenade_Fire_C.GetElement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalElementType         Element                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_FragGrenade_Fire_C::GetElement(enum class EPalElementType* Element)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_FragGrenade_Fire_C", "GetElement");

	Params::ABP_Explosion_FragGrenade_Fire_C_GetElement_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Element != nullptr)
		*Element = Parms.Element;

}


// Function BP_Explosion_FragGrenade_Fire.BP_Explosion_FragGrenade_Fire_C.GetEffectValue
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_FragGrenade_Fire_C::GetEffectValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_FragGrenade_Fire_C", "GetEffectValue");

	Params::ABP_Explosion_FragGrenade_Fire_C_GetEffectValue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function BP_Explosion_FragGrenade_Fire.BP_Explosion_FragGrenade_Fire_C.GetEffectType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalAdditionalEffectTypeEffect                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_FragGrenade_Fire_C::GetEffectType(enum class EPalAdditionalEffectType* Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_FragGrenade_Fire_C", "GetEffectType");

	Params::ABP_Explosion_FragGrenade_Fire_C_GetEffectType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;

}


// Function BP_Explosion_FragGrenade_Fire.BP_Explosion_FragGrenade_Fire_C.BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNiagaraComponent*           PSystem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_FragGrenade_Fire_C::BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_FragGrenade_Fire_C", "BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");

	Params::ABP_Explosion_FragGrenade_Fire_C_BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature_Params Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Explosion_FragGrenade_Fire.BP_Explosion_FragGrenade_Fire_C.ExecuteUbergraph_BP_Explosion_FragGrenade_Fire
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           K2Node_ComponentBoundEvent_PSystem                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_FragGrenade_Fire_C::ExecuteUbergraph_BP_Explosion_FragGrenade_Fire(int32 EntryPoint, class UNiagaraComponent* K2Node_ComponentBoundEvent_PSystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_FragGrenade_Fire_C", "ExecuteUbergraph_BP_Explosion_FragGrenade_Fire");

	Params::ABP_Explosion_FragGrenade_Fire_C_ExecuteUbergraph_BP_Explosion_FragGrenade_Fire_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_PSystem = K2Node_ComponentBoundEvent_PSystem;

	UObject::ProcessEvent(Func, &Parms);

}

}


