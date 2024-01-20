#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Item_Anim_PalEgg_Base.BP_Item_Anim_PalEgg_Base_C
// (Actor)

class UClass* ABP_Item_Anim_PalEgg_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Item_Anim_PalEgg_Base_C");

	return Clss;
}


// BP_Item_Anim_PalEgg_Base_C BP_Item_Anim_PalEgg_Base.Default__BP_Item_Anim_PalEgg_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Item_Anim_PalEgg_Base_C* ABP_Item_Anim_PalEgg_Base_C::GetDefaultObj()
{
	static class ABP_Item_Anim_PalEgg_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Item_Anim_PalEgg_Base_C*>(ABP_Item_Anim_PalEgg_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Item_Anim_PalEgg_Base.BP_Item_Anim_PalEgg_Base_C.GetHatchingTemperature
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temperature                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Anim_PalEgg_Base_C::GetHatchingTemperature(int32* Temperature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Anim_PalEgg_Base_C", "GetHatchingTemperature");

	Params::ABP_Item_Anim_PalEgg_Base_C_GetHatchingTemperature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Temperature != nullptr)
		*Temperature = Parms.Temperature;

}


// Function BP_Item_Anim_PalEgg_Base.BP_Item_Anim_PalEgg_Base_C.SetAnimPlayState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsPlay                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Item_Anim_PalEgg_Base_C::SetAnimPlayState(bool IsPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Item_Anim_PalEgg_Base_C", "SetAnimPlayState");

	Params::ABP_Item_Anim_PalEgg_Base_C_SetAnimPlayState_Params Parms{};

	Parms.IsPlay = IsPlay;

	UObject::ProcessEvent(Func, &Parms);

}

}


