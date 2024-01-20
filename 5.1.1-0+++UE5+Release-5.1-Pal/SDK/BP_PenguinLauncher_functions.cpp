#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PenguinLauncher.BP_PenguinLauncher_C
// (Actor)

class UClass* ABP_PenguinLauncher_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PenguinLauncher_C");

	return Clss;
}


// BP_PenguinLauncher_C BP_PenguinLauncher.Default__BP_PenguinLauncher_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PenguinLauncher_C* ABP_PenguinLauncher_C::GetDefaultObj()
{
	static class ABP_PenguinLauncher_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PenguinLauncher_C*>(ABP_PenguinLauncher_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.GetWeaponAttacker
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)

class AActor* ABP_PenguinLauncher_C::GetWeaponAttacker()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "GetWeaponAttacker");

	Params::ABP_PenguinLauncher_C_GetWeaponAttacker_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.UpdateBulletTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Progress                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             InterpolTimeSec                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_RLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RLerp_Alpha_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VLerp_Alpha_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PenguinLauncher_C::UpdateBulletTransform(double Delta, double Progress, double InterpolTimeSec, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, float CallFunc_RLerp_Alpha_ImplicitCast, float CallFunc_VLerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "UpdateBulletTransform");

	Params::ABP_PenguinLauncher_C_UpdateBulletTransform_Params Parms{};

	Parms.Delta = Delta;
	Parms.Progress = Progress;
	Parms.InterpolTimeSec = InterpolTimeSec;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_RLerp_ReturnValue = CallFunc_RLerp_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_RLerp_Alpha_ImplicitCast = CallFunc_RLerp_Alpha_ImplicitCast;
	Parms.CallFunc_VLerp_Alpha_ImplicitCast = CallFunc_VLerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.SetDisplayReloadCompleted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PenguinLauncher_C::SetDisplayReloadCompleted(bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "SetDisplayReloadCompleted");

	Params::ABP_PenguinLauncher_C_SetDisplayReloadCompleted_Params Parms{};

	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.SetDisplayReloadStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     StartLocation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    StartRotation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class APalCharacter*               CallFunc_GetOwnerCharacter_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalSkeletalMeshComponent*   CallFunc_GetMainMesh_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PenguinLauncher_C::SetDisplayReloadStart(const struct FVector& StartLocation, const struct FRotator& StartRotation, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, class APalCharacter* CallFunc_GetOwnerCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "SetDisplayReloadStart");

	Params::ABP_PenguinLauncher_C_SetDisplayReloadStart_Params Parms{};

	Parms.StartLocation = StartLocation;
	Parms.StartRotation = StartRotation;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = CallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_GetOwnerCharacter_ReturnValue = CallFunc_GetOwnerCharacter_ReturnValue;
	Parms.CallFunc_GetMainMesh_ReturnValue = CallFunc_GetMainMesh_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.GetWeaponDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ABP_PenguinLauncher_C::GetWeaponDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "GetWeaponDamage");

	Params::ABP_PenguinLauncher_C_GetWeaponDamage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.ChangeTransformForRocketReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PenguinLauncher_C::ChangeTransformForRocketReload(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "ChangeTransformForRocketReload");

	Params::ABP_PenguinLauncher_C_ChangeTransformForRocketReload_Params Parms{};

	Parms.Location = Location;
	Parms.Rotation = Rotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.ChangeTransformForRocketWhenReloadIsDone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Lotation                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_PenguinLauncher_C::ChangeTransformForRocketWhenReloadIsDone(const struct FVector& Location, const struct FRotator& Lotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "ChangeTransformForRocketWhenReloadIsDone");

	Params::ABP_PenguinLauncher_C_ChangeTransformForRocketWhenReloadIsDone_Params Parms{};

	Parms.Location = Location;
	Parms.Lotation = Lotation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.GetBulletClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                      NewParam                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PenguinLauncher_C::GetBulletClass(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "GetBulletClass");

	Params::ABP_PenguinLauncher_C_GetBulletClass_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.OnPullTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PenguinLauncher_C::OnPullTrigger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "OnPullTrigger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.ShootComplated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_PenguinLauncher_C::ShootComplated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "ShootComplated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.OnAttachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttachActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PenguinLauncher_C::OnAttachWeapon(class AActor* AttachActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "OnAttachWeapon");

	Params::ABP_PenguinLauncher_C_OnAttachWeapon_Params Parms{};

	Parms.AttachActor = AttachActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PenguinLauncher_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "ReceiveTick");

	Params::ABP_PenguinLauncher_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.SetWeaponDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Damageam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PenguinLauncher_C::SetWeaponDamage(int32 Damageam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "SetWeaponDamage");

	Params::ABP_PenguinLauncher_C_SetWeaponDamage_Params Parms{};

	Parms.Damageam = Damageam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.SetAttacker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttackerPal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PenguinLauncher_C::SetAttacker(class AActor* AttackerPal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "SetAttacker");

	Params::ABP_PenguinLauncher_C_SetAttacker_Params Parms{};

	Parms.AttackerPal = AttackerPal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.OnWeaponNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EWeaponNotifyType       Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PenguinLauncher_C::OnWeaponNotify(enum class EWeaponNotifyType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "OnWeaponNotify");

	Params::ABP_PenguinLauncher_C_OnWeaponNotify_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.OnReloadStart
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_PenguinLauncher_C::OnReloadStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "OnReloadStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_PenguinLauncher.BP_PenguinLauncher_C.ExecuteUbergraph_BP_PenguinLauncher
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_attachActor                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetShootInterval_Time                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Damageam                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_AttackerPal                                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EWeaponNotifyType       K2Node_Event_type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateBulletTransform_delta_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PenguinLauncher_C::ExecuteUbergraph_BP_PenguinLauncher(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_attachActor, double CallFunc_GetShootInterval_Time, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float K2Node_Event_DeltaSeconds, int32 K2Node_Event_Damageam, class AActor* K2Node_Event_AttackerPal, enum class EWeaponNotifyType K2Node_Event_type, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, double CallFunc_UpdateBulletTransform_delta_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PenguinLauncher_C", "ExecuteUbergraph_BP_PenguinLauncher");

	Params::ABP_PenguinLauncher_C_ExecuteUbergraph_BP_PenguinLauncher_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_attachActor = K2Node_Event_attachActor;
	Parms.CallFunc_GetShootInterval_Time = CallFunc_GetShootInterval_Time;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_Event_Damageam = K2Node_Event_Damageam;
	Parms.K2Node_Event_AttackerPal = K2Node_Event_AttackerPal;
	Parms.K2Node_Event_type = K2Node_Event_type;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;
	Parms.CallFunc_UpdateBulletTransform_delta_ImplicitCast = CallFunc_UpdateBulletTransform_delta_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


