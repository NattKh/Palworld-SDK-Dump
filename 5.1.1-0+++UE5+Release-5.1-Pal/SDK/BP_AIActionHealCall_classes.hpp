#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x190 - 0x178)
// BlueprintGeneratedClass BP_AIActionHealCall.BP_AIActionHealCall_C
class UBP_AIActionHealCall_C : public UBP_AIAction_CallBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x178(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_CoopParam_Cover_C*                 CoopParam;                                         // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Approach_Radius;                                   // 0x188(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AIActionHealCall_C* GetDefaultObj();

	void DetermineDestination(class AActor* MasterTrainer, double ApproachRadius, struct FVector* ResultPosition, const struct FVector& TempVector, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FRotator& CallFunc_GetMasterCameraRotate_CameraRotate, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	void ActionStart(class APawn* ControlledPawn);
	void ExecuteUbergraph_BP_AIActionHealCall(int32 EntryPoint, class AController* CallFunc_GetController_ReturnValue, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class AController* CallFunc_GetController_ReturnValue_1, class UBP_AIActionHealWater_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_PushChildAction_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_DetermineDestination_ResultPosition, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsNearTwoPoint_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_IsNearTwoPoint_distance_ImplicitCast);
};

}


