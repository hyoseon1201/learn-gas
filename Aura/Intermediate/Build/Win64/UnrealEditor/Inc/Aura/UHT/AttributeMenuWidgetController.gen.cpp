// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/UI/WidgetController/AttributeMenuWidgetController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAttributeMenuWidgetController() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController();
AURA_API UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister();
AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAttributeMenuWidgetController *******************************************
void UAttributeMenuWidgetController::StaticRegisterNativesUAttributeMenuWidgetController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAttributeMenuWidgetController;
UClass* UAttributeMenuWidgetController::GetPrivateStaticClass()
{
	using TClass = UAttributeMenuWidgetController;
	if (!Z_Registration_Info_UClass_UAttributeMenuWidgetController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AttributeMenuWidgetController"),
			Z_Registration_Info_UClass_UAttributeMenuWidgetController.InnerSingleton,
			StaticRegisterNativesUAttributeMenuWidgetController,
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
	return Z_Registration_Info_UClass_UAttributeMenuWidgetController.InnerSingleton;
}
UClass* Z_Construct_UClass_UAttributeMenuWidgetController_NoRegister()
{
	return UAttributeMenuWidgetController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAttributeMenuWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/AttributeMenuWidgetController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "UI/WidgetController/AttributeMenuWidgetController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeMenuWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAuraWidgetController,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams = {
	&UAttributeMenuWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeMenuWidgetController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeMenuWidgetController()
{
	if (!Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton, Z_Construct_UClass_UAttributeMenuWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeMenuWidgetController.OuterSingleton;
}
UAttributeMenuWidgetController::UAttributeMenuWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeMenuWidgetController);
UAttributeMenuWidgetController::~UAttributeMenuWidgetController() {}
// ********** End Class UAttributeMenuWidgetController *********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h__Script_Aura_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeMenuWidgetController, UAttributeMenuWidgetController::StaticClass, TEXT("UAttributeMenuWidgetController"), &Z_Registration_Info_UClass_UAttributeMenuWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeMenuWidgetController), 2669506228U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h__Script_Aura_1576337382(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AttributeMenuWidgetController_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
