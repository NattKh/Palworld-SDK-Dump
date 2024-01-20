#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_BaseCampBattleDirector.BP_BuildObject_BaseCampBattleDirector_C
// (Actor)

class UClass* ABP_BuildObject_BaseCampBattleDirector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_BaseCampBattleDirector_C");

	return Clss;
}


// BP_BuildObject_BaseCampBattleDirector_C BP_BuildObject_BaseCampBattleDirector.Default__BP_BuildObject_BaseCampBattleDirector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_BaseCampBattleDirector_C* ABP_BuildObject_BaseCampBattleDirector_C::GetDefaultObj()
{
	static class ABP_BuildObject_BaseCampBattleDirector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_BaseCampBattleDirector_C*>(ABP_BuildObject_BaseCampBattleDirector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_BaseCampBattleDirector.BP_BuildObject_BaseCampBattleDirector_C.OnNotifiedChangeBaseCampBattleType
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectBaseCampWorkerDirectorModel*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_BaseCampBattleDirector_C::OnNotifiedChangeBaseCampBattleType(class UPalMapObjectBaseCampWorkerDirectorModel* Model, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, int32 CallFunc_PostEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_BaseCampBattleDirector_C", "OnNotifiedChangeBaseCampBattleType");

	Params::ABP_BuildObject_BaseCampBattleDirector_C_OnNotifiedChangeBaseCampBattleType_Params Parms{};

	Parms.Model = Model;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_BaseCampBattleDirector.BP_BuildObject_BaseCampBattleDirector_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_BaseCampBattleDirector_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_BaseCampBattleDirector_C", "BP_OnSetConcreteModel");

	Params::ABP_BuildObject_BaseCampBattleDirector_C_BP_OnSetConcreteModel_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_BaseCampBattleDirector.BP_BuildObject_BaseCampBattleDirector_C.ExecuteUbergraph_BP_BuildObject_BaseCampBattleDirector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_Event_ConcreteModel                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectBaseCampWorkerDirectorModel*K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Worker_Director_Model(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_BaseCampBattleDirector_C::ExecuteUbergraph_BP_BuildObject_BaseCampBattleDirector(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, class UPalMapObjectBaseCampWorkerDirectorModel* K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Worker_Director_Model, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_BaseCampBattleDirector_C", "ExecuteUbergraph_BP_BuildObject_BaseCampBattleDirector");

	Params::ABP_BuildObject_BaseCampBattleDirector_C_ExecuteUbergraph_BP_BuildObject_BaseCampBattleDirector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_ConcreteModel = K2Node_Event_ConcreteModel;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Worker_Director_Model = K2Node_DynamicCast_AsPal_Map_Object_Base_Camp_Worker_Director_Model;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


