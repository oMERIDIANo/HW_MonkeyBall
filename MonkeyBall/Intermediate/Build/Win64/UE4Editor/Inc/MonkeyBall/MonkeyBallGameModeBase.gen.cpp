// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MonkeyBall/MonkeyBallGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonkeyBallGameModeBase() {}
// Cross Module References
	MONKEYBALL_API UClass* Z_Construct_UClass_AMonkeyBallGameModeBase_NoRegister();
	MONKEYBALL_API UClass* Z_Construct_UClass_AMonkeyBallGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MonkeyBall();
// End Cross Module References
	void AMonkeyBallGameModeBase::StaticRegisterNativesAMonkeyBallGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMonkeyBallGameModeBase_NoRegister()
	{
		return AMonkeyBallGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMonkeyBallGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonkeyBallGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MonkeyBall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonkeyBallGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MonkeyBallGameModeBase.h" },
		{ "ModuleRelativePath", "MonkeyBallGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonkeyBallGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonkeyBallGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonkeyBallGameModeBase_Statics::ClassParams = {
		&AMonkeyBallGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMonkeyBallGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMonkeyBallGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonkeyBallGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonkeyBallGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonkeyBallGameModeBase, 110747647);
	template<> MONKEYBALL_API UClass* StaticClass<AMonkeyBallGameModeBase>()
	{
		return AMonkeyBallGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonkeyBallGameModeBase(Z_Construct_UClass_AMonkeyBallGameModeBase, &AMonkeyBallGameModeBase::StaticClass, TEXT("/Script/MonkeyBall"), TEXT("AMonkeyBallGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonkeyBallGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
