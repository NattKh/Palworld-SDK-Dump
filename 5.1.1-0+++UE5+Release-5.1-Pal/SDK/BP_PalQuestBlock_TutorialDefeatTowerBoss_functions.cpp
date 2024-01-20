#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PalQuestBlock_TutorialDefeatTowerBoss.BP_PalQuestBlock_TutorialDefeatTowerBoss_C
// (None)

class UClass* UBP_PalQuestBlock_TutorialDefeatTowerBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PalQuestBlock_TutorialDefeatTowerBoss_C");

	return Clss;
}


// BP_PalQuestBlock_TutorialDefeatTowerBoss_C BP_PalQuestBlock_TutorialDefeatTowerBoss.Default__BP_PalQuestBlock_TutorialDefeatTowerBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PalQuestBlock_TutorialDefeatTowerBoss_C* UBP_PalQuestBlock_TutorialDefeatTowerBoss_C::GetDefaultObj()
{
	static class UBP_PalQuestBlock_TutorialDefeatTowerBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PalQuestBlock_TutorialDefeatTowerBoss_C*>(UBP_PalQuestBlock_TutorialDefeatTowerBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PalQuestBlock_TutorialDefeatTowerBoss.BP_PalQuestBlock_TutorialDefeatTowerBoss_C.GetDescriptionText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        OutText                                                          (Parm, OutParm)
// struct FDataTableRowHandle         NewLocalVar                                                      (Edit, BlueprintVisible, NoDestructor)
// class FText                        CallFunc_GetLocalizedTextFromHandle_Text                         (None)

void UBP_PalQuestBlock_TutorialDefeatTowerBoss_C::GetDescriptionText(class FText* OutText, const struct FDataTableRowHandle& NewLocalVar, class FText CallFunc_GetLocalizedTextFromHandle_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PalQuestBlock_TutorialDefeatTowerBoss_C", "GetDescriptionText");

	Params::UBP_PalQuestBlock_TutorialDefeatTowerBoss_C_GetDescriptionText_Params Parms{};

	Parms.NewLocalVar = NewLocalVar;
	Parms.CallFunc_GetLocalizedTextFromHandle_Text = CallFunc_GetLocalizedTextFromHandle_Text;

	UObject::ProcessEvent(Func, &Parms);

	if (OutText != nullptr)
		*OutText = Parms.OutText;

}

}


