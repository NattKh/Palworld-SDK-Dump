#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x89 (0x4C1 - 0x438)
// WidgetBlueprintGeneratedClass WBP_RepairEquipment.WBP_RepairEquipment_C
class UWBP_RepairEquipment_C : public UPalUIRepairItemBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCircularThrobber*                     CircularThrobber_20;                               // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_13;                                          // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Repairing;                                 // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_Repair_C*              WBP_IngameMenu_Repair;                             // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UPalItemSlot*>                  RepairTargetItemSlots;                             // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPalDataTableRowName_UIInputAction    RepairInputAction;                                 // 0x470(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalUIActionBindData                  RepairInputActionHandle;                           // 0x478(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        Pad_A59[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   RepairFailedMsgID;                                 // 0x480(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FTimerHandle                          RepairTimeoutTimerhandle;                          // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FPalDataTableRowName_UIInputAction    RepairAllInputAction;                              // 0x498(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UPalItemSlot*>                  CollectedAllRepairableSlotArray;                   // 0x4A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FPalStaticItemIdAndNum>        CollectedAllRepairMaterials;                       // 0x4B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CanAllRepair;                                      // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RepairEquipment_C* GetDefaultObj();

	void TryRepairAll();
	void OnClosedRepairAllWindow(class UPalHUDDispatchParameterBase* Param, class UBP_RepairAllWindowDispatchParameter_C* K2Node_DynamicCast_AsBP_Repair_All_Window_Dispatch_Parameter, bool K2Node_DynamicCast_bSuccess);
	void OpenRepairAllWindow(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UBP_RepairAllWindowDispatchParameter_C* CallFunc_SpawnObject_ReturnValue, const struct FGuid& CallFunc_Push_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget(class UWidget* CallFunc_GetDefaultFocusTarget_TargetWidget);
	void OnTimer_TimeoutRepair();
	void EndRepair(class UWidget* CallFunc_GetDefaultFocusTarget_TargetWidget);
	void StartRepair(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void Setup(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue);
	void RefreshUI(TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectRepairInfo_OutRequiredMaterials, bool CallFunc_CollectRepairInfo_OutCanRepair, TArray<class UPalItemSlot*>& CallFunc_CollectRepairableSlot_OutRepairableSlots);
	void Construct();
	void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_0_OnClickedCloseButton__DelegateSignature();
	void OnSetup();
	void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_1_OnClickedAnyItemSlot__DelegateSignature(class UPalItemSlot* ItemSlot);
	void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_2_OnClickedRepairButton__DelegateSignature();
	void OnRecievedRepairResult(bool IsSuccess);
	void Destruct();
	void BndEvt__WBP_RepairEquipment_WBP_IngameMenu_Repair_K2Node_ComponentBoundEvent_3_OnClickedRepairAllButton__DelegateSignature();
	void ExecuteUbergraph_WBP_RepairEquipment(int32 EntryPoint, class UPalItemSlot* K2Node_ComponentBoundEvent_ItemSlot, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, TArray<struct FPalStaticItemIdAndNum>& CallFunc_CollectRepairInfo_OutRequiredMaterials, bool CallFunc_CollectRepairInfo_OutCanRepair, bool CallFunc_IsRepairableItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, bool K2Node_Event_IsSuccess, class UPalLogManager* CallFunc_GetLogManager_ReturnValue, const struct FPalLogAdditionalData& K2Node_MakeStruct_PalLogAdditionalData, class FText CallFunc_GetLocalizedTextFromHandle_Text, const struct FGuid& CallFunc_AddLog_ReturnValue);
};

}


