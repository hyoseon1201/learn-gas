// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AuraPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AURA_AuraPlayerController_generated_h
#error "AuraPlayerController.generated.h already included, missing '#pragma once' in AuraPlayerController.h"
#endif
#define AURA_AuraPlayerController_generated_h

#define FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraPlayerController(); \
	friend struct Z_Construct_UClass_AAuraPlayerController_Statics; \
public: \
	DECLARE_CLASS(AAuraPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), NO_API) \
	DECLARE_SERIALIZER(AAuraPlayerController)


#define FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAuraPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AAuraPlayerController(AAuraPlayerController&&); \
	AAuraPlayerController(const AAuraPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAuraPlayerController) \
	NO_API virtual ~AAuraPlayerController();


#define FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_10_PROLOG
#define FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_13_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AURA_API UClass* StaticClass<class AAuraPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
