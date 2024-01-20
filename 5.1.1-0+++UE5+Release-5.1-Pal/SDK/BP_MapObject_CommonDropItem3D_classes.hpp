#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x3F8 - 0x3A0)
// BlueprintGeneratedClass BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C
class ABP_MapObject_CommonDropItem3D_C : public APalMapObjectDropItem
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       IndicatorOrigin;                                   // 0x3A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x3B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative* BP_InteractableSphere;                             // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       ReleasePower;                                      // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ObtainDelayTime;                                   // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bObtainableByProgress;                             // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3CB4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentLinearDamping;                              // 0x3D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LinearDownSpeed;                                   // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DefaultLinearDamping;                              // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                VisualActorClass;                                  // 0x3F0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, RepNotify, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MapObject_CommonDropItem3D_C* GetDefaultObj();

	void OnRep_VisualActorClass(class UStaticMesh* CallFunc_TryGetItemVisualModelStaticMesh_OutStaticMesh, const struct FTransform& CallFunc_TryGetItemVisualModelStaticMesh_OutComponentTransform, const struct FVector& CallFunc_TryGetItemVisualModelStaticMesh_OutCenterOfMass, class UMaterialInterface* CallFunc_TryGetItemVisualModelStaticMesh_OutMaterialInterface, bool CallFunc_TryGetItemVisualModelStaticMesh_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void ReleaseObject(const struct FVector& Direction, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void SetupStaticMesh(class UStaticMesh* InStaticMesh, const struct FVector& CenterOfMass, class UMaterialInterface* Material, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void SetupVisualInServer(class UPalMapObjectConcreteModelBase* ConcreteModel, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalMapObjectDropItemModel* K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model, bool K2Node_DynamicCast_bSuccess, const struct FPalItemData& CallFunc_GetItemData_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, TSoftClassPtr<class AActor> CallFunc_GetVisualBlueprintClass_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void OnLoaded_857256B349A5E9E377896489F9AD883E(TSubclassOf<class UObject> Loaded);
	void ReceiveBeginPlay();
	void SetItemModelInServer(TSoftClassPtr<class AActor> VisualModel);
	void BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveTick(float DeltaSeconds);
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model);
	void ExecuteUbergraph_BP_MapObject_CommonDropItem3D(int32 EntryPoint, class UPalMapObjectConcreteModelBase* K2Node_CustomEvent_Model, class UPalMapObjectDropItemModel* K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IPalInteractiveObjectComponentInterface> CallFunc_EnableTriggerInteract_self_CastInput, TSoftClassPtr<class AActor> K2Node_CustomEvent_VisualModel, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_DeltaSeconds, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, float CallFunc_GetLinearDamping_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, float CallFunc_SetLinearDamping_InDamping_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetLinearDamping_InDamping_ImplicitCast_1, double K2Node_VariableSet_CurrentLinearDamping_ImplicitCast);
};

}


