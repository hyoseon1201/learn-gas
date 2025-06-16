// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/AbilitySystem/AuraAbilitySystemComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAuraAbilitySystemComponent() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemComponent();
AURA_API UClass* Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAuraAbilitySystemComponent **********************************************
void UAuraAbilitySystemComponent::StaticRegisterNativesUAuraAbilitySystemComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAuraAbilitySystemComponent;
UClass* UAuraAbilitySystemComponent::GetPrivateStaticClass()
{
	using TClass = UAuraAbilitySystemComponent;
	if (!Z_Registration_Info_UClass_UAuraAbilitySystemComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AuraAbilitySystemComponent"),
			Z_Registration_Info_UClass_UAuraAbilitySystemComponent.InnerSingleton,
			StaticRegisterNativesUAuraAbilitySystemComponent,
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
	return Z_Registration_Info_UClass_UAuraAbilitySystemComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UAuraAbilitySystemComponent_NoRegister()
{
	return UAuraAbilitySystemComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAuraAbilitySystemComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "AbilitySystem/AuraAbilitySystemComponent.h" },
		{ "ModuleRelativePath", "AbilitySystem/AuraAbilitySystemComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraAbilitySystemComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAbilitySystemComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::ClassParams = {
	&UAuraAbilitySystemComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraAbilitySystemComponent()
{
	if (!Z_Registration_Info_UClass_UAuraAbilitySystemComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraAbilitySystemComponent.OuterSingleton, Z_Construct_UClass_UAuraAbilitySystemComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraAbilitySystemComponent.OuterSingleton;
}
UAuraAbilitySystemComponent::UAuraAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraAbilitySystemComponent);
UAuraAbilitySystemComponent::~UAuraAbilitySystemComponent() {}
// ********** End Class UAuraAbilitySystemComponent ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemComponent_h__Script_Aura_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraAbilitySystemComponent, UAuraAbilitySystemComponent::StaticClass, TEXT("UAuraAbilitySystemComponent"), &Z_Registration_Info_UClass_UAuraAbilitySystemComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraAbilitySystemComponent), 2660497152U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemComponent_h__Script_Aura_2217538886(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemComponent_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_AbilitySystem_AuraAbilitySystemComponent_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
