#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_CoopWeapon.BPI_CoopWeapon_C
// (None)

class UClass* IBPI_CoopWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_CoopWeapon_C");

	return Clss;
}


// BPI_CoopWeapon_C BPI_CoopWeapon.Default__BPI_CoopWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_CoopWeapon_C* IBPI_CoopWeapon_C::GetDefaultObj()
{
	static class IBPI_CoopWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_CoopWeapon_C*>(IBPI_CoopWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_CoopWeapon.BPI_CoopWeapon_C.SetAttacker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      AttackerPal                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void IBPI_CoopWeapon_C::SetAttacker(class AActor* AttackerPal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CoopWeapon_C", "SetAttacker");

	Params::IBPI_CoopWeapon_C_SetAttacker_Params Parms{};

	Parms.AttackerPal = AttackerPal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CoopWeapon.BPI_CoopWeapon_C.SetWeaponDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Damageam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_CoopWeapon_C::SetWeaponDamage(int32 Damageam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CoopWeapon_C", "SetWeaponDamage");

	Params::IBPI_CoopWeapon_C_SetWeaponDamage_Params Parms{};

	Parms.Damageam = Damageam;

	UObject::ProcessEvent(Func, &Parms);

}

}


