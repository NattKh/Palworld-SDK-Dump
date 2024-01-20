#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2B8 - 0x290)
// BlueprintGeneratedClass BP_WildPalDrinkWaterSpotBase.BP_WildPalDrinkWaterSpotBase_C
class ABP_WildPalDrinkWaterSpotBase_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  DebugMesh;                                         // 0x298(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       Goal_Locations;                                    // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ABP_WildPalDrinkWaterSpotBase_C* GetDefaultObj();

	void DeleteChild(const TArray<class USceneComponent*>& TempComponent, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class USceneComponent* Temp_object_Variable, TArray<class UMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_WildPalDrinkWaterSpotBase(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UPalNPCManager* CallFunc_GetNPCManager_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPalWildPalDrinkWaterSpotProvider* CallFunc_GetDrinkWaterSpotProvider_ReturnValue, TArray<class UBP_WildPalDrinkWaterPointComponent_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UBP_WildPalDrinkWaterPointComponent_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
};

}


