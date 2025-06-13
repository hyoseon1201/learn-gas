// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Character/AuraCharacterBase.h"

#ifdef AURA_AuraCharacterBase_generated_h
#error "AuraCharacterBase.generated.h already included, missing '#pragma once' in AuraCharacterBase.h"
#endif
#define AURA_AuraCharacterBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AAuraCharacterBase *******************************************************
AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraCharacterBase(); \
	friend struct Z_Construct_UClass_AAuraCharacterBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister(); \
public: \
	DECLARE_CLASS2(AAuraCharacterBase, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_AAuraCharacterBase_NoRegister) \
	DECLARE_SERIALIZER(AAuraCharacterBase)


#define FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h_10_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAuraCharacterBase(AAuraCharacterBase&&) = delete; \
	AAuraCharacterBase(const AAuraCharacterBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraCharacterBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraCharacterBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AAuraCharacterBase) \
	NO_API virtual ~AAuraCharacterBase();


#define FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h_7_PROLOG
#define FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h_10_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAuraCharacterBase;

// ********** End Class AAuraCharacterBase *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
