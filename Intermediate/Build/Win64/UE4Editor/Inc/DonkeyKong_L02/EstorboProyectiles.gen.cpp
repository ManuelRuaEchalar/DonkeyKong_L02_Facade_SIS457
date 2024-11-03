// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/EstorboProyectiles.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEstorboProyectiles() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UEstorboProyectiles_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UEstorboProyectiles();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
// End Cross Module References
	void UEstorboProyectiles::StaticRegisterNativesUEstorboProyectiles()
	{
	}
	UClass* Z_Construct_UClass_UEstorboProyectiles_NoRegister()
	{
		return UEstorboProyectiles::StaticClass();
	}
	struct Z_Construct_UClass_UEstorboProyectiles_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEstorboProyectiles_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEstorboProyectiles_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EstorboProyectiles.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEstorboProyectiles_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEstorboProyectiles>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEstorboProyectiles_Statics::ClassParams = {
		&UEstorboProyectiles::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEstorboProyectiles_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEstorboProyectiles_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEstorboProyectiles()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEstorboProyectiles_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEstorboProyectiles, 3457982930);
	template<> DONKEYKONG_L02_API UClass* StaticClass<UEstorboProyectiles>()
	{
		return UEstorboProyectiles::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEstorboProyectiles(Z_Construct_UClass_UEstorboProyectiles, &UEstorboProyectiles::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("UEstorboProyectiles"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEstorboProyectiles);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
