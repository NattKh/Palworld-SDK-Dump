#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x3A0 - 0x278)
// WidgetBlueprintGeneratedClass WBP_IngameMenu_Repair.WBP_IngameMenu_Repair_C
class UWBP_IngameMenu_Repair_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                          CanvasPanelDurable;                                // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DurableFrameB;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1007;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_TargetItemIcon;                              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayMaterialHead;                               // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Durability;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_RepairTargetItemName;                         // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_TargetItemInfo;                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_RepairAllButton_C*     WBP_IngameMenu_RepairAllButton;                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_RepairButton_C*        WBP_IngameMenu_RepairButton;                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem;               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_1;             // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_2;             // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_3;             // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenuConstruction_InfoItem_C* WBP_IngameMenuConstruction_InfoItem_4;             // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_ItemSlotButton_BodyArmor;                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_ItemSlotButton_HeadArmor;                      // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_ItemSlotButton_Shield;                         // 0x308(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_ItemSlotButton_Weapon_00;                      // 0x310(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_ItemSlotButton_Weapon_01;                      // 0x318(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_ItemSlotButton_Weapon_02;                      // 0x320(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_ItemSlotButton_Weapon_03;                      // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalPlayerInventoryScrollList_C*   WBP_PalPlayerInventoryScrollList;                  // 0x338(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnClickedCloseButton;                              // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_PalInGameMenuItemSlotButton_C*> WeaponSlotArray;                                   // 0x350(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnClickedAnyItemSlot;                              // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class UWBP_IngameMenuConstruction_InfoItem_C*> MaterialInfoArray;                                 // 0x370(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            OnClickedRepairButton;                             // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnClickedRepairAllButton;                          // 0x390(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_IngameMenu_Repair_C* GetDefaultObj();

	void OnUpdateItemDurability(double MaxDurability, double NowDurability, class UWBP_PalItemSlotButtonBase_C* SelfWidget, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, bool CallFunc_IsRepairableItem_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void SetEnableRepairAllButton(bool IsEnableButton, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void HideRepairItemInfo(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_IngameMenuConstruction_InfoItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void DisplayTargetItem(class UPalItemSlot* TargetItemSlot, class UPalDynamicItemDataBase* CallFunc_TryGetDynamicItemData_OutDynamicItemData, bool CallFunc_TryGetDynamicItemData_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IPalObjectDurabilityInterface> K2Node_DynamicCast_AsPal_Object_Durability_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMaxDurability_ReturnValue, float CallFunc_GetDurability_ReturnValue, const struct FPalItemId& CallFunc_GetItemId_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsRepairableItem_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void SetEnableRepairButton(bool IsEnableButton);
	void DisplayRequireMaterials(TArray<struct FPalStaticItemIdAndNum>& Materials, int32 HasNum, const TArray<struct FPalStaticItemIdAndNum>& ControllableMaterialNum, const TArray<class FName>& RequireMaterialStaticIDArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_3, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectLocalPlayerControllableItemInfos_OutItemInfos, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FPalStaticItemIdAndNum& CallFunc_Array_Get_Item_2, class UWBP_IngameMenuConstruction_InfoItem_C* CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_NameName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, class UWBP_IngameMenuConstruction_InfoItem_C* CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_4);
	void IsRepairable();
	void OnClickedInventory_Internal(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType);
	void GetDefaultFocusTarget(class UWidget** TargetWidget);
	void OnClickedSlot_Internal(class UWBP_PalItemSlotButtonBase_C* SlotWidget, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot);
	void SetupItemSlot(const TArray<class UWBP_PalItemSlotButtonBase_C*>& TmpItemSlotArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, class UBP_PalInventoryModel_C* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_PalInGameMenuItemSlotButton_C* K2Node_DynamicCast_AsWBP_Pal_in_Game_Menu_Item_Slot_Button, bool K2Node_DynamicCast_bSuccess, TArray<class UWBP_PalItemSlotButtonBase_C*>& K2Node_MakeArray_Array, TArray<class UWBP_PalItemSlotButtonBase_C*>& CallFunc_GetAllItemSlotButton_Slots, class UWBP_PalItemSlotButtonBase_C* CallFunc_Array_Get_Item_1, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, int32 CallFunc_Array_Length_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<enum class EPalPlayerInventoryType>& K2Node_MakeArray_Array_1, bool CallFunc_FilteringFromInventoryType_IsEmptyDisplaySlot, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, class UWBP_PalInGameMenuItemSlotButton_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UPalPlayerInventoryData* CallFunc_GetLocalInventoryData_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPalItemSlot* CallFunc_TryGetItemSlotFromEquipmentType_outSlot, bool CallFunc_TryGetItemSlotFromEquipmentType_ReturnValue, class UPalItemSlot* CallFunc_TryGetItemSlotFromEquipmentType_outSlot_1, bool CallFunc_TryGetItemSlotFromEquipmentType_ReturnValue_1, class UPalItemSlot* CallFunc_TryGetItemSlotFromEquipmentType_outSlot_2, bool CallFunc_TryGetItemSlotFromEquipmentType_ReturnValue_2, class UPalItemContainer* CallFunc_TryGetContainerFromInventoryType_outContainer, bool CallFunc_TryGetContainerFromInventoryType_ReturnValue, class UPalItemSlot* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
	void Setup();
	void BndEvt__WBP_IngameMenu_Repair_WBP_Menu_btn_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_Repair_WBP_PalPlayerInventoryScrollList_K2Node_ComponentBoundEvent_1_OnLeftClickedSlot__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* ButtonBase, enum class EPalItemSlotPressType PressType);
	void OnInitialized();
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_00_K2Node_ComponentBoundEvent_2_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_01_K2Node_ComponentBoundEvent_3_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_02_K2Node_ComponentBoundEvent_4_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Weapon_03_K2Node_ComponentBoundEvent_5_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_HeadArmor_K2Node_ComponentBoundEvent_6_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_BodyArmor_K2Node_ComponentBoundEvent_7_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_ItemSlotButton_Shield_K2Node_ComponentBoundEvent_8_OnClickedButton__DelegateSignature(class UWBP_PalItemSlotButtonBase_C* Widget, enum class EPalItemSlotPressType PressType);
	void BndEvt__WBP_IngameMenu_Repair_WBP_IngameMenu_RepairButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
	void BndEvt__WBP_IngameMenu_Repair_WBP_IngameMenu_RepairAllButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_IngameMenu_Repair(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_buttonBase, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType_7, class UPalItemSlot* CallFunc_GetTargetSlot_targetSlot, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_6, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType_6, TArray<class UWBP_PalInGameMenuItemSlotButton_C*>& K2Node_MakeArray_Array, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_5, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType_5, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_4, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType_4, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_3, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType_3, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_2, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType_2, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget_1, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType_1, class UWBP_PalItemSlotButtonBase_C* K2Node_ComponentBoundEvent_Widget, enum class EPalItemSlotPressType K2Node_ComponentBoundEvent_pressType, TArray<class UWBP_IngameMenuConstruction_InfoItem_C*>& K2Node_MakeArray_Array_1, TArray<class UWBP_PalInGameMenuItemSlotButton_C*>& K2Node_MakeArray_Array_2, int32 CallFunc_Array_Length_ReturnValue, class UWBP_PalInGameMenuItemSlotButton_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void OnClickedRepairAllButton__DelegateSignature();
	void OnClickedRepairButton__DelegateSignature();
	void OnClickedAnyItemSlot__DelegateSignature(class UPalItemSlot* ItemSlot);
	void OnClickedCloseButton__DelegateSignature();
};

}

