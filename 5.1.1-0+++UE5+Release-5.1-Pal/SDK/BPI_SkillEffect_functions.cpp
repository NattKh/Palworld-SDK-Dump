#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_SkillEffect.BPI_SkillEffect_C
// (None)

class UClass* IBPI_SkillEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_SkillEffect_C");

	return Clss;
}


// BPI_SkillEffect_C BPI_SkillEffect.Default__BPI_SkillEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_SkillEffect_C* IBPI_SkillEffect_C::GetDefaultObj()
{
	static class IBPI_SkillEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_SkillEffect_C*>(IBPI_SkillEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_SkillEffect.BPI_SkillEffect_C.CancelShoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_SkillEffect_C::CancelShoot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SkillEffect_C", "CancelShoot");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPI_SkillEffect.BPI_SkillEffect_C.ShootBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     TargetLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SkillEffect_C::ShootBullet(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SkillEffect_C", "ShootBullet");

	Params::IBPI_SkillEffect_C_ShootBullet_Params Parms{};

	Parms.TargetLocation = TargetLocation;

	UObject::ProcessEvent(Func, &Parms);

}

}


