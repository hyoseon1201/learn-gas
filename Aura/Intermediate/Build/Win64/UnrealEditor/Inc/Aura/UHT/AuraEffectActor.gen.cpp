// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Actor/AuraEffectActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAuraEffectActor() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_AAuraEffectActor();
AURA_API UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister();
AURA_API UEnum* Z_Construct_UEnum_Aura_EEffectApplicationPolicy();
AURA_API UEnum* Z_Construct_UEnum_Aura_EEffectRemovalPolicy();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EEffectApplicationPolicy **************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectApplicationPolicy;
static UEnum* EEffectApplicationPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Aura_EEffectApplicationPolicy, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EEffectApplicationPolicy"));
	}
	return Z_Registration_Info_UEnum_EEffectApplicationPolicy.OuterSingleton;
}
template<> AURA_API UEnum* StaticEnum<EEffectApplicationPolicy>()
{
	return EEffectApplicationPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ApplyOnBeginOverlap.Name", "EEffectApplicationPolicy::ApplyOnBeginOverlap" },
		{ "ApplyOnEndOverlap.Name", "EEffectApplicationPolicy::ApplyOnEndOverlap" },
		{ "BlueprintType", "true" },
		{ "DoNotApply.Name", "EEffectApplicationPolicy::DoNotApply" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEffectApplicationPolicy::ApplyOnBeginOverlap", (int64)EEffectApplicationPolicy::ApplyOnBeginOverlap },
		{ "EEffectApplicationPolicy::ApplyOnEndOverlap", (int64)EEffectApplicationPolicy::ApplyOnEndOverlap },
		{ "EEffectApplicationPolicy::DoNotApply", (int64)EEffectApplicationPolicy::DoNotApply },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	"EEffectApplicationPolicy",
	"EEffectApplicationPolicy",
	Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Aura_EEffectApplicationPolicy()
{
	if (!Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton, Z_Construct_UEnum_Aura_EEffectApplicationPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEffectApplicationPolicy.InnerSingleton;
}
// ********** End Enum EEffectApplicationPolicy ****************************************************

// ********** Begin Enum EEffectRemovalPolicy ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEffectRemovalPolicy;
static UEnum* EEffectRemovalPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Aura_EEffectRemovalPolicy, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("EEffectRemovalPolicy"));
	}
	return Z_Registration_Info_UEnum_EEffectRemovalPolicy.OuterSingleton;
}
template<> AURA_API UEnum* StaticEnum<EEffectRemovalPolicy>()
{
	return EEffectRemovalPolicy_StaticEnum();
}
struct Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DoNotRemove.Name", "EEffectRemovalPolicy::DoNotRemove" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
		{ "RemoveOnEndOverlap.Name", "EEffectRemovalPolicy::RemoveOnEndOverlap" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEffectRemovalPolicy::RemoveOnEndOverlap", (int64)EEffectRemovalPolicy::RemoveOnEndOverlap },
		{ "EEffectRemovalPolicy::DoNotRemove", (int64)EEffectRemovalPolicy::DoNotRemove },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	"EEffectRemovalPolicy",
	"EEffectRemovalPolicy",
	Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Aura_EEffectRemovalPolicy()
{
	if (!Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton, Z_Construct_UEnum_Aura_EEffectRemovalPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEffectRemovalPolicy.InnerSingleton;
}
// ********** End Enum EEffectRemovalPolicy ********************************************************

// ********** Begin Class AAuraEffectActor Function ApplyEffectsToTarget ***************************
struct Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics
{
	struct AuraEffectActor_eventApplyEffectsToTarget_Parms
	{
		AActor* TargetActor;
		TArray<TSubclassOf<UGameplayEffect>> GameplayEffectClasses;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayEffectClasses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameplayEffectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GameplayEffectClasses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventApplyEffectsToTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::NewProp_GameplayEffectClasses_Inner = { "GameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::NewProp_GameplayEffectClasses = { "GameplayEffectClasses", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventApplyEffectsToTarget_Parms, GameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayEffectClasses_MetaData), NewProp_GameplayEffectClasses_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::NewProp_TargetActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::NewProp_GameplayEffectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::NewProp_GameplayEffectClasses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAuraEffectActor, nullptr, "ApplyEffectsToTarget", Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::AuraEffectActor_eventApplyEffectsToTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::AuraEffectActor_eventApplyEffectsToTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraEffectActor::execApplyEffectsToTarget)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_GET_TARRAY(TSubclassOf<UGameplayEffect>,Z_Param_GameplayEffectClasses);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyEffectsToTarget(Z_Param_TargetActor,Z_Param_GameplayEffectClasses);
	P_NATIVE_END;
}
// ********** End Class AAuraEffectActor Function ApplyEffectsToTarget *****************************

// ********** Begin Class AAuraEffectActor Function OnBeginOverlap *********************************
struct Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics
{
	struct AuraEffectActor_eventOnBeginOverlap_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventOnBeginOverlap_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAuraEffectActor, nullptr, "OnBeginOverlap", Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::AuraEffectActor_eventOnBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::AuraEffectActor_eventOnBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraEffectActor::execOnBeginOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBeginOverlap(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class AAuraEffectActor Function OnBeginOverlap ***********************************

// ********** Begin Class AAuraEffectActor Function OnEndOverlap ***********************************
struct Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics
{
	struct AuraEffectActor_eventOnEndOverlap_Parms
	{
		AActor* TargetActor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraEffectActor_eventOnEndOverlap_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAuraEffectActor, nullptr, "OnEndOverlap", Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::AuraEffectActor_eventOnEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::AuraEffectActor_eventOnEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAuraEffectActor::execOnEndOverlap)
{
	P_GET_OBJECT(AActor,Z_Param_TargetActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEndOverlap(Z_Param_TargetActor);
	P_NATIVE_END;
}
// ********** End Class AAuraEffectActor Function OnEndOverlap *************************************

// ********** Begin Class AAuraEffectActor *********************************************************
void AAuraEffectActor::StaticRegisterNativesAAuraEffectActor()
{
	UClass* Class = AAuraEffectActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyEffectsToTarget", &AAuraEffectActor::execApplyEffectsToTarget },
		{ "OnBeginOverlap", &AAuraEffectActor::execOnBeginOverlap },
		{ "OnEndOverlap", &AAuraEffectActor::execOnEndOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAuraEffectActor;
UClass* AAuraEffectActor::GetPrivateStaticClass()
{
	using TClass = AAuraEffectActor;
	if (!Z_Registration_Info_UClass_AAuraEffectActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AuraEffectActor"),
			Z_Registration_Info_UClass_AAuraEffectActor.InnerSingleton,
			StaticRegisterNativesAAuraEffectActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AAuraEffectActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AAuraEffectActor_NoRegister()
{
	return AAuraEffectActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAuraEffectActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/AuraEffectActor.h" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDestroyOnEffectRemoval_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantGameplayEffectClasses_MetaData[] = {
		{ "Category", "Applied Effects|Instant" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstantEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects|Instant" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationGameplayEffectClasses_MetaData[] = {
		{ "Category", "Applied Effects|Duration" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects|Duration" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteGameplayEffectClasses_MetaData[] = {
		{ "Category", "Applied Effects|Infinite" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffectApplicationPolicy_MetaData[] = {
		{ "Category", "Applied Effects|Infinite" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfiniteEffectRemovalPolicy_MetaData[] = {
		{ "Category", "Applied Effects|Infinite" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorLevel_MetaData[] = {
		{ "Category", "Applied Effects" },
		{ "ModuleRelativePath", "Actor/AuraEffectActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDestroyOnEffectRemoval_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroyOnEffectRemoval;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InstantGameplayEffectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InstantGameplayEffectClasses;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InstantEffectApplicationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InstantEffectApplicationPolicy;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DurationGameplayEffectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DurationGameplayEffectClasses;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DurationEffectApplicationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DurationEffectApplicationPolicy;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InfiniteGameplayEffectClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InfiniteGameplayEffectClasses;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InfiniteEffectApplicationPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InfiniteEffectApplicationPolicy;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InfiniteEffectRemovalPolicy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InfiniteEffectRemovalPolicy;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActorLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAuraEffectActor_ApplyEffectsToTarget, "ApplyEffectsToTarget" }, // 537546171
		{ &Z_Construct_UFunction_AAuraEffectActor_OnBeginOverlap, "OnBeginOverlap" }, // 3810452681
		{ &Z_Construct_UFunction_AAuraEffectActor_OnEndOverlap, "OnEndOverlap" }, // 1916831484
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraEffectActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_SetBit(void* Obj)
{
	((AAuraEffectActor*)Obj)->bDestroyOnEffectRemoval = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval = { "bDestroyOnEffectRemoval", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAuraEffectActor), &Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDestroyOnEffectRemoval_MetaData), NewProp_bDestroyOnEffectRemoval_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantGameplayEffectClasses_Inner = { "InstantGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantGameplayEffectClasses = { "InstantGameplayEffectClasses", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InstantGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantGameplayEffectClasses_MetaData), NewProp_InstantGameplayEffectClasses_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffectApplicationPolicy = { "InstantEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InstantEffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstantEffectApplicationPolicy_MetaData), NewProp_InstantEffectApplicationPolicy_MetaData) }; // 4147592795
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationGameplayEffectClasses_Inner = { "DurationGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationGameplayEffectClasses = { "DurationGameplayEffectClasses", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, DurationGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationGameplayEffectClasses_MetaData), NewProp_DurationGameplayEffectClasses_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffectApplicationPolicy = { "DurationEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, DurationEffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationEffectApplicationPolicy_MetaData), NewProp_DurationEffectApplicationPolicy_MetaData) }; // 4147592795
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteGameplayEffectClasses_Inner = { "InfiniteGameplayEffectClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteGameplayEffectClasses = { "InfiniteGameplayEffectClasses", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InfiniteGameplayEffectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteGameplayEffectClasses_MetaData), NewProp_InfiniteGameplayEffectClasses_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy = { "InfiniteEffectApplicationPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InfiniteEffectApplicationPolicy), Z_Construct_UEnum_Aura_EEffectApplicationPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteEffectApplicationPolicy_MetaData), NewProp_InfiniteEffectApplicationPolicy_MetaData) }; // 4147592795
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy = { "InfiniteEffectRemovalPolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, InfiniteEffectRemovalPolicy), Z_Construct_UEnum_Aura_EEffectRemovalPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfiniteEffectRemovalPolicy_MetaData), NewProp_InfiniteEffectRemovalPolicy_MetaData) }; // 490411089
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_ActorLevel = { "ActorLevel", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraEffectActor, ActorLevel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorLevel_MetaData), NewProp_ActorLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_bDestroyOnEffectRemoval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantGameplayEffectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantGameplayEffectClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffectApplicationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InstantEffectApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationGameplayEffectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationGameplayEffectClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffectApplicationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_DurationEffectApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteGameplayEffectClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteGameplayEffectClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectApplicationPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_InfiniteEffectRemovalPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraEffectActor_Statics::NewProp_ActorLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraEffectActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraEffectActor_Statics::ClassParams = {
	&AAuraEffectActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraEffectActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraEffectActor()
{
	if (!Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton, Z_Construct_UClass_AAuraEffectActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraEffectActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraEffectActor);
AAuraEffectActor::~AAuraEffectActor() {}
// ********** End Class AAuraEffectActor ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h__Script_Aura_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEffectApplicationPolicy_StaticEnum, TEXT("EEffectApplicationPolicy"), &Z_Registration_Info_UEnum_EEffectApplicationPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4147592795U) },
		{ EEffectRemovalPolicy_StaticEnum, TEXT("EEffectRemovalPolicy"), &Z_Registration_Info_UEnum_EEffectRemovalPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 490411089U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraEffectActor, AAuraEffectActor::StaticClass, TEXT("AAuraEffectActor"), &Z_Registration_Info_UClass_AAuraEffectActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraEffectActor), 3278943169U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h__Script_Aura_2952840925(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h__Script_Aura_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Actor_AuraEffectActor_h__Script_Aura_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
