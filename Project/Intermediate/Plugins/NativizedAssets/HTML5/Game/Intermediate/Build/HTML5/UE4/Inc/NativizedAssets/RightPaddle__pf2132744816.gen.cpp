// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NativizedAssets/Public/RightPaddle__pf2132744816.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRightPaddle__pf2132744816() {}
// Cross Module References
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARightPaddle_C__pf2132744816_NoRegister();
	NATIVIZEDASSETS_API UClass* Z_Construct_UClass_ARightPaddle_C__pf2132744816();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf();
	NATIVIZEDASSETS_API UFunction* Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	static FName NAME_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf = FName(TEXT("ReceiveBeginPlay"));
	void ARightPaddle_C__pf2132744816::eventbpf__ReceiveBeginPlay__pf()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf),NULL);
	}
	static FName NAME_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf = FName(TEXT("ReceiveTick"));
	void ARightPaddle_C__pf2132744816::eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf)
	{
		RightPaddle_C__pf2132744816_eventbpf__ReceiveTick__pf_Parms Parms;
		Parms.bpp__DeltaSeconds__pf=bpp__DeltaSeconds__pf;
		ProcessEvent(FindFunctionChecked(NAME_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf),&Parms);
	}
	void ARightPaddle_C__pf2132744816::StaticRegisterNativesARightPaddle_C__pf2132744816()
	{
		UClass* Class = ARightPaddle_C__pf2132744816::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InpActEvt_L_K2Node_InputKeyEvent_0", &ARightPaddle_C__pf2132744816::execbpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf },
			{ "ReceiveBeginPlay", &ARightPaddle_C__pf2132744816::execbpf__ReceiveBeginPlay__pf },
			{ "ReceiveTick", &ARightPaddle_C__pf2132744816::execbpf__ReceiveTick__pf },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics
	{
		struct RightPaddle_C__pf2132744816_eventbpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Parms
		{
			FKey bpp__Key__pf;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpp__Key__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics::NewProp_bpp__Key__pf = { "bpp__Key__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(RightPaddle_C__pf2132744816_eventbpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Parms, bpp__Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics::NewProp_bpp__Key__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "OverrideNativeName", "InpActEvt_L_K2Node_InputKeyEvent_0" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARightPaddle_C__pf2132744816, nullptr, "InpActEvt_L_K2Node_InputKeyEvent_0", nullptr, nullptr, sizeof(RightPaddle_C__pf2132744816_eventbpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Parms), Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf()
	{
		UObject* Outer = Z_Construct_UClass_ARightPaddle_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("InpActEvt_L_K2Node_InputKeyEvent_0") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event when play begins for this actor. */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "OverrideNativeName", "ReceiveBeginPlay" },
		{ "ToolTip", "Event when play begins for this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARightPaddle_C__pf2132744816, nullptr, "ReceiveBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf()
	{
		UObject* Outer = Z_Construct_UClass_ARightPaddle_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveBeginPlay") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpp__DeltaSeconds__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf = { "bpp__DeltaSeconds__pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(RightPaddle_C__pf2132744816_eventbpf__ReceiveTick__pf_Parms, bpp__DeltaSeconds__pf), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics::NewProp_bpp__DeltaSeconds__pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Event called every frame, if ticking is enabled */" },
		{ "CppFromBpEvent", "" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "OverrideNativeName", "ReceiveTick" },
		{ "ToolTip", "Event called every frame, if ticking is enabled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARightPaddle_C__pf2132744816, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(RightPaddle_C__pf2132744816_eventbpf__ReceiveTick__pf_Parms), Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics::PropPointers), RF_Public|RF_Transient, (EFunctionFlags)0x00020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf()
	{
		UObject* Outer = Z_Construct_UClass_ARightPaddle_C__pf2132744816();
		UFunction* ReturnFunction = static_cast<UFunction*>(StaticFindObjectFast( UFunction::StaticClass(), Outer, TEXT("ReceiveTick") ));
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARightPaddle_C__pf2132744816_NoRegister()
	{
		return ARightPaddle_C__pf2132744816::StaticClass();
	}
	struct Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Select_Default__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_Select_Default__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b0l__K2Node_InputKeyEvent_Key__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_b0l__K2Node_Event_DeltaSeconds__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_b0l__Temp_bool_Variable__pf_MetaData[];
#endif
		static void NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_b0l__Temp_bool_Variable__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__isLeft__pf_MetaData[];
#endif
		static void NewProp_bpv__isLeft__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__isLeft__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__flipping__pf_MetaData[];
#endif
		static void NewProp_bpv__flipping__pf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bpv__flipping__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__rotSpeed__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bpv__rotSpeed__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__endRot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__endRot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__startRot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_bpv__startRot__pf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bpv__DefaultSceneRoot__pf_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bpv__DefaultSceneRoot__pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf, "InpActEvt_L_K2Node_InputKeyEvent_0" }, // 1627890562
		{ &Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveBeginPlay__pf, "ReceiveBeginPlay" }, // 3806929294
		{ &Z_Construct_UFunction_ARightPaddle_C__pf2132744816_bpf__ReceiveTick__pf, "ReceiveTick" }, // 1928144676
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RightPaddle__pf2132744816.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "OverrideNativeName", "RightPaddle_C" },
		{ "ReplaceConverted", "/Game/Blueprints/RightPaddle.RightPaddle_C" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_Select_Default" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_Select_Default__pf = { "K2Node_Select_Default", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ARightPaddle_C__pf2132744816, b0l__K2Node_Select_Default__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_Select_Default__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_InputKeyEvent_Key" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf = { "K2Node_InputKeyEvent_Key", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ARightPaddle_C__pf2132744816, b0l__K2Node_InputKeyEvent_Key__pf), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "OverrideNativeName", "K2Node_Event_DeltaSeconds" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf = { "K2Node_Event_DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ARightPaddle_C__pf2132744816, b0l__K2Node_Event_DeltaSeconds__pf), METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData[] = {
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "OverrideNativeName", "Temp_bool_Variable" },
	};
#endif
	void Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit(void* Obj)
	{
		((ARightPaddle_C__pf2132744816*)Obj)->b0l__Temp_bool_Variable__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__Temp_bool_Variable__pf = { "Temp_bool_Variable", nullptr, (EPropertyFlags)0x0010000000202000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ARightPaddle_C__pf2132744816), &Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__Temp_bool_Variable__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__Temp_bool_Variable__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__isLeft__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Is Left" },
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "isLeft" },
	};
#endif
	void Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__isLeft__pf_SetBit(void* Obj)
	{
		((ARightPaddle_C__pf2132744816*)Obj)->bpv__isLeft__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__isLeft__pf = { "isLeft", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ARightPaddle_C__pf2132744816), &Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__isLeft__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__isLeft__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__isLeft__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__flipping__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Flipping" },
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "flipping" },
	};
#endif
	void Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__flipping__pf_SetBit(void* Obj)
	{
		((ARightPaddle_C__pf2132744816*)Obj)->bpv__flipping__pf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__flipping__pf = { "flipping", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient, 1, sizeof(bool), sizeof(ARightPaddle_C__pf2132744816), &Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__flipping__pf_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__flipping__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__flipping__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__rotSpeed__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Rot Speed" },
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "rotSpeed" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__rotSpeed__pf = { "rotSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ARightPaddle_C__pf2132744816, bpv__rotSpeed__pf), METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__rotSpeed__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__rotSpeed__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__endRot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "End Rot" },
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "endRot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__endRot__pf = { "endRot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ARightPaddle_C__pf2132744816, bpv__endRot__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__endRot__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__endRot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__startRot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "DisplayName", "Start Rot" },
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "MultiLine", "true" },
		{ "OverrideNativeName", "startRot" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__startRot__pf = { "startRot", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ARightPaddle_C__pf2132744816, bpv__startRot__pf), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__startRot__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__startRot__pf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData[] = {
		{ "Category", "Default" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RightPaddle__pf2132744816.h" },
		{ "OverrideNativeName", "DefaultSceneRoot" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf = { "DefaultSceneRoot", nullptr, (EPropertyFlags)0x001000040008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient, 1, STRUCT_OFFSET(ARightPaddle_C__pf2132744816, bpv__DefaultSceneRoot__pf), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_Select_Default__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_InputKeyEvent_Key__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__K2Node_Event_DeltaSeconds__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_b0l__Temp_bool_Variable__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__isLeft__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__flipping__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__rotSpeed__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__endRot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__startRot__pf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::NewProp_bpv__DefaultSceneRoot__pf,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARightPaddle_C__pf2132744816>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::ClassParams = {
		&ARightPaddle_C__pf2132744816::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARightPaddle_C__pf2132744816()
	{
		UPackage* OuterPackage = FindOrConstructDynamicTypePackage(TEXT("/Game/Blueprints/RightPaddle"));
		UClass* OuterClass = Cast<UClass>(StaticFindObjectFast(UClass::StaticClass(), OuterPackage, TEXT("RightPaddle_C")));
		if (!OuterClass || !(OuterClass->ClassFlags & CLASS_Constructed))
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_DYNAMIC_CLASS(ARightPaddle_C__pf2132744816, TEXT("RightPaddle_C"), 2666277023);
	template<> NATIVIZEDASSETS_API UClass* StaticClass<ARightPaddle_C__pf2132744816>()
	{
		return ARightPaddle_C__pf2132744816::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARightPaddle_C__pf2132744816(Z_Construct_UClass_ARightPaddle_C__pf2132744816, &ARightPaddle_C__pf2132744816::StaticClass, TEXT("/Game/Blueprints/RightPaddle"), TEXT("RightPaddle_C"), true, TEXT("/Game/Blueprints/RightPaddle"), TEXT("/Game/Blueprints/RightPaddle.RightPaddle_C"), nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARightPaddle_C__pf2132744816);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
