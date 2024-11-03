// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/EstorboTrampas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstorboTrampas() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UEstorboTrampas_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UEstorboTrampas();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void UEstorboTrampas::StaticRegisterNativesUEstorboTrampas()
	{
	}
	UClass* Z_Construct_UClass_UEstorboTrampas_NoRegister()
	{
		return UEstorboTrampas::StaticClass();
	}
	struct Z_Construct_UClass_UEstorboTrampas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstorboTrampas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstorboTrampas_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EstorboTrampas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstorboTrampas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstorboTrampas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstorboTrampas_Statics::ClassParams = {
		&UEstorboTrampas::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEstorboTrampas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstorboTrampas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstorboTrampas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstorboTrampas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstorboTrampas, 1940451290);
	template<> DONKEYKONG_L02_API UClass* StaticClass<UEstorboTrampas>()
	{
		return UEstorboTrampas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstorboTrampas(Z_Construct_UClass_UEstorboTrampas, &UEstorboTrampas::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("UEstorboTrampas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstorboTrampas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
