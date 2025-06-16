// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/UI/WidgetController/AuraWidgetController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAuraWidgetController() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_UAuraWidgetController();
AURA_API UClass* Z_Construct_UClass_UAuraWidgetController_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAuraWidgetController ****************************************************
void UAuraWidgetController::StaticRegisterNativesUAuraWidgetController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAuraWidgetController;
UClass* UAuraWidgetController::GetPrivateStaticClass()
{
	using TClass = UAuraWidgetController;
	if (!Z_Registration_Info_UClass_UAuraWidgetController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AuraWidgetController"),
			Z_Registration_Info_UClass_UAuraWidgetController.InnerSingleton,
			StaticRegisterNativesUAuraWidgetController,
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
	return Z_Registration_Info_UClass_UAuraWidgetController.InnerSingleton;
}
UClass* Z_Construct_UClass_UAuraWidgetController_NoRegister()
{
	return UAuraWidgetController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAuraWidgetController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/WidgetController/AuraWidgetController.h" },
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "WidgetController" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgetController, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgetController, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerState_MetaData), NewProp_PlayerState