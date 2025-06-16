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
AURA_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemComponent_NoRegister();
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FWidgetControllerParams *******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FWidgetControllerParams;
class UScriptStruct* FWidgetControllerParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FWidgetControllerParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FWidgetControllerParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetControllerParams, (UObject*)Z_Construct_UPackage__Script_Aura(), TEXT("WidgetControllerParams"));
	}
	return Z_Registration_Info_UScriptStruct_FWidgetControllerParams.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FWidgetControllerParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerState_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[] = {
		{ "Category", "WidgetControllerParams" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetControllerParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerState_MetaData), NewProp_PlayerState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x011400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetControllerParams, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
	nullptr,
	&NewStructOps,
	"WidgetControllerParams",
	Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::PropPointers),
	sizeof(FWidgetControllerParams),
	alignof(FWidgetControllerParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetControllerParams()
{
	if (!Z_Registration_Info_UScriptStruct_FWidgetControllerParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FWidgetControllerParams.InnerSingleton, Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FWidgetControllerParams.InnerSingleton;
}
// ********** End ScriptStruct FWidgetControllerParams *********************************************

// ********** Begin Class UAuraWidgetController Function SetWidgetControllerParams *****************
struct Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics
{
	struct AuraWidgetController_eventSetWidgetControllerParams_Parms
	{
		FWidgetControllerParams WCParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/WidgetController/AuraWidgetController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WCParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WCParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams = { "WCParams", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraWidgetController_eventSetWidgetControllerParams_Parms, WCParams), Z_Construct_UScriptStruct_FWidgetControllerParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WCParams_MetaData), NewProp_WCParams_MetaData) }; // 1460692632
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::NewProp_WCParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraWidgetController, nullptr, "SetWidgetControllerParams", Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::AuraWidgetController_eventSetWidgetControllerParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::AuraWidgetController_eventSetWidgetControllerParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraWidgetController::execSetWidgetControllerParams)
{
	P_GET_STRUCT_REF(FWidgetControllerParams,Z_Param_Out_WCParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetControllerParams(Z_Param_Out_WCParams);
	P_NATIVE_END;
}
// ********** End Class UAuraWidgetController Function SetWidgetControllerParams *******************

// ********** Begin Class UAuraWidgetController ****************************************************
void UAuraWidgetController::StaticRegisterNativesUAuraWidgetController()
{
	UClass* Class = UAuraWidgetController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetWidgetControllerParams", &UAuraWidgetController::execSetWidgetControllerParams },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraWidgetController_SetWidgetControllerParams, "SetWidgetControllerParams" }, // 3324546438
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraWidgetController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgetController, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerController_MetaData), NewProp_PlayerController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerState = { "PlayerState", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgetController, PlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerState_MetaData), NewProp_PlayerState_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgetController, AbilitySystemComponent), Z_Construct_UClass_UAbilitySystemComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilitySystemComponent_MetaData), NewProp_AbilitySystemComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraWidgetController, AttributeSet), Z_Construct_UClass_UAttributeSet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeSet_MetaData), NewProp_AttributeSet_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_PlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AbilitySystemComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraWidgetController_Statics::NewProp_AttributeSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAuraWidgetController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraWidgetController_Statics::ClassParams = {
	&UAuraWidgetController::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAuraWidgetController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraWidgetController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraWidgetController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraWidgetController()
{
	if (!Z_Registration_Info_UClass_UAuraWidgetController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraWidgetController.OuterSingleton, Z_Construct_UClass_UAuraWidgetController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraWidgetController.OuterSingleton;
}
UAuraWidgetController::UAuraWidgetController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraWidgetController);
UAuraWidgetController::~UAuraWidgetController() {}
// ********** End Class UAuraWidgetController ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h__Script_Aura_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetControllerParams::StaticStruct, Z_Construct_UScriptStruct_FWidgetControllerParams_Statics::NewStructOps, TEXT("WidgetControllerParams"), &Z_Registration_Info_UScriptStruct_FWidgetControllerParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetControllerParams), 1460692632U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraWidgetController, UAuraWidgetController::StaticClass, TEXT("UAuraWidgetController"), &Z_Registration_Info_UClass_UAuraWidgetController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraWidgetController), 2623902929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h__Script_Aura_3325527563(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h__Script_Aura_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h__Script_Aura_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_WidgetController_AuraWidgetController_h__Script_Aura_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
