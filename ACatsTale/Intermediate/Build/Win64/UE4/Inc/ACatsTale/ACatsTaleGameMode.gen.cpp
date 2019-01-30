// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ACatsTale/ACatsTaleGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACatsTaleGameMode() {}
// Cross Module References
	ACATSTALE_API UClass* Z_Construct_UClass_AACatsTaleGameMode_NoRegister();
	ACATSTALE_API UClass* Z_Construct_UClass_AACatsTaleGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ACatsTale();
// End Cross Module References
	void AACatsTaleGameMode::StaticRegisterNativesAACatsTaleGameMode()
	{
	}
	UClass* Z_Construct_UClass_AACatsTaleGameMode_NoRegister()
	{
		return AACatsTaleGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AACatsTaleGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACatsTaleGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ACatsTale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACatsTaleGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ACatsTaleGameMode.h" },
		{ "ModuleRelativePath", "ACatsTaleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACatsTaleGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACatsTaleGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AACatsTaleGameMode_Statics::ClassParams = {
		&AACatsTaleGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AACatsTaleGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AACatsTaleGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AACatsTaleGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AACatsTaleGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AACatsTaleGameMode, 1353408609);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACatsTaleGameMode(Z_Construct_UClass_AACatsTaleGameMode, &AACatsTaleGameMode::StaticClass, TEXT("/Script/ACatsTale"), TEXT("AACatsTaleGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACatsTaleGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
