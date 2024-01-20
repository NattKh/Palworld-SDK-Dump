#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C
// (Actor)

class UClass* ABP_SkillEffect_Unique_HawkBird_Storm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillEffect_Unique_HawkBird_Storm_C");

	return Clss;
}


// BP_SkillEffect_Unique_HawkBird_Storm_C BP_SkillEffect_Unique_HawkBird_Storm.Default__BP_SkillEffect_Unique_HawkBird_Storm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkillEffect_Unique_HawkBird_Storm_C* ABP_SkillEffect_Unique_HawkBird_Storm_C::GetDefaultObj()
{
	static class ABP_SkillEffect_Unique_HawkBird_Storm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkillEffect_Unique_HawkBird_Storm_C*>(ABP_SkillEffect_Unique_HawkBird_Storm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C.SpawnTornado
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             SpawnSideOffset                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             SpawnFrontOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         SpawnEffect                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorScale3D_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         K2Node_DynamicCast_AsPal_Skill_Effect_Base                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_AdjustActorToFloor_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_HawkBird_Storm_C::SpawnTornado(double SpawnSideOffset, double SpawnFrontOffset, class APalSkillEffectBase** SpawnEffect, const struct FVector& CallFunc_GetActorScale3D_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetActorScale3D_ReturnValue_2, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, const struct FVector& CallFunc_GetRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class APalSkillEffectBase* K2Node_DynamicCast_AsPal_Skill_Effect_Base, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_AdjustActorToFloor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_HawkBird_Storm_C", "SpawnTornado");

	Params::ABP_SkillEffect_Unique_HawkBird_Storm_C_SpawnTornado_Params Parms{};

	Parms.SpawnSideOffset = SpawnSideOffset;
	Parms.SpawnFrontOffset = SpawnFrontOffset;
	Parms.CallFunc_GetActorScale3D_ReturnValue = CallFunc_GetActorScale3D_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorScale3D_ReturnValue_1 = CallFunc_GetActorScale3D_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetActorScale3D_ReturnValue_2 = CallFunc_GetActorScale3D_ReturnValue_2;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_1 = CallFunc_K2_GetActorRotation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue_2 = CallFunc_K2_GetActorRotation_ReturnValue_2;
	Parms.CallFunc_GetRightVector_ReturnValue = CallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsPal_Skill_Effect_Base = K2Node_DynamicCast_AsPal_Skill_Effect_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_AdjustActorToFloor_ReturnValue = CallFunc_AdjustActorToFloor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SpawnEffect != nullptr)
		*SpawnEffect = Parms.SpawnEffect;

}


// Function BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C.GetDesiredLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TargetLocation2D                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   NormalizedDirection2D                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   NewDirection                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NewLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   NewNormalizedDirection                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   LocalActorLocation2D                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   LocalNormalizedDirectionForTarget                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearlyZero2D_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DotProduct2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetRotated2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Normal2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CrossProduct2D_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRotated2D_AngleDeg_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_HawkBird_Storm_C::GetDesiredLocation(double DeltaTime, const struct FVector2D& TargetLocation2D, const struct FVector2D& NormalizedDirection2D, struct FVector2D* NewDirection, struct FVector* NewLocation, const struct FVector2D& NewNormalizedDirection, double Temp, const struct FVector2D& LocalActorLocation2D, const struct FVector2D& LocalNormalizedDirectionForTarget, bool CallFunc_IsNearlyZero2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_DotProduct2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, double CallFunc_CrossProduct2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_HawkBird_Storm_C", "GetDesiredLocation");

	Params::ABP_SkillEffect_Unique_HawkBird_Storm_C_GetDesiredLocation_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.TargetLocation2D = TargetLocation2D;
	Parms.NormalizedDirection2D = NormalizedDirection2D;
	Parms.NewNormalizedDirection = NewNormalizedDirection;
	Parms.Temp = Temp;
	Parms.LocalActorLocation2D = LocalActorLocation2D;
	Parms.LocalNormalizedDirectionForTarget = LocalNormalizedDirectionForTarget;
	Parms.CallFunc_IsNearlyZero2D_ReturnValue = CallFunc_IsNearlyZero2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_DotProduct2D_ReturnValue = CallFunc_DotProduct2D_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_GetRotated2D_ReturnValue = CallFunc_GetRotated2D_ReturnValue;
	Parms.CallFunc_Normal2D_ReturnValue = CallFunc_Normal2D_ReturnValue;
	Parms.CallFunc_CrossProduct2D_ReturnValue = CallFunc_CrossProduct2D_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_GetRotated2D_AngleDeg_ImplicitCast = CallFunc_GetRotated2D_AngleDeg_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (NewDirection != nullptr)
		*NewDirection = std::move(Parms.NewDirection);

	if (NewLocation != nullptr)
		*NewLocation = std::move(Parms.NewLocation);

}


// Function BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C.MoveToTargetLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*         Tornado                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TargetLocation2D                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   NormalizedDirection2D                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   NewDirection                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   NewNormalizedDirection                                           (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Temp                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   LocalActorLocation2D                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   LocalNormalizedDirectionForTarget                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearlyZero2D_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_AdjustActorToFloor_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_DotProduct2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_CrossProduct2D_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetRotated2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Normal2D_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_Vector2DToVector_Z_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRotated2D_AngleDeg_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_HawkBird_Storm_C::MoveToTargetLocation(class APalSkillEffectBase*& Tornado, double DeltaTime, const struct FVector2D& TargetLocation2D, const struct FVector2D& NormalizedDirection2D, struct FVector2D* NewDirection, const struct FVector2D& NewNormalizedDirection, double Temp, const struct FVector2D& LocalActorLocation2D, const struct FVector2D& LocalNormalizedDirectionForTarget, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsNearlyZero2D_ReturnValue, class AActor* CallFunc_AdjustActorToFloor_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, double CallFunc_DotProduct2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_CrossProduct2D_ReturnValue, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1, const struct FVector2D& CallFunc_Normal2D_ReturnValue, float CallFunc_Conv_Vector2DToVector_Z_ImplicitCast, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_HawkBird_Storm_C", "MoveToTargetLocation");

	Params::ABP_SkillEffect_Unique_HawkBird_Storm_C_MoveToTargetLocation_Params Parms{};

	Parms.Tornado = Tornado;
	Parms.DeltaTime = DeltaTime;
	Parms.TargetLocation2D = TargetLocation2D;
	Parms.NormalizedDirection2D = NormalizedDirection2D;
	Parms.NewNormalizedDirection = NewNormalizedDirection;
	Parms.Temp = Temp;
	Parms.LocalActorLocation2D = LocalActorLocation2D;
	Parms.LocalNormalizedDirectionForTarget = LocalNormalizedDirectionForTarget;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_IsNearlyZero2D_ReturnValue = CallFunc_IsNearlyZero2D_ReturnValue;
	Parms.CallFunc_AdjustActorToFloor_ReturnValue = CallFunc_AdjustActorToFloor_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_DotProduct2D_ReturnValue = CallFunc_DotProduct2D_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_CrossProduct2D_ReturnValue = CallFunc_CrossProduct2D_ReturnValue;
	Parms.CallFunc_GetRotated2D_ReturnValue = CallFunc_GetRotated2D_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1 = CallFunc_GreaterEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Normal2D_ReturnValue = CallFunc_Normal2D_ReturnValue;
	Parms.CallFunc_Conv_Vector2DToVector_Z_ImplicitCast = CallFunc_Conv_Vector2DToVector_Z_ImplicitCast;
	Parms.CallFunc_GetRotated2D_AngleDeg_ImplicitCast = CallFunc_GetRotated2D_AngleDeg_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (NewDirection != nullptr)
		*NewDirection = std::move(Parms.NewDirection);

}


// Function BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C.Shoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Foward2D                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_HawkBird_Storm_C::Shoot(const struct FVector& TargetLocation, const struct FVector2D& Foward2D, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_HawkBird_Storm_C", "Shoot");

	Params::ABP_SkillEffect_Unique_HawkBird_Storm_C_Shoot_Params Parms{};

	Parms.TargetLocation = TargetLocation;
	Parms.Foward2D = Foward2D;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C.CancelShoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_Unique_HawkBird_Storm_C::CancelShoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_HawkBird_Storm_C", "CancelShoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_HawkBird_Storm_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_HawkBird_Storm_C", "ReceiveTick");

	Params::ABP_SkillEffect_Unique_HawkBird_Storm_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C.OnInitialize
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_SkillEffect_Unique_HawkBird_Storm_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_HawkBird_Storm_C", "OnInitialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C.ShootBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_HawkBird_Storm_C::ShootBullet(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_HawkBird_Storm_C", "ShootBullet");

	Params::ABP_SkillEffect_Unique_HawkBird_Storm_C_ShootBullet_Params Parms{};

	Parms.TargetLocation = TargetLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkillEffect_Unique_HawkBird_Storm.BP_SkillEffect_Unique_HawkBird_Storm_C.ExecuteUbergraph_BP_SkillEffect_Unique_HawkBird_Storm
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalSkillEffectBase*         CallFunc_SpawnTornado_SpawnEffect                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetRotated2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetRotated2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MoveToTargetLocation_NewDirection                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MoveToTargetLocation_NewDirection_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetRotated2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_TargetLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MoveToTargetLocation_NewDirection_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRotated2D_AngleDeg_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRotated2D_AngleDeg_ImplicitCast_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRotated2D_AngleDeg_ImplicitCast_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_HawkBird_Storm_C::ExecuteUbergraph_BP_SkillEffect_Unique_HawkBird_Storm(int32 EntryPoint, class APalSkillEffectBase* CallFunc_SpawnTornado_SpawnEffect, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_2, const struct FVector2D& CallFunc_MoveToTargetLocation_NewDirection, const struct FVector2D& CallFunc_MoveToTargetLocation_NewDirection_1, bool CallFunc_IsValid_ReturnValue_3, const struct FVector2D& CallFunc_GetRotated2D_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& K2Node_Event_TargetLocation, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue_3, const struct FVector2D& CallFunc_MoveToTargetLocation_NewDirection_2, bool CallFunc_IsValid_ReturnValue_5, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast_1, double CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast, double CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast_1, double CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast_2, float CallFunc_GetRotated2D_AngleDeg_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkillEffect_Unique_HawkBird_Storm_C", "ExecuteUbergraph_BP_SkillEffect_Unique_HawkBird_Storm");

	Params::ABP_SkillEffect_Unique_HawkBird_Storm_C_ExecuteUbergraph_BP_SkillEffect_Unique_HawkBird_Storm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnTornado_SpawnEffect = CallFunc_SpawnTornado_SpawnEffect;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetRotated2D_ReturnValue = CallFunc_GetRotated2D_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_GetRotated2D_ReturnValue_1 = CallFunc_GetRotated2D_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_MoveToTargetLocation_NewDirection = CallFunc_MoveToTargetLocation_NewDirection;
	Parms.CallFunc_MoveToTargetLocation_NewDirection_1 = CallFunc_MoveToTargetLocation_NewDirection_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetRotated2D_ReturnValue_2 = CallFunc_GetRotated2D_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_TargetLocation = K2Node_Event_TargetLocation;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue_1 = CallFunc_Conv_VectorToVector2D_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue_2 = CallFunc_Conv_VectorToVector2D_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue_3 = CallFunc_Conv_VectorToVector2D_ReturnValue_3;
	Parms.CallFunc_MoveToTargetLocation_NewDirection_2 = CallFunc_MoveToTargetLocation_NewDirection_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetRotated2D_AngleDeg_ImplicitCast = CallFunc_GetRotated2D_AngleDeg_ImplicitCast;
	Parms.CallFunc_GetRotated2D_AngleDeg_ImplicitCast_1 = CallFunc_GetRotated2D_AngleDeg_ImplicitCast_1;
	Parms.CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast = CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast;
	Parms.CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast_1 = CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast_1;
	Parms.CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast_2 = CallFunc_MoveToTargetLocation_DeltaTime_ImplicitCast_2;
	Parms.CallFunc_GetRotated2D_AngleDeg_ImplicitCast_2 = CallFunc_GetRotated2D_AngleDeg_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


