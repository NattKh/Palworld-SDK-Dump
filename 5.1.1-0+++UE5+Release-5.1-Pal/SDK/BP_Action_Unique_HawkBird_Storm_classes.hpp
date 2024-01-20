#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA7 (0x2B0 - 0x209)
// BlueprintGeneratedClass BP_Action_Unique_HawkBird_Storm.BP_Action_Unique_HawkBird_Storm_C
class UBP_Action_Unique_HawkBird_Storm_C : public UBP_ActionUniqueAttackBase_C
{
public:
	uint8                                        Pad_41BC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UNiagaraComponent*>             CurrentEffect;                                     // 0x218(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UNiagaraComponent*                     OmenEffect;                                        // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FSkillEffectSpawnParameter            SkillEffectSpawnParam;                             // 0x230(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UNiagaraSystem*                        StartEffect;                                       // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        LoopEffect;                                        // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        ShootDelay;                                        // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_41D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       FadeOutTimer;                                      // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FadeOutTime;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           FadeOutCurve;                                      // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     LoopingEffect;                                     // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           FadeOutCurve01;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_UniqueSkillModule_Tackle_C*        TackleModule;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Action_Unique_HawkBird_Storm_C* GetDefaultObj();

	void SetEffectRotationYaw(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
	void OnBreakAction();
	void CallEffect(struct FSkillEffectSpawnParameter& Parameter);
	void PlayEffectByTime();
	void FadeOutEffect(double DeltaTime);
	void OnCompletedEndMontage();
	void OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName);
	void OnBeginAction();
	void TickAction(float DeltaTime);
	void OnEndAction();
	void ExecuteUbergraph_BP_Action_Unique_HawkBird_Storm(int32 EntryPoint, const struct FVector& CallFunc_GetAttackTargetLocation_Location, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FSkillEffectSpawnParameter& K2Node_CustomEvent_Parameter, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTimerHandle& CallFunc_SetTimeCallbackBySkillEffectSpawnParameter_ReturnValue, class APalSkillEffectBase* CallFunc_FinishSpawningActor_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_2, TScriptInterface<class IBPI_SkillEffect_C> K2Node_DynamicCast_AsBPI_Skill_Effect, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetActionTarget_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, double K2Node_CustomEvent_DeltaTime, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetFloatValue_ReturnValue, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_3, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_1, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetFloatValue_ReturnValue_1, class UBP_UniqueSkillModule_Tackle_C* CallFunc_CreateSkillActionModule_Module, class AActor* CallFunc_GetUniqueActionTarget_TargetActor, class AActor* CallFunc_GetUniqueActionTarget_TargetActor_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAnimMontage* K2Node_CustomEvent_Montage, class FName K2Node_CustomEvent_NotifyName, class APalCharacter* CallFunc_GetActionCharacter_ReturnValue_4, class UPalSkeletalMeshComponent* CallFunc_GetMainMesh_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Montage_IsPlaying_ReturnValue, float K2Node_Event_DeltaTime, class UNiagaraComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetFloatValue_InTime_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_FadeOutEffect_DeltaTime_ImplicitCast);
};

}


