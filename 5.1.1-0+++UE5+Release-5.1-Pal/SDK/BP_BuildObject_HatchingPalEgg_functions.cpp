#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C
// (Actor)

class UClass* ABP_BuildObject_HatchingPalEgg_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObject_HatchingPalEgg_C");

	return Clss;
}


// BP_BuildObject_HatchingPalEgg_C BP_BuildObject_HatchingPalEgg.Default__BP_BuildObject_HatchingPalEgg_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildObject_HatchingPalEgg_C* ABP_BuildObject_HatchingPalEgg_C::GetDefaultObj()
{
	static class ABP_BuildObject_HatchingPalEgg_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildObject_HatchingPalEgg_C*>(ABP_BuildObject_HatchingPalEgg_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnRep_EggActorClass
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_BuildObject_HatchingPalEgg_C::OnRep_EggActorClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnRep_EggActorClass");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.GetTemperatureDiff
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Diff                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentTemperature_CurrentTemperature                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Item_Anim_PalEgg_Base_C* K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetHatchingTemperature_Temperature                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::GetTemperatureDiff(int32* Diff, int32 CallFunc_GetCurrentTemperature_CurrentTemperature, class ABP_Item_Anim_PalEgg_Base_C* K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetHatchingTemperature_Temperature, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "GetTemperatureDiff");

	Params::ABP_BuildObject_HatchingPalEgg_C_GetTemperatureDiff_Params Parms{};

	Parms.CallFunc_GetCurrentTemperature_CurrentTemperature = CallFunc_GetCurrentTemperature_CurrentTemperature;
	Parms.K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base = K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHatchingTemperature_Temperature = CallFunc_GetHatchingTemperature_Temperature;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Diff != nullptr)
		*Diff = Parms.Diff;

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.ResetHatchingSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::ResetHatchingSpeed(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "ResetHatchingSpeed");

	Params::ABP_BuildObject_HatchingPalEgg_C_ResetHatchingSpeed_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.UpdateHatchingSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetDefaultAutoWorkAmountBySec_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTemperatureDiff_Diff                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Abs_Int_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalGameSetting*             CallFunc_GetGameSetting_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_B_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_UpdateWorkAmountBySec_NewWorkAmountBySec_ImplicitCast   (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::UpdateHatchingSpeed(float CallFunc_GetDefaultAutoWorkAmountBySec_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetTemperatureDiff_Diff, int32 CallFunc_Abs_Int_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_UpdateWorkAmountBySec_NewWorkAmountBySec_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "UpdateHatchingSpeed");

	Params::ABP_BuildObject_HatchingPalEgg_C_UpdateHatchingSpeed_Params Parms{};

	Parms.CallFunc_GetDefaultAutoWorkAmountBySec_ReturnValue = CallFunc_GetDefaultAutoWorkAmountBySec_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTemperatureDiff_Diff = CallFunc_GetTemperatureDiff_Diff;
	Parms.CallFunc_Abs_Int_ReturnValue = CallFunc_Abs_Int_ReturnValue;
	Parms.CallFunc_GetGameSetting_ReturnValue = CallFunc_GetGameSetting_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_B_ImplicitCast = CallFunc_Multiply_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_UpdateWorkAmountBySec_NewWorkAmountBySec_ImplicitCast = CallFunc_UpdateWorkAmountBySec_NewWorkAmountBySec_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.GetCurrentTemperature
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              CurrentTemperature                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentTemperature_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::GetCurrentTemperature(int32* CurrentTemperature, int32 CallFunc_GetCurrentTemperature_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "GetCurrentTemperature");

	Params::ABP_BuildObject_HatchingPalEgg_C_GetCurrentTemperature_Params Parms{};

	Parms.CallFunc_GetCurrentTemperature_ReturnValue = CallFunc_GetCurrentTemperature_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTemperature != nullptr)
		*CurrentTemperature = Parms.CurrentTemperature;

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.SpawnGetPalEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::SpawnGetPalEffect(const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "SpawnGetPalEffect");

	Params::ABP_BuildObject_HatchingPalEgg_C_SpawnGetPalEffect_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = CallFunc_SpawnSystemAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.SetEggAnimPlayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlay                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Item_Anim_PalEgg_Base_C* K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::SetEggAnimPlayState(bool IsPlay, class ABP_Item_Anim_PalEgg_Base_C* K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "SetEggAnimPlayState");

	Params::ABP_BuildObject_HatchingPalEgg_C_SetEggAnimPlayState_Params Parms{};

	Parms.IsPlay = IsPlay;
	Parms.K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base = K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.SetupItemForeach
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemId                  CallFunc_GetItemId_ReturnValue                                   (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemData                CallFunc_GetItemData_ReturnValue                                 (ConstParm, NoDestructor)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::SetupItemForeach(class UPalItemSlot* Slot, int32 Index, bool CallFunc_IsValid_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalItemData& CallFunc_GetItemData_ReturnValue, bool CallFunc_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "SetupItemForeach");

	Params::ABP_BuildObject_HatchingPalEgg_C_SetupItemForeach_Params Parms{};

	Parms.Slot = Slot;
	Parms.Index = Index;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemId_ReturnValue = CallFunc_GetItemId_ReturnValue;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnUpdateHatchedCharacter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectHatchingEggModel*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnUpdateHatchedCharacter(class UPalMapObjectHatchingEggModel* Model, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnUpdateHatchedCharacter");

	Params::ABP_BuildObject_HatchingPalEgg_C_OnUpdateHatchedCharacter_Params Parms{};

	Parms.Model = Model;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnUpdateItemContainer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemContainer*           Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemSlot*                CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnUpdateItemContainer(class UPalItemContainer* Container, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalItemSlot* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnUpdateItemContainer");

	Params::ABP_BuildObject_HatchingPalEgg_C_OnUpdateItemContainer_Params Parms{};

	Parms.Container = Container;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnSetConcreteModelAvailableInternal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalInteractDelegates*       CallFunc_Delegates_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectHatchingEggModel*K2Node_DynamicCast_AsPal_Map_Object_Hatching_Egg_Model           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectItemContainerModule*CallFunc_GetItemContainerModule_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalItemContainer*           CallFunc_GetContainer_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnSetConcreteModelAvailableInternal(class UPalMapObjectConcreteModelBase* ConcreteModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalInteractDelegates* CallFunc_Delegates_ReturnValue, class UPalMapObjectHatchingEggModel* K2Node_DynamicCast_AsPal_Map_Object_Hatching_Egg_Model, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, class UPalItemContainer* CallFunc_GetContainer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnSetConcreteModelAvailableInternal");

	Params::ABP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailableInternal_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Delegates_ReturnValue = CallFunc_Delegates_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Hatching_Egg_Model = K2Node_DynamicCast_AsPal_Map_Object_Hatching_Egg_Model;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetItemContainerModule_ReturnValue = CallFunc_GetItemContainerModule_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetContainer_ReturnValue = CallFunc_GetContainer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE");

	Params::ABP_BuildObject_HatchingPalEgg_C_OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_BuildObject_HatchingPalEgg_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnAvailable_BlueprintImpl");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.LoadEggMeshModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class AActor>        EggActorClass                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::LoadEggMeshModel(TSoftClassPtr<class AActor> EggActorClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "LoadEggMeshModel");

	Params::ABP_BuildObject_HatchingPalEgg_C_LoadEggMeshModel_Params Parms{};

	Parms.EggActorClass = EggActorClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnStartTriggerInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeIndicatorType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnStartTriggerInteract(class AActor* Other, enum class EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnStartTriggerInteract");

	Params::ABP_BuildObject_HatchingPalEgg_C_OnStartTriggerInteract_Params Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnEndTriggerInteract
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeIndicatorType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnEndTriggerInteract(class AActor* Other, enum class EPalInteractiveObjectIndicatorType IndicatorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnEndTriggerInteract");

	Params::ABP_BuildObject_HatchingPalEgg_C_OnEndTriggerInteract_Params Parms{};

	Parms.Other = Other;
	Parms.IndicatorType = IndicatorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.On Change Temperature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NextTemperature                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::On_Change_Temperature(int32 NextTemperature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "On Change Temperature");

	Params::ABP_BuildObject_HatchingPalEgg_C_On_Change_Temperature_Params Parms{};

	Parms.NextTemperature = NextTemperature;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.OnSetConcreteModelAvailable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::OnSetConcreteModelAvailable(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "OnSetConcreteModelAvailable");

	Params::ABP_BuildObject_HatchingPalEgg_C_OnSetConcreteModelAvailable_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C.ExecuteUbergraph_BP_BuildObject_HatchingPalEgg
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class AActor>        K2Node_CustomEvent_EggActorClass                                 (HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Other_1                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeK2Node_CustomEvent_IndicatorType_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Other                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPalInteractiveObjectIndicatorTypeK2Node_CustomEvent_IndicatorType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_NextTemperature                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_CustomEvent_Model                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_BuildObject_HatchingPalEgg_C::ExecuteUbergraph_BP_BuildObject_HatchingPalEgg(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSoftClassPtr<class AActor> K2Node_CustomEvent_EggActorClass, class AActor* K2Node_CustomEvent_Other_1, enum class EPalInteractiveObjectIndicatorType K2Node_CustomEvent_IndicatorType_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* K2Node_CustomEvent_Other, enum class EPalInteractiveObjectIndicatorType K2Node_CustomEvent_IndicatorType, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 K2Node_CustomEvent_NextTemperature, class UPalMapObjectConcreteModelBase* K2Node_CustomEvent_Model, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObject_HatchingPalEgg_C", "ExecuteUbergraph_BP_BuildObject_HatchingPalEgg");

	Params::ABP_BuildObject_HatchingPalEgg_C_ExecuteUbergraph_BP_BuildObject_HatchingPalEgg_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_EggActorClass = K2Node_CustomEvent_EggActorClass;
	Parms.K2Node_CustomEvent_Other_1 = K2Node_CustomEvent_Other_1;
	Parms.K2Node_CustomEvent_IndicatorType_1 = K2Node_CustomEvent_IndicatorType_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CustomEvent_Other = K2Node_CustomEvent_Other;
	Parms.K2Node_CustomEvent_IndicatorType = K2Node_CustomEvent_IndicatorType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_CustomEvent_NextTemperature = K2Node_CustomEvent_NextTemperature;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;

	UObject::ProcessEvent(Func, &Parms);

}

}


