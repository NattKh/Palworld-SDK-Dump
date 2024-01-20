#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalSphere_Body_Master.BP_PalSphere_Body_Master_C
// (Actor)

class UClass* ABP_PalSphere_Body_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalSphere_Body_Master_C");

	return Clss;
}


// BP_PalSphere_Body_Master_C BP_PalSphere_Body_Master.Default__BP_PalSphere_Body_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PalSphere_Body_Master_C* ABP_PalSphere_Body_Master_C::GetDefaultObj()
{
	static class ABP_PalSphere_Body_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PalSphere_Body_Master_C*>(ABP_PalSphere_Body_Master_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalSphere_Body_Master.BP_PalSphere_Body_Master_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_PalSphere_Body_Master_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSphere_Body_Master_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PalSphere_Body_Master.BP_PalSphere_Body_Master_C.ExecuteUbergraph_BP_PalSphere_Body_Master
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalSphere_Body_Master_C::ExecuteUbergraph_BP_PalSphere_Body_Master(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalSphere_Body_Master_C", "ExecuteUbergraph_BP_PalSphere_Body_Master");

	Params::ABP_PalSphere_Body_Master_C_ExecuteUbergraph_BP_PalSphere_Body_Master_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


