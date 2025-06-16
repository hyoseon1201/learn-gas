// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/AuraWidgetController.h"

#ifdef AURA_AuraWidgetController_generated_h
#error "AuraWidgetController.generated.h already included, missing '#pragma once' in AuraWidgetController.h"
#endif
#define AURA_AuraWidgetController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FWidgetControllerParams;

// ********** Begin ScriptStruct FWidgetControllerParams *******************************************
#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h_13_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetControllerParams_Statics; \
	AURA_API static class UScriptStruct* StaticStruct();


struct FWidgetControllerParams;
// ********** End ScriptStruct FWidgetControllerParams *********************************************

// ********** Begin Class UAuraWidgetController ****************************************************
#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetWidgetControllerParams);


AURA_API UClass* Z_Construct_UClass_UAuraWidgetController_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraWidgetController(); \
	friend struct Z_Construct_UClass_UAuraWidgetController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_UAuraWidgetController_NoRegister(); \
public: \
	DECLARE_CLASS2(UAuraWidgetController, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_UAuraWidgetController_NoRegister) \
	DECLARE_SERIALIZER(UAuraWidgetController)


#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuraWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAuraWidgetController(UAuraWidgetController&&) = delete; \
	UAuraWidgetController(const UAuraWidgetController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuraWidgetController) \
	NO_API virtual ~UAuraWidgetController();


#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h_35_PROLOG
#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h_38_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAuraWidgetController;

// ********** End Class UAuraWidgetController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
