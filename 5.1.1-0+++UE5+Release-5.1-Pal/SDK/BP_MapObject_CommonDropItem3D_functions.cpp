#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C
// (Actor)

class UClass* ABP_MapObject_CommonDropItem3D_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MapObject_CommonDropItem3D_C");

	return Clss;
}


// BP_MapObject_CommonDropItem3D_C BP_MapObject_CommonDropItem3D.Default__BP_MapObject_CommonDropItem3D_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MapObject_CommonDropItem3D_C* ABP_MapObject_CommonDropItem3D_C::GetDefaultObj()
{
	static class ABP_MapObject_CommonDropItem3D_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MapObject_CommonDropItem3D_C*>(ABP_MapObject_CommonDropItem3D_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.OnRep_VisualActorClass
// (HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 CallFunc_TryGetItemVisualModelStaticMesh_OutStaticMesh           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TryGetItemVisualModelStaticMesh_OutComponentTransform   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_TryGetItemVisualModelStaticMesh_OutCenterOfMass         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_TryGetItemVisualModelStaticMesh_OutMaterialInterface    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetItemVisualModelStaticMesh_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::OnRep_VisualActorClass(class UStaticMesh* CallFunc_TryGetItemVisualModelStaticMesh_OutStaticMesh, const struct FTransform& CallFunc_TryGetItemVisualModelStaticMesh_OutComponentTransform, const struct FVector& CallFunc_TryGetItemVisualModelStaticMesh_OutCenterOfMass, class UMaterialInterface* CallFunc_TryGetItemVisualModelStaticMesh_OutMaterialInterface, bool CallFunc_TryGetItemVisualModelStaticMesh_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "OnRep_VisualActorClass");

	Params::ABP_MapObject_CommonDropItem3D_C_OnRep_VisualActorClass_Params Parms{};

	Parms.CallFunc_TryGetItemVisualModelStaticMesh_OutStaticMesh = CallFunc_TryGetItemVisualModelStaticMesh_OutStaticMesh;
	Parms.CallFunc_TryGetItemVisualModelStaticMesh_OutComponentTransform = CallFunc_TryGetItemVisualModelStaticMesh_OutComponentTransform;
	Parms.CallFunc_TryGetItemVisualModelStaticMesh_OutCenterOfMass = CallFunc_TryGetItemVisualModelStaticMesh_OutCenterOfMass;
	Parms.CallFunc_TryGetItemVisualModelStaticMesh_OutMaterialInterface = CallFunc_TryGetItemVisualModelStaticMesh_OutMaterialInterface;
	Parms.CallFunc_TryGetItemVisualModelStaticMesh_ReturnValue = CallFunc_TryGetItemVisualModelStaticMesh_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ReleaseObject
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::ReleaseObject(const struct FVector& Direction, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "ReleaseObject");

	Params::ABP_MapObject_CommonDropItem3D_C_ReleaseObject_Params Parms{};

	Parms.Direction = Direction;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.SetupStaticMesh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 InStaticMesh                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CenterOfMass                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Material                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::SetupStaticMesh(class UStaticMesh* InStaticMesh, const struct FVector& CenterOfMass, class UMaterialInterface* Material, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "SetupStaticMesh");

	Params::ABP_MapObject_CommonDropItem3D_C_SetupStaticMesh_Params Parms{};

	Parms.InStaticMesh = InStaticMesh;
	Parms.CenterOfMass = CenterOfMass;
	Parms.Material = Material;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.SetupVisualInServer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalItemIDManager*           CallFunc_GetItemIDManager_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDropItemModel*  K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPalItemData                CallFunc_GetItemData_ReturnValue                                 (ConstParm, NoDestructor)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// TSoftClassPtr<class AActor>        CallFunc_GetVisualBlueprintClass_ReturnValue                     (UObjectWrapper, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::SetupVisualInServer(class UPalMapObjectConcreteModelBase* ConcreteModel, class UPalItemIDManager* CallFunc_GetItemIDManager_ReturnValue, class UPalMapObjectDropItemModel* K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model, bool K2Node_DynamicCast_bSuccess, const struct FPalItemData& CallFunc_GetItemData_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue, TSoftClassPtr<class AActor> CallFunc_GetVisualBlueprintClass_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "SetupVisualInServer");

	Params::ABP_MapObject_CommonDropItem3D_C_SetupVisualInServer_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;
	Parms.CallFunc_GetItemIDManager_ReturnValue = CallFunc_GetItemIDManager_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model = K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetItemData_ReturnValue = CallFunc_GetItemData_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.CallFunc_GetVisualBlueprintClass_ReturnValue = CallFunc_GetVisualBlueprintClass_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.OnLoaded_857256B349A5E9E377896489F9AD883E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::OnLoaded_857256B349A5E9E377896489F9AD883E(TSubclassOf<class UObject> Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "OnLoaded_857256B349A5E9E377896489F9AD883E");

	Params::ABP_MapObject_CommonDropItem3D_C_OnLoaded_857256B349A5E9E377896489F9AD883E_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_MapObject_CommonDropItem3D_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.SetItemModelInServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class AActor>        VisualModel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::SetItemModelInServer(TSoftClassPtr<class AActor> VisualModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "SetItemModelInServer");

	Params::ABP_MapObject_CommonDropItem3D_C_SetItemModelInServer_Params Parms{};

	Parms.VisualModel = VisualModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_MapObject_CommonDropItem3D_C::BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	Params::ABP_MapObject_CommonDropItem3D_C_BndEvt__BP_MapObject_CommonDropItem3D_StaticMesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "ReceiveTick");

	Params::ABP_MapObject_CommonDropItem3D_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.BP_OnSetConcreteModel
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*ConcreteModel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "BP_OnSetConcreteModel");

	Params::ABP_MapObject_CommonDropItem3D_C_BP_OnSetConcreteModel_Params Parms{};

	Parms.ConcreteModel = ConcreteModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.OnSetConcreteModel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalMapObjectConcreteModelBase*Model                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::OnSetConcreteModel(class UPalMapObjectConcreteModelBase* Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "OnSetConcreteModel");

	Params::ABP_MapObject_CommonDropItem3D_C_OnSetConcreteModel_Params Parms{};

	Parms.Model = Model;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_MapObject_CommonDropItem3D.BP_MapObject_CommonDropItem3D_C.ExecuteUbergraph_BP_MapObject_CommonDropItem3D
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_CustomEvent_Model                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectDropItemModel*  K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IPalInteractiveObjectComponentInterface>CallFunc_EnableTriggerInteract_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class AActor>        K2Node_CustomEvent_VisualModel                                   (HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_HitComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_NormalImpulse                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_Hit                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsActor                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// float                              CallFunc_GetLinearDamping_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalMapObjectConcreteModelBase*K2Node_Event_ConcreteModel                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLinearDamping_InDamping_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetLinearDamping_InDamping_ImplicitCast_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_CurrentLinearDamping_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_MapObject_CommonDropItem3D_C::ExecuteUbergraph_BP_MapObject_CommonDropItem3D(int32 EntryPoint, class UPalMapObjectConcreteModelBase* K2Node_CustomEvent_Model, class UPalMapObjectDropItemModel* K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class IPalInteractiveObjectComponentInterface> CallFunc_EnableTriggerInteract_self_CastInput, TSoftClassPtr<class AActor> K2Node_CustomEvent_VisualModel, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_DeltaSeconds, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, double CallFunc_Multiply_DoubleDouble_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, float CallFunc_GetLinearDamping_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UPalMapObjectConcreteModelBase* K2Node_Event_ConcreteModel, float CallFunc_SetLinearDamping_InDamping_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_SetLinearDamping_InDamping_ImplicitCast_1, double K2Node_VariableSet_CurrentLinearDamping_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_MapObject_CommonDropItem3D_C", "ExecuteUbergraph_BP_MapObject_CommonDropItem3D");

	Params::ABP_MapObject_CommonDropItem3D_C_ExecuteUbergraph_BP_MapObject_CommonDropItem3D_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Model = K2Node_CustomEvent_Model;
	Parms.K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model = K2Node_DynamicCast_AsPal_Map_Object_Drop_Item_Model;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EnableTriggerInteract_self_CastInput = CallFunc_EnableTriggerInteract_self_CastInput;
	Parms.K2Node_CustomEvent_VisualModel = K2Node_CustomEvent_VisualModel;
	Parms.K2Node_ComponentBoundEvent_HitComponent = K2Node_ComponentBoundEvent_HitComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_NormalImpulse = K2Node_ComponentBoundEvent_NormalImpulse;
	Parms.K2Node_ComponentBoundEvent_Hit = K2Node_ComponentBoundEvent_Hit;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsActor = K2Node_ClassDynamicCast_AsActor;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_GetLinearDamping_ReturnValue = CallFunc_GetLinearDamping_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = CallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.K2Node_Event_ConcreteModel = K2Node_Event_ConcreteModel;
	Parms.CallFunc_SetLinearDamping_InDamping_ImplicitCast = CallFunc_SetLinearDamping_InDamping_ImplicitCast;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetLinearDamping_InDamping_ImplicitCast_1 = CallFunc_SetLinearDamping_InDamping_ImplicitCast_1;
	Parms.K2Node_VariableSet_CurrentLinearDamping_ImplicitCast = K2Node_VariableSet_CurrentLinearDamping_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


