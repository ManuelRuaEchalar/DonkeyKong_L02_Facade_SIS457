// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/Facade.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacade() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AFacade_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AFacade();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void AFacade::StaticRegisterNativesAFacade()
	{
	}
	UClass* Z_Construct_UClass_AFacade_NoRegister()
	{
		return AFacade::StaticClass();
	}
	struct Z_Construct_UClass_AFacade_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFacade_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFacade_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Facade.h" },
		{ "ModuleRelativePath", "Facade.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFacade_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacade>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFacade_Statics::ClassParams = {
		&AFacade::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFacade_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFacade_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFacade()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFacade_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFacade, 632635892);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AFacade>()
	{
		return AFacade::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFacade(Z_Construct_UClass_AFacade, &AFacade::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AFacade"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFacade);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
