#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x59 - 0x38)
// BlueprintGeneratedClass BP_RepairAllWindowDispatchParameter.BP_RepairAllWindowDispatchParameter_C
class UBP_RepairAllWindowDispatchParameter_C : public UPalHUDDispatchParameterBase
{
public:
	TArray<class UPalItemSlot*>                  TargetItemSlots;                                   // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FPalStaticItemIdAndNum>        RequireMaterials;                                  // 0x48(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         OutResult;                                         // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_RepairAllWindowDispatchParameter_C* GetDefaultObj();

};

}


