// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/Estorbo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstorbo() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UEstorbo_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UEstorbo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void UEstorbo::StaticRegisterNativesUEstorbo()
	{
	}
	UClass* Z_Construct_UClass_UEstorbo_NoRegister()
	{
		return UEstorbo::StaticClass();
	}
	struct Z_Construct_UClass_UEstorbo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstorbo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstorbo_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Estorbo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstorbo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstorbo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstorbo_Statics::ClassParams = {
		&UEstorbo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEstorbo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstorbo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstorbo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstorbo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstorbo, 294738126);
	template<> DONKEYKONG_L02_API UClass* StaticClass<UEstorbo>()
	{
		return UEstorbo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstorbo(Z_Construct_UClass_UEstorbo, &UEstorbo::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("UEstorbo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstorbo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
