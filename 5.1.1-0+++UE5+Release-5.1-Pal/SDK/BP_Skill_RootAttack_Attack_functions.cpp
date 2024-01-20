#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Skill_RootAttack_Attack.BP_Skill_RootAttack_Attack_C
// (Actor)

class UClass* ABP_Skill_RootAttack_Attack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Skill_RootAttack_Attack_C");

	return Clss;
}


// BP_Skill_RootAttack_Attack_C BP_Skill_RootAttack_Attack.Default__BP_Skill_RootAttack_Attack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Skill_RootAttack_Attack_C* ABP_Skill_RootAttack_Attack_C::GetDefaultObj()
{
	static class ABP_Skill_RootAttack_Attack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Skill_RootAttack_Attack_C*>(ABP_Skill_RootAttack_Attack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Skill_RootAttack_Attack.BP_Skill_RootAttack_Attack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Skill_RootAttack_Attack_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Skill_RootAttack_Attack_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Skill_RootAttack_Attack.BP_Skill_RootAttack_Attack_C.ExecuteUbergraph_BP_Skill_RootAttack_Attack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_RootAttack_Attack_C::ExecuteUbergraph_BP_Skill_RootAttack_Attack(int32 EntryPoint, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Skill_RootAttack_Attack_C", "ExecuteUbergraph_BP_Skill_RootAttack_Attack");

	Params::ABP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


