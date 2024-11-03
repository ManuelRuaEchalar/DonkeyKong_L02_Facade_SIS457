// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/TrampaFuego.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrampaFuego() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_ATrampaFuego_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_ATrampaFuego();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UEstorboTrampas_NoRegister();
// End Cross Module References
	void ATrampaFuego::StaticRegisterNativesATrampaFuego()
	{
	}
	UClass* Z_Construct_UClass_ATrampaFuego_NoRegister()
	{
		return ATrampaFuego::StaticClass();
	}
	struct Z_Construct_UClass_ATrampaFuego_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrampaFuego_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrampaFuego_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrampaFuego.h" },
		{ "ModuleRelativePath", "TrampaFuego.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATrampaFuego_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstorboTrampas_NoRegister, (int32)VTABLE_OFFSET(ATrampaFuego, IEstorboTrampas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrampaFuego_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrampaFuego>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrampaFuego_Statics::ClassParams = {
		&ATrampaFuego::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATrampaFuego_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATrampaFuego_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrampaFuego()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrampaFuego_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrampaFuego, 347841206);
	template<> DONKEYKONG_L02_API UClass* StaticClass<ATrampaFuego>()
	{
		return ATrampaFuego::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrampaFuego(Z_Construct_UClass_ATrampaFuego, &ATrampaFuego::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("ATrampaFuego"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrampaFuego);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
