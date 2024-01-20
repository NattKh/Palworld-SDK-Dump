#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Ammo_Penguin.BP_Ammo_Penguin_C
// (Actor)

class UClass* ABP_Ammo_Penguin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Ammo_Penguin_C");

	return Clss;
}


// BP_Ammo_Penguin_C BP_Ammo_Penguin.Default__BP_Ammo_Penguin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Ammo_Penguin_C* ABP_Ammo_Penguin_C::GetDefaultObj()
{
	static class ABP_Ammo_Penguin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Ammo_Penguin_C*>(ABP_Ammo_Penguin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Ammo_Penguin.BP_Ammo_Penguin_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Ammo_Penguin_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ammo_Penguin_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Ammo_Penguin.BP_Ammo_Penguin_C.ExecuteUbergraph_BP_Ammo_Penguin
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Ammo_Penguin_C::ExecuteUbergraph_BP_Ammo_Penguin(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Ammo_Penguin_C", "ExecuteUbergraph_BP_Ammo_Penguin");

	Params::ABP_Ammo_Penguin_C_ExecuteUbergraph_BP_Ammo_Penguin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


