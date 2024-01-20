#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Explosion_Penguin.BP_Explosion_Penguin_C
// (Actor)

class UClass* ABP_Explosion_Penguin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Explosion_Penguin_C");

	return Clss;
}


// BP_Explosion_Penguin_C BP_Explosion_Penguin.Default__BP_Explosion_Penguin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Explosion_Penguin_C* ABP_Explosion_Penguin_C::GetDefaultObj()
{
	static class ABP_Explosion_Penguin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Explosion_Penguin_C*>(ABP_Explosion_Penguin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Explosion_Penguin.BP_Explosion_Penguin_C.GetWeaponAttackType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalAttackType          AttackType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Penguin_C::GetWeaponAttackType(enum class EPalAttackType* AttackType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Explosion_Penguin_C", "GetWeaponAttackType");

	Params::ABP_Explosion_Penguin_C_GetWeaponAttackType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AttackType != nullptr)
		*AttackType = Parms.AttackType;

}

}


