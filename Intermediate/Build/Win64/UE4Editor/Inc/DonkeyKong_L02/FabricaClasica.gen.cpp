// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/FabricaClasica.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFabricaClasica() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AFabricaClasica_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AFabricaClasica();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UFabricaEstorbos_NoRegister();
// End Cross Module References
	void AFabricaClasica::StaticRegisterNativesAFabricaClasica()
	{
	}
	UClass* Z_Construct_UClass_AFabricaClasica_NoRegister()
	{
		return AFabricaClasica::StaticClass();
	}
	struct Z_Construct_UClass_AFabricaClasica_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFabricaClasica_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFabricaClasica_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FabricaClasica.h" },
		{ "ModuleRelativePath", "FabricaClasica.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AFabricaClasica_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UFabricaEstorbos_NoRegister, (int32)VTABLE_OFFSET(AFabricaClasica, IFabricaEstorbos), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFabricaClasica_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFabricaClasica>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFabricaClasica_Statics::ClassParams = {
		&AFabricaClasica::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFabricaClasica_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFabricaClasica_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFabricaClasica()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFabricaClasica_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFabricaClasica, 1003983747);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AFabricaClasica>()
	{
		return AFabricaClasica::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFabricaClasica(Z_Construct_UClass_AFabricaClasica, &AFabricaClasica::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AFabricaClasica"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFabricaClasica);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
