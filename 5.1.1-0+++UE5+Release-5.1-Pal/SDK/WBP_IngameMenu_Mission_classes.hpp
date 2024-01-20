#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x170 (0x5C8 - 0x458)
// WidgetBlueprintGeneratedClass WBP_IngameMenu_Mission.WBP_IngameMenu_Mission_C
class UWBP_IngameMenu_Mission_C : public UPalUIBaseCampTaskBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anm_LevelUp;                                       // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anm_CampInfo;                                      // 0x468(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_LevelNum;                                     // 0x470(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PalTextBlock_C*                    Text_PalNum;                                       // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CommonButton_C*                   WBP_CommonButton;                                  // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionLevelEffect_C*  WBP_IngameMenu_MissionLevelEffect;                 // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionLevelEffect_C*  WBP_IngameMenu_MissionLevelEffect_1;               // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*         WBP_IngameMenu_MissionList;                        // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*         WBP_IngameMenu_MissionList_1;                      // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*         WBP_IngameMenu_MissionList_2;                      // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_IngameMenu_MissionList_C*         WBP_IngameMenu_MissionList_3;                      // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Menu_btn_C*                       WBP_Menu_btn;                                      // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_PalInGameMenuItemSlotButton;                   // 0x4C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_PalInGameMenuItemSlotButton_1;                 // 0x4C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_PalInGameMenuItemSlotButton_2;                 // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PalInGameMenuItemSlotButton_C*    WBP_PalInGameMenuItemSlotButton_3;                 // 0x4D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  TabActionName;                                     // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_IngameMenu_MissionList_C*> MissionList;                                       // 0x4E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FPalBaseCampTaskCheckedData           ChedckedData;                                      // 0x4F8(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FPalBaseCampTaskDataSet               TaskData;                                          // 0x558(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   BuildOBjectNumTaskInfoMsgID;                       // 0x580(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   WorkerNumTaskInfoMsgID;                            // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         CanLevelup;                                        // 0x5A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4317[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastLevel;                                         // 0x5A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TaskUpdateTimer;                                   // 0x5A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ButtonActive;                                      // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_431B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   PalLimitMsgId;                                     // 0x5B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_IngameMenu_Mission_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void UpdateLevelEffectInfo(int32 Level, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue, class FText CallFunc_GetLocalizedTextFromHandle_Text, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FPalOptionWorldSettings& CallFunc_GetOptionWorldSettings_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_IsCampLevelMax_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UPalMasterDataTableAccess_BaseCampLevelData* CallFunc_GetBaseCampLevelDataTableAccess_ReturnValue, const struct FPalBaseCampLevelMasterData& CallFunc_GetLevelInfo_ReturnValue, const struct FPalBaseCampLevelMasterData& CallFunc_GetLevelInfo_ReturnValue_1, int32 CallFunc_Min_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Min_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateCampInfoMax(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_IngameMenu_MissionList_C* CallFunc_Array_Get_Item, class UWBP_IngameMenu_MissionList_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UPalBaseCampModel* CallFunc_GetBaseCampModel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue);
	void UpdateCampInfo(int32 ActiveTaskCount, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_BoolBool_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, class UWBP_IngameMenu_MissionList_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWBP_IngameMenu_MissionList_C* CallFunc_Array_Get_Item_1, class FText CallFunc_GetLocalizedText_ReturnValue, class FText CallFunc_GetLocalizedText_ReturnValue_1, const struct FPalBaseCampTaskDataSet& CallFunc_GetNowLevelTaskData_outTaskData, bool CallFunc_GetNowLevelTaskData_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FPalBaseCampTaskData_BuildObject& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_GetMapObjectName_outName, int32 CallFunc_SelectInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FPalBaseCampTaskCheckedData& CallFunc_CheckTask_outChedckedData, bool CallFunc_CheckTask_ReturnValue, class UWBP_IngameMenu_MissionList_C* CallFunc_Array_Get_Item_3, class UPalBaseCampModel* CallFunc_GetBaseCampModel_ReturnValue, int32 CallFunc_GetLevel_ReturnValue);
	void OnUpdateCampStatus(class UPalBaseCampModel* Model, class UPalBaseCampModel* CallFunc_GetBaseCampModel_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsCampLevelMax_ReturnValue);
	void Finished_37D37A8647957B4095DAF6B247AB02F5();
	void OnSetup();
	void Construct();
	void ClosePanel();
	void BndEvt__WBP_IngameMenu_Mission_WBP_CommonButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void Destruct();
	void BndEvt__WBP_IngameMenu_Mission_WBP_Menu_btn_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_IngameMenu_Mission(int32 EntryPoint, class UPalHUDDispatchParameterBase* CallFunc_GetParam_ReturnValue, class UPalHUDDispatchParameter_BaseCampTask* K2Node_DynamicCast_AsPal_HUDDispatch_Parameter_Base_Camp_Task, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UPalBaseCampModel* CallFunc_GetBaseCampModel_ReturnValue, const struct FPalUIActionBindData& CallFunc_RegisterActionBinding_ReturnValue, int32 CallFunc_GetLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TArray<class UWBP_IngameMenu_MissionList_C*>& K2Node_MakeArray_Array, bool CallFunc_TryBaseCampLevelUp_ReturnValue, bool CallFunc_IsCampLevelMax_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue, class UPalHUDService* CallFunc_GetHUDService_ReturnValue_1, class UWBP_IngameMenu_MissionList_C* CallFunc_Array_Get_Item);
};

}


