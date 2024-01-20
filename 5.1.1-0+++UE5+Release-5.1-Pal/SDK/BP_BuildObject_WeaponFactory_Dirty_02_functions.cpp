#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_WeaponFactory_Dirty_02.BP_BuildObject_WeaponFactory_Dirty_02_C
// (Actor)

class UClass* ABP_BuildObject_WeaponFactory_Dirty_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_WeaponFactory_Dirty_02_C");

	return Clss;
}


// BP_BuildObject_WeaponFactory_Dirty_02_C BP_BuildObject_WeaponFactory_Dirty_02.Default__BP_BuildObject_WeaponFactory_Dirty_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_WeaponFactory_Dirty_02_C* ABP_BuildObject_WeaponFactory_Dirty_02_C::GetDefaultObj()
{
	static class ABP_BuildObject_WeaponFactory_Dirty_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_WeaponFactory_Dirty_02_C*>(ABP_BuildObject_WeaponFactory_Dirty_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_WeaponFactory_Dirty_02.BP_BuildObject_WeaponFactory_Dirty_02_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_WeaponFactory_Dirty_02_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_WeaponFactory_Dirty_02_C", "OnAvailable_BlueprintImpl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_WeaponFactory_Dirty_02.BP_BuildObject_WeaponFactory_Dirty_02_C.OnSetConcreteModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_WeaponFactory_Dirty_02_C::OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_WeaponFactory_Dirty_02_C", "OnSetConcreteModel");

	Params::ABP_BuildObject_WeaponFactory_Dirty_02_C_OnSetConcreteModel_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_WeaponFactory_Dirty_02.BP_BuildObject_WeaponFactory_Dirty_02_C.ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_CustomEvent_Model                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_WeaponFactory_Dirty_02_C::ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02(int32 EntryPoint, class UPalMapObjectConcreteModelBase* K2Node_CustomEvent_Model, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_WeaponFactory_Dirty_02_C", "ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02");

	Params::ABP_BuildObject_WeaponFactory_Dirty_02_C_ExecuteUbergraph_BP_BuildObject_WeaponFactory_Dirty_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


