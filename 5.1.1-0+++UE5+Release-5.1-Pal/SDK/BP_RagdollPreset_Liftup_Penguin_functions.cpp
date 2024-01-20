#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RagdollPreset_Liftup_Penguin.BP_RagdollPreset_Liftup_Penguin_C
// (None)

class UClass* UBP_RagdollPreset_Liftup_Penguin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RagdollPreset_Liftup_Penguin_C");

	return Clss;
}


// BP_RagdollPreset_Liftup_Penguin_C BP_RagdollPreset_Liftup_Penguin.Default__BP_RagdollPreset_Liftup_Penguin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RagdollPreset_Liftup_Penguin_C* UBP_RagdollPreset_Liftup_Penguin_C::GetDefaultObj()
{
	static class UBP_RagdollPreset_Liftup_Penguin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RagdollPreset_Liftup_Penguin_C*>(UBP_RagdollPreset_Liftup_Penguin_C::StaticClass()->DefaultObject);

	return Default;
}

}


