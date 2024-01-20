#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0x570 - 0x561)
// BlueprintGeneratedClass BP_PalSphere.BP_PalSphere_C
class ABP_PalSphere_C : public ABP_CapturePrism_C
{
public:
	uint8                                        Pad_232E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x568(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PalSphere_C* GetDefaultObj();

	void GetThrowObjectClass(class UClass** ThrowObject);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PalSphere(int32 EntryPoint);
};

}


