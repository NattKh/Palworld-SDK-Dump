#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_WeaponFactoryBase.BP_BuildObject_WeaponFactoryBase_C
// (Actor)

class UClass* ABP_BuildObject_WeaponFactoryBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_WeaponFactoryBase_C");

	return Clss;
}


// BP_BuildObject_WeaponFactoryBase_C BP_BuildObject_WeaponFactoryBase.Default__BP_BuildObject_WeaponFactoryBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_WeaponFactoryBase_C* ABP_BuildObject_WeaponFactoryBase_C::GetDefaultObj()
{
	static class ABP_BuildObject_WeaponFactoryBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_WeaponFactoryBase_C*>(ABP_BuildObject_WeaponFactoryBase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_WeaponFactoryBase.BP_BuildObject_WeaponFactoryBase_C.WeaponLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USceneComponent*             Input                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_WeaponFactoryBase_C::WeaponLoop(class USceneComponent* Input)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_WeaponFactoryBase_C", "WeaponLoop");

	Params::ABP_BuildObject_WeaponFactoryBase_C_WeaponLoop_Params Parms{};

	Parms.Input = Input;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_WeaponFactoryBase.BP_BuildObject_WeaponFactoryBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_WeaponFactoryBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_WeaponFactoryBase_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_WeaponFactoryBase.BP_BuildObject_WeaponFactoryBase_C.ExecuteUbergraph_BP_BuildObject_WeaponFactoryBase
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_WeaponFactoryBase_C::ExecuteUbergraph_BP_BuildObject_WeaponFactoryBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_WeaponFactoryBase_C", "ExecuteUbergraph_BP_BuildObject_WeaponFactoryBase");

	Params::ABP_BuildObject_WeaponFactoryBase_C_ExecuteUbergraph_BP_BuildObject_WeaponFactoryBase_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


