// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FKey;
#ifdef NATIVIZEDASSETS_RightPaddle__pf2132744816_generated_h
#error "RightPaddle__pf2132744816.generated.h already included, missing '#pragma once' in RightPaddle__pf2132744816.h"
#endif
#define NATIVIZEDASSETS_RightPaddle__pf2132744816_generated_h

#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	}


#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf) \
	{ \
		P_GET_STRUCT(FKey,Z_Param_bpp__Key__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__InpActEvt_L_K2Node_InputKeyEvent_0__pf(Z_Param_bpp__Key__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveTick__pf) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_bpp__DeltaSeconds__pf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveTick__pf(Z_Param_bpp__DeltaSeconds__pf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execbpf__ReceiveBeginPlay__pf) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->bpf__ReceiveBeginPlay__pf(); \
		P_NATIVE_END; \
	}


#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_EVENT_PARMS \
	struct RightPaddle_C__pf2132744816_eventbpf__ReceiveTick__pf_Parms \
	{ \
		float bpp__DeltaSeconds__pf; \
	};


#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_CALLBACK_WRAPPERS \
	void eventbpf__ReceiveBeginPlay__pf(); \
 \
	void eventbpf__ReceiveTick__pf(float bpp__DeltaSeconds__pf); \



#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARightPaddle_C__pf2132744816(); \
	friend struct Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics; \
public: \
	DECLARE_CLASS(ARightPaddle_C__pf2132744816, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/Blueprints/RightPaddle"), NO_API) \
	DECLARE_SERIALIZER(ARightPaddle_C__pf2132744816)


#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARightPaddle_C__pf2132744816(); \
	friend struct Z_Construct_UClass_ARightPaddle_C__pf2132744816_Statics; \
public: \
	DECLARE_CLASS(ARightPaddle_C__pf2132744816, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Game/Blueprints/RightPaddle"), NO_API) \
	DECLARE_SERIALIZER(ARightPaddle_C__pf2132744816)


#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARightPaddle_C__pf2132744816(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARightPaddle_C__pf2132744816) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARightPaddle_C__pf2132744816); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARightPaddle_C__pf2132744816); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARightPaddle_C__pf2132744816(ARightPaddle_C__pf2132744816&&); \
	NO_API ARightPaddle_C__pf2132744816(const ARightPaddle_C__pf2132744816&); \
public:


#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARightPaddle_C__pf2132744816(ARightPaddle_C__pf2132744816&&); \
	NO_API ARightPaddle_C__pf2132744816(const ARightPaddle_C__pf2132744816&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARightPaddle_C__pf2132744816); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARightPaddle_C__pf2132744816); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARightPaddle_C__pf2132744816)


#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_PRIVATE_PROPERTY_OFFSET
#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_8_PROLOG \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_EVENT_PARMS


#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_RPC_WRAPPERS \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_CALLBACK_WRAPPERS \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_INCLASS \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_PRIVATE_PROPERTY_OFFSET \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_CALLBACK_WRAPPERS \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_INCLASS_NO_PURE_DECLS \
	Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h_12_ENHANCED_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NATIVIZEDASSETS_API UClass* StaticClass<class ARightPaddle_C__pf2132744816>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Intermediate_Plugins_NativizedAssets_HTML5_Game_Source_NativizedAssets_Public_RightPaddle__pf2132744816_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
