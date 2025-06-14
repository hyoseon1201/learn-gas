// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/AuraPlayerController.h"

#ifdef AURA_AuraPlayerController_generated_h
#error "AuraPlayerController.generated.h already included, missing '#pragma once' in AuraPlayerController.h"
#endif
#define AURA_AuraPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAuraPlayerController ****************************************************
AURA_API UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraPlayerController(); \
	friend struct Z_Construct_UClass_AAuraPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_AAuraPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AAuraPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_AAuraPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AAuraPlayerController)


#define FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAuraPlayerController(AAuraPlayerController&&) = delete; \
	AAuraPlayerController(const AAuraPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraPlayerController) \
	NO_API virtual ~AAuraPlayerController();


#define FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_14_PROLOG
#define FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_17_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAuraPlayerController;

// ********** End Class AAuraPlayerController ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_Player_AuraPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
