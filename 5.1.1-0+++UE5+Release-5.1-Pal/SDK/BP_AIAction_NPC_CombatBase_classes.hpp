#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x51 (0x181 - 0x130)
// BlueprintGeneratedClass BP_AIAction_NPC_CombatBase.BP_AIAction_NPC_CombatBase_C
class UBP_AIAction_NPC_CombatBase_C : public UPalAIActionBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TargetActor;                                       // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                         SelfActor;                                         // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UPalAICombatModule*                    CombatModule;                                      // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SpawnerLocation;                                   // 0x150(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ReturnTerritoryRadius;                             // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TempDeltaTime;                                     // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalStateMachine*                      StateMachine;                                      // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMeleeWeapon;                                     // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_NPC_CombatBase_C* GetDefaultObj();

	void IsEndCurrentState(bool* IsEnd, class UPalStateMachineStateBase* CallFunc_GetCurrentState_ReturnValue, class UBP_AINPC_CombatState_Base_C* K2Node_DynamicCast_AsBP_AINPC_Combat_State_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEndSelfState_IsEnd);
	void FindTargetNearPoint(TArray<struct FVector>* PointList, const TArray<struct FVector>& Const_SerchVector, double Const_PerDistance, const struct FVector& TagetToSelfRight, const struct FVector& TargetToSelfZ0Normal, const struct FVector& TargetPos, const struct FVector& SelfPos, const TArray<struct FVector>& Result, TArray<struct FVector>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Variable, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_1, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Cross_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_Vector_Normal2D_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue);
	void GetWeaponHandleRef(class UPalNPCAIWeaponHandle** WeaponHandle, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class UPalNPCAIWeaponHandle* CallFunc_GetWeaponHandle_WeaponHandle);
	void LineTraceTarget(bool* HitToTarget, bool CallFunc_LineTraceToTarget_ForAIAttack_ReturnValue);
	void AddCombatState(class UClass* Class, class UPalStateMachineStateBase_BlueprintBase* CallFunc_SpawnObject_ReturnValue);
	void GetMovementComponentRef(class UPalCharacterMovementComponent** Movement, class UPalCharacterMovementComponent* CallFunc_GetPalCharacterMovementComponent_ReturnValue);
	void GetBodyActionComponentRef(class UPalActionComponent** ActionComp, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue);
	void IsNearTarget(double Distance, bool IgnoreHeight, bool* Near, bool CallFunc_IsNearTwoActor_ReturnValue, float CallFunc_IsNearTwoActor_distance_ImplicitCast);
	void TargetChange(class AActor* CallFunc_GetTargetActor_ReturnValue);
	void MoveToTarget(bool* IsNearTarget, const struct FVector& GoalPos, const TArray<struct FVector>& CheckPointList, int32 Temp_int_Array_Index_Variable, class APalCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsNearTwoActor_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class APalCharacter* CallFunc_GetCharacter_ReturnValue_1, const struct FVector& CallFunc_FindNearestNavmeshPointFromSelf_OutLocation, bool CallFunc_FindNearestNavmeshPointFromSelf_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_2, bool CallFunc_IsOnNavMesh_TargetLocation_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_3, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_4, bool CallFunc_PalAIMoveToTargetLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_5, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_6, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_7, bool CallFunc_IsOnNavMesh_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<struct FVector>& CallFunc_FindTargetNearPoint_PointList, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_PalAIMoveToTargetActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1);
	void TargetPlayerCameraCheck(bool* AttackAble, bool CallFunc_IsValid_ReturnValue, class APalPlayerCharacter* K2Node_DynamicCast_AsPal_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_InFanShap_PlayerCamera_ReturnValue);
	void DamageResponseForCombat(const struct FPalDamageResult& DmgResult, const TArray<class APalCharacter*>& AttackerList, class APalCharacter* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, class UPalCharacterParameterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class APalCharacter* CallFunc_SelectResponseBySenses_OutTargetCharacter, enum class EPalAIResponseType CallFunc_SelectResponseBySenses_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void SightCheckAndResponseForCombat(bool* ChangeNextAction, class APalCharacter* TempTarget, const TArray<class APalCharacter*>& TempTargetList, class AController* CallFunc_GetController_ReturnValue, const struct FPalAIActionDynamicParameter& K2Node_MakeStruct_PalAIActionDynamicParameter, class UPalAIActionBase* CallFunc_SetAIActionClassParameter_ReturnValue, class AController* CallFunc_GetController_ReturnValue_1, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue, class APalCharacter* CallFunc_SelectResponseBySenses_OutTargetCharacter, enum class EPalAIResponseType CallFunc_SelectResponseBySenses_ReturnValue, class AController* CallFunc_GetController_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, class UPalAISensorComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, TArray<class APalCharacter*>& CallFunc_SightCheckAllPlayer_InSightPlayers, TArray<class APalCharacter*>& CallFunc_SightCheckAllAliveNPC_InSightCharacters);
	void GetLeaderBB(class UBP_PalAIBlackboard_Common_C** LeaderBB, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, TScriptInterface<class IBPI_GetPalAIBlackboard_C> CallFunc_GetLeaderBB_self_CastInput, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderBB_LeaderPalBrackboard);
	void ChangeReturnMode(bool* ChangeSuccess, class ABP_NPCAIController_C* TempAICon, TScriptInterface<class IBPI_GetPalAIBlackboard_C> CallFunc_GetMyBB_self_CastInput, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, TScriptInterface<class IBPI_GetPalAIBlackboard_C> CallFunc_GetMyBB_self_CastInput_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetLeaderBB_LeaderBB, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TScriptInterface<class IBPI_GetPalAIBlackboard_C> CallFunc_GetMyBB_self_CastInput_2, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard_2, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue, float CallFunc_IsNearTwoPoint_distance_ImplicitCast);
	void GetControllerRef(class ABP_NPCAIController_C** NPCAICon, class AController* CallFunc_GetController_ReturnValue, class ABP_NPCAIController_C* K2Node_DynamicCast_AsBP_NPCAIController, bool K2Node_DynamicCast_bSuccess);
	void TickFinishCheck(bool* ActionFinish, bool CallFunc_IsBattleMode_ReturnValue, bool CallFunc_ChangeReturnMode_ChangeSuccess, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionPause(class APawn* ControlledPawn);
	void Event_OnDead(const struct FPalDeadInfo& DeadInfo);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionAbort(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIAction_NPC_CombatBase(int32 EntryPoint, class APawn* K2Node_Event_ControlledPawn_4, class AController* CallFunc_GetController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APalCharacter* K2Node_DynamicCast_AsPal_Character, bool K2Node_DynamicCast_bSuccess, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* K2Node_Event_ControlledPawn_3, enum class EPawnActionResult K2Node_Event_WithResult, class AController* CallFunc_GetController_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class APawn* K2Node_Event_ControlledPawn_2, class UPalDamageReactionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, const struct FPalDeadInfo& K2Node_CustomEvent_DeadInfo, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class UPalAICombatModule* CallFunc_SpawnObject_ReturnValue, class UPalStateMachine* CallFunc_SpawnObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class APawn* K2Node_Event_ControlledPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_1, class ABP_NPCAIController_C* CallFunc_GetControllerRef_NPCAICon_2, TScriptInterface<class IBPI_GetPalAIBlackboard_C> CallFunc_GetMyBB_self_CastInput, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard, TScriptInterface<class IBPI_GetPalAIBlackboard_C> CallFunc_GetMyBB_self_CastInput_1, class UBP_PalAIBlackboard_Common_C* CallFunc_GetMyBB_PalBrackboard_1, double K2Node_VariableSet_tempDeltaTime_ImplicitCast);
};

}


