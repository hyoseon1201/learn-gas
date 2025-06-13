// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AuraCharacter.h"

#ifdef AURA_AuraCharacter_generated_h
#error "AuraCharacter.generated.h already included, missing '#pragma once' in AuraCharacter.h"
#endif
#define AURA_AuraCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAuraCharacter ***********************************************************
AURA_API UClass* Z_Construct_UClass_AAuraCharacter_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_Character_AuraCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraCharacter(); \
	friend struct Z_Construct_UClass_AAuraCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_AAuraCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AAuraCharacter, AAuraCharacterBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_AAuraCharacter_NoRegister) \
	DECLARE_SERIALIZER(AAuraCharacter)


#define FID_learn_gas_Aura_Source_Aura_Character_AuraCharacter_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAuraCharacter(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAuraCharacter(AAuraCharacter&&) = delete; \
	AAuraCharacter(const AAuraCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraCharacter) \
	NO_API virtual ~AAuraCharacter();


#define FID_learn_gas_Aura_Source_Aura_Character_AuraCharacter_h_10_PROLOG
#define FID_learn_gas_Aura_Source_Aura_Character_AuraCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_Character_AuraCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_Character_AuraCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAuraCharacter;

// ********** End Class AAuraCharacter *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_Character_AuraCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
