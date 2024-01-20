#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x470 - 0x468)
// BlueprintGeneratedClass BP_PalSphere_Body_Master.BP_PalSphere_Body_Master_C
class ABP_PalSphere_Body_Master_C : public ABP_PalSphere_Body_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_PalSphere_Body_Master_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_PalSphere_Body_Master(int32 EntryPoint);
};

}


