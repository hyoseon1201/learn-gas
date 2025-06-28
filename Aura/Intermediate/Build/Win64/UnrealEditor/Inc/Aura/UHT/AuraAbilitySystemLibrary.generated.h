// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AbilitySystem/AuraAbilitySystemLibrary.h"

#ifdef AURA_AuraAbilitySystemLibrary_generated_h
#error "AuraAbilitySystemLibrary.generated.h already included, missing '#pragma once' in AuraAbilitySystemLibrary.h"
#endif
#define AURA_AuraAbilitySystemLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UObject;
class UOverlayWidgetController;

// ********** Begin Class UAuraAbilitySystemLibrary ************************************************
#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetOverlayWidgetController);


AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemLibrary_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAuraAbilitySystemLibrary(); \
	friend struct Z_Construct_UClass_UAuraAbilitySystemLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UAuraAbilitySystemLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_UAuraAbilitySystemLibrary_NoRegister) \
	DECLARE_SERIALIZER(UAuraAbilitySystemLibrary)


#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAuraAbilitySystemLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UAuraAbilitySystemLibrary(UAuraAbilitySystemLibrary&&) = delete; \
	UAuraAbilitySystemLibrary(const UAuraAbilitySystemLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAuraAbilitySystemLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAuraAbilitySystemLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAuraAbilitySystemLibrary) \
	NO_API virtual ~UAuraAbilitySystemLibrary();


#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h_12_PROLOG
#define FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h_15_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UAuraAbilitySystemLibrary;

// ********** End Class UAuraAbilitySystemLibrary **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
