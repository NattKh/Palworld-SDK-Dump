#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C
// (Actor)

class UClass* ABP_MapObject_DeathPenaltyChest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObject_DeathPenaltyChest_C");

	return Clss;
}


// BP_MapObject_DeathPenaltyChest_C BP_MapObject_DeathPenaltyChest.Default__BP_MapObject_DeathPenaltyChest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObject_DeathPenaltyChest_C* ABP_MapObject_DeathPenaltyChest_C::GetDefaultObj()
{
	static class ABP_MapObject_DeathPenaltyChest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObject_DeathPenaltyChest_C*>(ABP_MapObject_DeathPenaltyChest_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.SetActiveFXInLocal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDeathPenaltyStorageModel*K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSameGuildInLocalPlayer_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DeathPenaltyChest_C::SetActiveFXInLocal(class UPalMapObjectConcreteModelBase* ConcreteModel, class UPalMapObjectDeathPenaltyStorageModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSameGuildInLocalPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_DeathPenaltyChest_C", "SetActiveFXInLocal");

	Params::ABP_MapObject_DeathPenaltyChest_C_SetActiveFXInLocal_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model = K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsSameGuildInLocalPlayer_ReturnValue = CallFunc_IsSameGuildInLocalPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DeathPenaltyChest_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_DeathPenaltyChest_C", "BP_OnSetConcreteModel");

	Params::ABP_MapObject_DeathPenaltyChest_C_BP_OnSetConcreteModel_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.OnNotifiedGuildUpdateInClient
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectDeathPenaltyStorageModel*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DeathPenaltyChest_C::OnNotifiedGuildUpdateInClient(class UPalMapObjectDeathPenaltyStorageModel* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_DeathPenaltyChest_C", "OnNotifiedGuildUpdateInClient");

	Params::ABP_MapObject_DeathPenaltyChest_C_OnNotifiedGuildUpdateInClient_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_DeathPenaltyChest.BP_MapObject_DeathPenaltyChest_C.ExecuteUbergraph_BP_MapObject_DeathPenaltyChest
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDeathPenaltyStorageModel*K2Node_CustomEvent_Model                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_Event_ConcreteModel                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDeathPenaltyStorageModel*K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_DeathPenaltyChest_C::ExecuteUbergraph_BP_MapObject_DeathPenaltyChest(int32 EntryPoint, class UPalMapObjectDeathPenaltyStorageModel* K2Node_CustomEvent_Model, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, class UPalMapObjectDeathPenaltyStorageModel* K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_DeathPenaltyChest_C", "ExecuteUbergraph_BP_MapObject_DeathPenaltyChest");

	Params::ABP_MapObject_DeathPenaltyChest_C_ExecuteUbergraph_BP_MapObject_DeathPenaltyChest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;
	Parms.K2Node_Event_ConcreteModel = K2Node_Event_ConcreteModel;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model = K2Node_DynamicCast_AsPal_Map_Object_Death_Penalty_Storage_Model;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


