#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C
// (SceneComponent, PrimitiveComponent)

class UClass* UBP_BuildObjectFactoryConveyorComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildObjectFactoryConveyorComponent_C");

	return Clss;
}


// BP_BuildObjectFactoryConveyorComponent_C BP_BuildObjectFactoryConveyorComponent.Default__BP_BuildObjectFactoryConveyorComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_BuildObjectFactoryConveyorComponent_C* UBP_BuildObjectFactoryConveyorComponent_C::GetDefaultObj()
{
	static class UBP_BuildObjectFactoryConveyorComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_BuildObjectFactoryConveyorComponent_C*>(UBP_BuildObjectFactoryConveyorComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.SetRunningConveyor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bOn                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeColor_G_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildObjectFactoryConveyorComponent_C::SetRunningConveyor(bool bOn, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_MakeColor_G_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectFactoryConveyorComponent_C", "SetRunningConveyor");

	Params::UBP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor_Params Parms{};

	Parms.bOn = bOn;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_MakeColor_G_ImplicitCast = CallFunc_MakeColor_G_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.OnUpdateRecipe
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConvertItemModel*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalItemRecipe              CallFunc_GetCurrentRecipe_ReturnValue                            (None)

void UBP_BuildObjectFactoryConveyorComponent_C::OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model, const struct FPalItemRecipe& CallFunc_GetCurrentRecipe_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectFactoryConveyorComponent_C", "OnUpdateRecipe");

	Params::UBP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe_Params Parms{};

	Parms.Model = Model;
	Parms.CallFunc_GetCurrentRecipe_ReturnValue = CallFunc_GetCurrentRecipe_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.OnUpdateCurrentEnergyState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectEnergyModule*   Module                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRequiredEnergy_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPalMapObjectEnergyModuleStatusTypeCallFunc_GetCurrentState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildObjectFactoryConveyorComponent_C::OnUpdateCurrentEnergyState(class UPalMapObjectEnergyModule* Module, bool CallFunc_IsRequiredEnergy_ReturnValue, enum class EPalMapObjectEnergyModuleStatusType CallFunc_GetCurrentState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectFactoryConveyorComponent_C", "OnUpdateCurrentEnergyState");

	Params::UBP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState_Params Parms{};

	Parms.Module = Module;
	Parms.CallFunc_IsRequiredEnergy_ReturnValue = CallFunc_IsRequiredEnergy_ReturnValue;
	Parms.CallFunc_GetCurrentState_ReturnValue = CallFunc_GetCurrentState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.OnReadyOwnerEnergyModule
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelModuleBase*Module                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectEnergyModule*   K2Node_DynamicCast_AsPal_Map_Object_Energy_Module                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildObjectFactoryConveyorComponent_C::OnReadyOwnerEnergyModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectEnergyModule* K2Node_DynamicCast_AsPal_Map_Object_Energy_Module, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectFactoryConveyorComponent_C", "OnReadyOwnerEnergyModule");

	Params::UBP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule_Params Parms{};

	Parms.Model = Model;
	Parms.Module = Module;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Energy_Module = K2Node_DynamicCast_AsPal_Map_Object_Energy_Module;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.SetupByOwner
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    ConveyorMaterialInstance                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConvertItemModel*ConvertItemModel                                                 (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConvertItemModel*K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_K2_GetVectorParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_ConveyorSpeed_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BuildObjectFactoryConveyorComponent_C::SetupByOwner(class UPalMapObjectConcreteModelBase* ConcreteModel, class UMaterialInstanceDynamic* ConveyorMaterialInstance, class UPalMapObjectConvertItemModel* ConvertItemModel, class UPalMapObjectConvertItemModel* K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetObjectName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, double K2Node_VariableSet_ConveyorSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_BuildObjectFactoryConveyorComponent_C", "SetupByOwner");

	Params::UBP_BuildObjectFactoryConveyorComponent_C_SetupByOwner_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;
	Parms.ConveyorMaterialInstance = ConveyorMaterialInstance;
	Parms.ConvertItemModel = ConvertItemModel;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model = K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_K2_GetVectorParameterValue_ReturnValue = CallFunc_K2_GetVectorParameterValue_ReturnValue;
	Parms.K2Node_VariableSet_ConveyorSpeed_ImplicitCast = K2Node_VariableSet_ConveyorSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


