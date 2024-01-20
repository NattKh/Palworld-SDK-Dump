#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_NormalBullet_MonkeyRifle.BP_NormalBullet_MonkeyRifle_C
// (Actor)

class UClass* ABP_NormalBullet_MonkeyRifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_NormalBullet_MonkeyRifle_C");

	return Clss;
}


// BP_NormalBullet_MonkeyRifle_C BP_NormalBullet_MonkeyRifle.Default__BP_NormalBullet_MonkeyRifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_NormalBullet_MonkeyRifle_C* ABP_NormalBullet_MonkeyRifle_C::GetDefaultObj()
{
	static class ABP_NormalBullet_MonkeyRifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_NormalBullet_MonkeyRifle_C*>(ABP_NormalBullet_MonkeyRifle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_NormalBullet_MonkeyRifle.BP_NormalBullet_MonkeyRifle_C.GetBulletAttackType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EPalAttackType          AttackType                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_NormalBullet_MonkeyRifle_C::GetBulletAttackType(enum class EPalAttackType* AttackType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_NormalBullet_MonkeyRifle_C", "GetBulletAttackType");

	Params::ABP_NormalBullet_MonkeyRifle_C_GetBulletAttackType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AttackType != nullptr)
		*AttackType = Parms.AttackType;

}

}


