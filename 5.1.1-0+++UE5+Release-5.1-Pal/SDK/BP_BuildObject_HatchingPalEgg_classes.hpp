#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x5E8 - 0x570)
// BlueprintGeneratedClass BP_BuildObject_HatchingPalEgg.BP_BuildObject_HatchingPalEgg_C
class ABP_BuildObject_HatchingPalEgg_C : public APalBuildObject
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x570(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalMapObjectHatchingEggParameterComponent* PalMapObjectHatchingEggParameter;                  // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_TemperatureComponent_C*            BP_TemperatureComponent;                           // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                  PalEggChildActor;                                  // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_EggHatchingMachine;                             // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                 BP_InteractableBox;                                // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BuildWorkableBounds;                               // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         CheckOverlapCollision;                             // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Root;                                              // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectHatchingEggModel*         HatchingEggModel;                                  // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     PalGetEffect;                                      // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PalGetEffectOffset;                                // 0x5C8(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                EggActorClass;                                     // 0x5E0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_BuildObject_HatchingPalEgg_C* GetDefaultObj();

	void OnRep_EggActorClass();
	void GetTemperatureDiff(int32* Diff, int32 CallFunc_GetCurrentTemperature_CurrentTemperature, class ABP_Item_Anim_PalEgg_Base_C* K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetHatchingTemperature_Temperature, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue);
	void ResetHatchingSpeed(bool CallFunc_IsValid_ReturnValue);
	void UpdateHatchingSpeed(float CallFunc_GetDefaultAutoWorkAmountBySec_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetTemperatureDiff_Diff, int32 CallFunc_Abs_Int_ReturnValue, class UPalGameSetting* CallFunc_GetGameSetting_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_UpdateWorkAmountBySec_NewWorkAmountBySec_ImplicitCast);
	void GetCurrentTemperature(int32* CurrentTemperature, int32 CallFunc_GetCurrentTemperature_ReturnValue);
	void SpawnGetPalEffect(const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue);
	void SetEggAnimPlayState(bool IsPlay, class ABP_Item_Anim_PalEgg_Base_C* K2Node_DynamicCast_AsBP_Item_Anim_Pal_Egg_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void SetupItemForeach(class UPalItemSlot* Slot, int32 Index, bool CallFunc_IsValid_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FPalItemData& CallFunc_GetItemData_ReturnValue, bool CallFunc_IsEmpty_ReturnValue);
	void OnUpdateHatchedCharacter(class UPalMapObjectHatchingEggModel* Model, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnUpdateItemContainer(class UPalItemContainer* Container, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UPalItemSlot* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnSetConcreteModelAvailableInternal(class UPalMapObjectConcreteModelBase* ConcreteModel, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPalInteractDelegates* CallFunc_Delegates_ReturnValue, class UPalMapObjectHatchingEggModel* K2Node_DynamicCast_AsPal_Map_Object_Hatching_Egg_Model, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UPalMapObjectItemContainerModule* CallFunc_GetItemContainerModule_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue, class UPalItemContainer* CallFunc_GetContainer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue_1);
	void OnLoaded_B204AE4F4F695277751BD0B2AE4D80AE(TSubclassOf<class UObject> Loaded);
	void OnAvailable_BlueprintImpl();
	void LoadEggMeshModel(TSoftClassPtr<class AActor> EggActorClass);
	void OnStartTriggerInteract(class AActor* Other, enum class EPalInteractiveObjectIndicatorType IndicatorType);
	void OnEndTriggerInteract(class AActor* Other, enum class EPalInteractiveObjectIndicatorType IndicatorType);
	void On_Change_Temperature(int32 NextTemperature);
	void OnSetConcreteModelAvailable(class UPalMapObjectConcreteModelBase* Model);
	void ExecuteUbergraph_BP_BuildObject_HatchingPalEgg(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSoftClassPtr<class AActor> K2Node_CustomEvent_EggActorClass, class AActor* K2Node_CustomEvent_Other_1, enum class EPalInteractiveObjectIndicatorType K2Node_CustomEvent_IndicatorType_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* K2Node_CustomEvent_Other, enum class EPalInteractiveObjectIndicatorType K2Node_CustomEvent_IndicatorType, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 K2Node_CustomEvent_NextTemperature, class UPalMapObjectConcreteModelBase* K2Node_CustomEvent_Model, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded);
};

}


