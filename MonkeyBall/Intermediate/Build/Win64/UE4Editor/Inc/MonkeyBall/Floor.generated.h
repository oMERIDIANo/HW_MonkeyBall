// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MONKEYBALL_Floor_generated_h
#error "Floor.generated.h already included, missing '#pragma once' in Floor.h"
#endif
#define MONKEYBALL_Floor_generated_h

#define MonkeyBall_Source_MonkeyBall_Floor_h_14_SPARSE_DATA
#define MonkeyBall_Source_MonkeyBall_Floor_h_14_RPC_WRAPPERS
#define MonkeyBall_Source_MonkeyBall_Floor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define MonkeyBall_Source_MonkeyBall_Floor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFloor(); \
	friend struct Z_Construct_UClass_AFloor_Statics; \
public: \
	DECLARE_CLASS(AFloor, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonkeyBall"), NO_API) \
	DECLARE_SERIALIZER(AFloor)


#define MonkeyBall_Source_MonkeyBall_Floor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFloor(); \
	friend struct Z_Construct_UClass_AFloor_Statics; \
public: \
	DECLARE_CLASS(AFloor, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonkeyBall"), NO_API) \
	DECLARE_SERIALIZER(AFloor)


#define MonkeyBall_Source_MonkeyBall_Floor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFloor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFloor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloor(AFloor&&); \
	NO_API AFloor(const AFloor&); \
public:


#define MonkeyBall_Source_MonkeyBall_Floor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFloor(AFloor&&); \
	NO_API AFloor(const AFloor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFloor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFloor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFloor)


#define MonkeyBall_Source_MonkeyBall_Floor_h_14_PRIVATE_PROPERTY_OFFSET
#define MonkeyBall_Source_MonkeyBall_Floor_h_11_PROLOG
#define MonkeyBall_Source_MonkeyBall_Floor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonkeyBall_Source_MonkeyBall_Floor_h_14_PRIVATE_PROPERTY_OFFSET \
	MonkeyBall_Source_MonkeyBall_Floor_h_14_SPARSE_DATA \
	MonkeyBall_Source_MonkeyBall_Floor_h_14_RPC_WRAPPERS \
	MonkeyBall_Source_MonkeyBall_Floor_h_14_INCLASS \
	MonkeyBall_Source_MonkeyBall_Floor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MonkeyBall_Source_MonkeyBall_Floor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonkeyBall_Source_MonkeyBall_Floor_h_14_PRIVATE_PROPERTY_OFFSET \
	MonkeyBall_Source_MonkeyBall_Floor_h_14_SPARSE_DATA \
	MonkeyBall_Source_MonkeyBall_Floor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	MonkeyBall_Source_MonkeyBall_Floor_h_14_INCLASS_NO_PURE_DECLS \
	MonkeyBall_Source_MonkeyBall_Floor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONKEYBALL_API UClass* StaticClass<class AFloor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MonkeyBall_Source_MonkeyBall_Floor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
