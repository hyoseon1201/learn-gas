// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actor/AuraEffectActor.h"

#ifdef AURA_AuraEffectActor_generated_h
#error "AuraEffectActor.generated.h already included, missing '#pragma once' in AuraEffectActor.h"
#endif
#define AURA_AuraEffectActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AAuraEffectActor *********************************************************
#define FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEndOverlap); \
	DECLARE_FUNCTION(execOnOverlap);


AURA_API UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister();

#define FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAuraEffectActor(); \
	friend struct Z_Construct_UClass_AAuraEffectActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend AURA_API UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AAuraEffectActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Aura"), Z_Construct_UClass_AAuraEffectActor_NoRegister) \
	DECLARE_SERIALIZER(AAuraEffectActor)


#define FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAuraEffectActor(AAuraEffectActor&&) = delete; \
	AAuraEffectActor(const AAuraEffectActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAuraEffectActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAuraEffectActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAuraEffectActor) \
	NO_API virtual ~AAuraEffectActor();


#define FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h_9_PROLOG
#define FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAuraEffectActor;

// ********** End Class AAuraEffectActor ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
