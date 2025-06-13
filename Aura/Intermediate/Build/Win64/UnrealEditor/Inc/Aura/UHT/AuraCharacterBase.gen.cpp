// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/Character/AuraCharacterBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAuraCharacterBase() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase();
AURA_API UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAuraCharacterBase *******************************************************
void AAuraCharacterBase::StaticRegisterNativesAAuraCharacterBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAuraCharacterBase;
UClass* AAuraCharacterBase::GetPrivateStaticClass()
{
	using TClass = AAuraCharacterBase;
	if (!Z_Registration_Info_UClass_AAuraCharacterBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AuraCharacterBase"),
			Z_Registration_Info_UClass_AAuraCharacterBase.InnerSingleton,
			StaticRegisterNativesAAuraCharacterBase,
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
	return Z_Registration_Info_UClass_AAuraCharacterBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AAuraCharacterBase_NoRegister()
{
	return AAuraCharacterBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAuraCharacterBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Character/AuraCharacterBase.h" },
		{ "ModuleRelativePath", "Character/AuraCharacterBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[] = {
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Character/AuraCharacterBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapon;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAuraCharacterBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0124080000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAuraCharacterBase, Weapon), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapon_MetaData), NewProp_Weapon_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAuraCharacterBase_Statics::NewProp_Weapon,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams = {
	&AAuraCharacterBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::PropPointers),
	0,
	0x009001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AAuraCharacterBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAuraCharacterBase()
{
	if (!Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton, Z_Construct_UClass_AAuraCharacterBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAuraCharacterBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAuraCharacterBase);
AAuraCharacterBase::~AAuraCharacterBase() {}
// ********** End Class AAuraCharacterBase *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h__Script_Aura_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAuraCharacterBase, AAuraCharacterBase::StaticClass, TEXT("AAuraCharacterBase"), &Z_Registration_Info_UClass_AAuraCharacterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAuraCharacterBase), 3574575994U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h__Script_Aura_3863503975(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_Character_AuraCharacterBase_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
