#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x278 - 0x1E8)
// BlueprintGeneratedClass BP_AIAction_AssaultRifleMode.BP_AIAction_AssaultRifleMode_C
class UBP_AIAction_AssaultRifleMode_C : public UPalAIActionCoopAssaultrifleMode
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APalCharacter*                         PlayerCharacter;                                   // 0x1F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_CoopParam_AssaultRifleMode_C*      CoopParam;                                         // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalPartnerSkillParameterComponent*    PartnerSkillParam;                                 // 0x200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsAborted;                                         // 0x208(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoving;                                          // 0x209(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCoolDown;                                        // 0x20A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_408E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CoolDownElapsedTIme;                               // 0x210(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CoolDownTime;                                      // 0x218(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                   ActionComponent;                                   // 0x220(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                        ShootAction;                                       // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ShootLocation;                                     // 0x230(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalCharacterMovementComponent*        Movement;                                          // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  Flag_Name;                                         // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BlockedTimeSec;                                    // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PrevLocation;                                      // 0x260(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIAction_AssaultRifleMode_C* GetDefaultObj();

	void UpdateCheckIdleAction(double DeltaTime, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class APalCharacter* CallFunc_GetTargetCharacter_ReturnValue, bool CallFunc_NotEqual_ClassClass_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue, bool CallFunc_IsShooting_Result, bool CallFunc_BooleanOR_ReturnValue);
	void IsShooting(bool* Result, bool CallFunc_IsValid_ReturnValue);
	void Update_Proc(double DeltaTime, class APalCharacter* CallFunc_GetCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Update_deltaTime_ImplicitCast);
	bool Is_Near_Shooting_Location(bool CallFunc_HasReached_ReturnValue);
	void UpdateCoolDown(double DeltaTime, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue);
	void UpdateLocation(double DeltaTime, const struct FVector& TmpLocation, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsNearTwoPoint_ReturnValue, class APalCharacter* CallFunc_GetTargetCharacter_ReturnValue, class APalCharacter* CallFunc_GetTargetCharacter_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPalActionBase* CallFunc_PlayAction_ReturnValue, bool CallFunc_Is_Near_Shooting_Location_ReturnValue);
	void UpdateTargetActor(class APalCharacter* CallFunc_GetTargetCharacter_ReturnValue, bool CallFunc_IsLive_ReturnValue, class APalCharacter* CallFunc_GetTargetCharacter_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetTargetCharacter_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsSearching_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2);
	void FinishAction(bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SetupAction(class APawn* ControlledPawn, class APalCharacter* CallFunc_GetCharacter_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_1, class APalPlayerCharacter* CallFunc_GetTrainerPlayer_ReturnValue, class UPalCharacterMovementComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APalCharacter* CallFunc_GetCharacter_ReturnValue_2, class APalCharacter* CallFunc_GetCharacter_ReturnValue_3, class UPalActionComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UPalPartnerSkillParameterComponent* CallFunc_GetComponentByClass_ReturnValue_2, class APalCharacter* CallFunc_GetCharacter_ReturnValue_4, class APalCharacter* CallFunc_GetCharacter_ReturnValue_5, class UBP_CoopParam_AssaultRifleMode_C* CallFunc_GetComponentByClass_ReturnValue_3, class UPalActionBase* CallFunc_GetCurrentAction_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void BindCoopRegisterEvent();
	void UnbindCoopRegisterEvent();
	void CoopRelease();
	void StartPartnerSkill();
	void StopPartnerSkill();
	void OnOverheat();
	void ActionStart(class APawn* ControlledPawn);
	void ActionFinished(class APawn* ControlledPawn, enum class EPawnActionResult WithResult);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionAbort(class APawn* ControlledPawn);
	void CoopFinish();
	void OnShootActionFinished();
	void OnUpdateShootingLocation(class APalCharacter* Target, struct FVector& ShootLocation);
	void ExecuteUbergraph_BP_AIAction_AssaultRifleMode(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* K2Node_Event_ControlledPawn_3, class APawn* K2Node_Event_ControlledPawn_2, enum class EPawnActionResult K2Node_Event_WithResult, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class APawn* K2Node_Event_ControlledPawn, class AController* CallFunc_GetController_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue_2, class APalPlayerController* K2Node_DynamicCast_AsPal_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APalCharacter* K2Node_Event_Target, const struct FVector& K2Node_Event_ShootLocation, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APalCharacter* CallFunc_GetTargetCharacter_ReturnValue, class UPalActionBase* CallFunc_PlayAction_ReturnValue, double CallFunc_Update_Proc_DeltaTime_ImplicitCast);
};

}


