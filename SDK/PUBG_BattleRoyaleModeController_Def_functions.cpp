// PlayerUnknown's Battlegrounds (2.5.39.19) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C.UserConstructionScript
// (FUNC_Event, FUNC_Public, FUNC_BlueprintCallable, FUNC_BlueprintEvent)

void ABattleRoyaleModeController_Def_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C.UserConstructionScript");

	ABattleRoyaleModeController_Def_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C.ReceiveBeginPlay
// (FUNC_Event, FUNC_Public, FUNC_BlueprintEvent)

void ABattleRoyaleModeController_Def_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C.ReceiveBeginPlay");

	ABattleRoyaleModeController_Def_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C.ExecuteUbergraph_BattleRoyaleModeController_Def
// ()
// Parameters:
// int                            EntryPoint                     (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)

void ABattleRoyaleModeController_Def_C::ExecuteUbergraph_BattleRoyaleModeController_Def(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C.ExecuteUbergraph_BattleRoyaleModeController_Def");

	ABattleRoyaleModeController_Def_C_ExecuteUbergraph_BattleRoyaleModeController_Def_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
