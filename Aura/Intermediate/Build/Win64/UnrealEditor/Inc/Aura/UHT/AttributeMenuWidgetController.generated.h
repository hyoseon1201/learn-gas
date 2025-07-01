// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/WidgetController/AttributeMenuWidgetController.h"

#ifdef AURA_AttributeMenuWidgetController_generated_h
#error "AttributeMenuWidgetController.generated.h already included, missing '#pragma once' in AttributeMenuWidgetController.h"
#endif
#define AURA_AttributeMenuWidgetController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FAuraAttributeDetails;

// ********** Begin Delegate FAttributeInfoSignature ***********************************************
#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h_13_DELEGATE \
AURA_API void FAttributeInfoSignature_DelegateWrapper(const FMulticastScriptDelegate& AttributeInfoSignature, FAuraAttributeDetails const& Info);


// ********** End Delegate FAttributeInfoSignature *************************************************

// ********** Begin Class UAttributeMenuWidgetController *******************************************
AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAttributeMenuWidgetController(); \
	friend struct Z_Construct_UClass_UAttributeMenuWidgetController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister(); \
public: \
	DECLARE_CLASS2(UAttributeMenuWidgetController, UAuraWidgetController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister) \
	DECLARE_SERIALIZER(UAttributeMenuWidgetController)


#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAttributeMenuWidgetController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAttributeMenuWidgetController(UAttributeMenuWidgetController&&) = delete; \
	UAttributeMenuWidgetController(const UAttributeMenuWidgetController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAttributeMenuWidgetController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAttributeMenuWidgetController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAttributeMenuWidgetController) \
	NO_API virtual ~UAttributeMenuWidgetController();


#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h_18_PROLOG
#define FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h_21_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAttributeMenuWidgetController;

// ********** End Class UAttributeMenuWidgetController *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
