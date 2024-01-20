#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NormalBullet_NPC.BP_NormalBullet_NPC_C
// (Actor)

class UClass* ABP_NormalBullet_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NormalBullet_NPC_C");

	return Clss;
}


// BP_NormalBullet_NPC_C BP_NormalBullet_NPC.Default__BP_NormalBullet_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NormalBullet_NPC_C* ABP_NormalBullet_NPC_C::GetDefaultObj()
{
	static class ABP_NormalBullet_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NormalBullet_NPC_C*>(ABP_NormalBullet_NPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NormalBullet_NPC.BP_NormalBullet_NPC_C.GetHitEffect
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraSystem*              NiagaraEffect                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalBullet_NPC_C::GetHitEffect(class UNiagaraSystem** NiagaraEffect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalBullet_NPC_C", "GetHitEffect");

	Params::ABP_NormalBullet_NPC_C_GetHitEffect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NiagaraEffect != nullptr)
		*NiagaraEffect = Parms.NiagaraEffect;

}

}


