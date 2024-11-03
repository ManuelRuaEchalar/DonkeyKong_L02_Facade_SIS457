// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DonkeyKong_L02/EspinasAfiladas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEspinasAfiladas() {}
// Cross Module References
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AEspinasAfiladas_NoRegister();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_AEspinasAfiladas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DonkeyKong_L02();
	DONKEYKONG_L02_API UClass* Z_Construct_UClass_UEstorboEspinas_NoRegister();
// End Cross Module References
	void AEspinasAfiladas::StaticRegisterNativesAEspinasAfiladas()
	{
	}
	UClass* Z_Construct_UClass_AEspinasAfiladas_NoRegister()
	{
		return AEspinasAfiladas::StaticClass();
	}
	struct Z_Construct_UClass_AEspinasAfiladas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEspinasAfiladas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DonkeyKong_L02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEspinasAfiladas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EspinasAfiladas.h" },
		{ "ModuleRelativePath", "EspinasAfiladas.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEspinasAfiladas_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEstorboEspinas_NoRegister, (int32)VTABLE_OFFSET(AEspinasAfiladas, IEstorboEspinas), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEspinasAfiladas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEspinasAfiladas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEspinasAfiladas_Statics::ClassParams = {
		&AEspinasAfiladas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEspinasAfiladas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEspinasAfiladas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEspinasAfiladas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEspinasAfiladas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEspinasAfiladas, 462730457);
	template<> DONKEYKONG_L02_API UClass* StaticClass<AEspinasAfiladas>()
	{
		return AEspinasAfiladas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEspinasAfiladas(Z_Construct_UClass_AEspinasAfiladas, &AEspinasAfiladas::StaticClass, TEXT("/Script/DonkeyKong_L02"), TEXT("AEspinasAfiladas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEspinasAfiladas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
