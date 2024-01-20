#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x678 - 0x660)
// BlueprintGeneratedClass BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C
class UBP_BuildObjectFactoryConveyorComponent_C : public UPalItemFlowSplineComponent
{
public:
	class UMaterialInstanceDynamic*              ConveyerDynamicMaterialInstance;                   // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       ConveyorSpeed;                                     // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ScrollMaterialParametername;                       // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_BuildObjectFactoryConveyorComponent_C* GetDefaultObj();

	void SetRunningConveyor(bool bOn, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_MakeColor_G_ImplicitCast);
	void OnUpdateRecipe(class UPalMapObjectConvertItemModel* Model, const struct FPalItemRecipe& CallFunc_GetCurrentRecipe_ReturnValue);
	void OnUpdateCurrentEnergyState(class UPalMapObjectEnergyModule* Module, bool CallFunc_IsRequiredEnergy_ReturnValue, enum class EPalMapObjectEnergyModuleStatusType CallFunc_GetCurrentState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnReadyOwnerEnergyModule(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalMapObjectEnergyModule* K2Node_DynamicCast_AsPal_Map_Object_Energy_Module, bool K2Node_DynamicCast_bSuccess);
	void SetupByOwner(class UPalMapObjectConcreteModelBase* ConcreteModel, class UMaterialInstanceDynamic* ConveyorMaterialInstance, class UPalMapObjectConvertItemModel* ConvertItemModel, class UPalMapObjectConvertItemModel* K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetObjectName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, double K2Node_VariableSet_ConveyorSpeed_ImplicitCast);
};

}


