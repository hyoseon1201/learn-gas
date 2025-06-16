// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Aura/UI/Widget/AuraUserWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAuraUserWidget() {}

// ********** Begin Cross Module References ********************************************************
AURA_API UClass* Z_Construct_UClass_UAuraUserWidget();
AURA_API UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Aura();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UAuraUserWidget Function SetWidgetController *****************************
struct Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics
{
	struct AuraUserWidget_eventSetWidgetController_Parms
	{
		UObject* InWidgetController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/AuraUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::NewProp_InWidgetController = { "InWidgetController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AuraUserWidget_eventSetWidgetController_Parms, InWidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::NewProp_InWidgetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraUserWidget, nullptr, "SetWidgetController", Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::AuraUserWidget_eventSetWidgetController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::AuraUserWidget_eventSetWidgetController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAuraUserWidget_SetWidgetController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraUserWidget_SetWidgetController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAuraUserWidget::execSetWidgetController)
{
	P_GET_OBJECT(UObject,Z_Param_InWidgetController);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWidgetController(Z_Param_InWidgetController);
	P_NATIVE_END;
}
// ********** End Class UAuraUserWidget Function SetWidgetController *******************************

// ********** Begin Class UAuraUserWidget Function WidgetControllerSet *****************************
static FName NAME_UAuraUserWidget_WidgetControllerSet = FName(TEXT("WidgetControllerSet"));
void UAuraUserWidget::WidgetControllerSet()
{
	UFunction* Func = FindFunctionChecked(NAME_UAuraUserWidget_WidgetControllerSet);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/Widget/AuraUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UAuraUserWidget, nullptr, "WidgetControllerSet", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UAuraUserWidget Function WidgetControllerSet *******************************

// ********** Begin Class UAuraUserWidget **********************************************************
void UAuraUserWidget::StaticRegisterNativesUAuraUserWidget()
{
	UClass* Class = UAuraUserWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetWidgetController", &UAuraUserWidget::execSetWidgetController },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UAuraUserWidget;
UClass* UAuraUserWidget::GetPrivateStaticClass()
{
	using TClass = UAuraUserWidget;
	if (!Z_Registration_Info_UClass_UAuraUserWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AuraUserWidget"),
			Z_Registration_Info_UClass_UAuraUserWidget.InnerSingleton,
			StaticRegisterNativesUAuraUserWidget,
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
	return Z_Registration_Info_UClass_UAuraUserWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_UAuraUserWidget_NoRegister()
{
	return UAuraUserWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UAuraUserWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/Widget/AuraUserWidget.h" },
		{ "ModuleRelativePath", "UI/Widget/AuraUserWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetController_MetaData[] = {
		{ "Category", "AuraUserWidget" },
		{ "ModuleRelativePath", "UI/Widget/AuraUserWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAuraUserWidget_SetWidgetController, "SetWidgetController" }, // 2892380722
		{ &Z_Construct_UFunction_UAuraUserWidget_WidgetControllerSet, "WidgetControllerSet" }, // 1524985326
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAuraUserWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAuraUserWidget_Statics::NewProp_WidgetController = { "WidgetController", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAuraUserWidget, WidgetController), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetController_MetaData), NewProp_WidgetController_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAuraUserWidget_Statics::NewProp_WidgetController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAuraUserWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Aura,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAuraUserWidget_Statics::ClassParams = {
	&UAuraUserWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAuraUserWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAuraUserWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAuraUserWidget()
{
	if (!Z_Registration_Info_UClass_UAuraUserWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAuraUserWidget.OuterSingleton, Z_Construct_UClass_UAuraUserWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAuraUserWidget.OuterSingleton;
}
UAuraUserWidget::UAuraUserWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAuraUserWidget);
UAuraUserWidget::~UAuraUserWidget() {}
// ********** End Class UAuraUserWidget ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_Widget_AuraUserWidget_h__Script_Aura_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAuraUserWidget, UAuraUserWidget::StaticClass, TEXT("UAuraUserWidget"), &Z_Registration_Info_UClass_UAuraUserWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAuraUserWidget), 2958048832U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_Widget_AuraUserWidget_h__Script_Aura_48503463(TEXT("/Script/Aura"),
	Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_Widget_AuraUserWidget_h__Script_Aura_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_learn_gas_Aura_Source_Aura_UI_Widget_AuraUserWidget_h__Script_Aura_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
