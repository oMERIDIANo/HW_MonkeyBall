// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef MONKEYBALL_Item_generated_h
#error "Item.generated.h already included, missing '#pragma once' in Item.h"
#endif
#define MONKEYBALL_Item_generated_h

#define MonkeyBall_Source_MonkeyBall_Item_h_15_SPARSE_DATA
#define MonkeyBall_Source_MonkeyBall_Item_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MonkeyBall_Source_MonkeyBall_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MonkeyBall_Source_MonkeyBall_Item_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonkeyBall"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define MonkeyBall_Source_MonkeyBall_Item_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAItem(); \
	friend struct Z_Construct_UClass_AItem_Statics; \
public: \
	DECLARE_CLASS(AItem, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonkeyBall"), NO_API) \
	DECLARE_SERIALIZER(AItem)


#define MonkeyBall_Source_MonkeyBall_Item_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public:


#define MonkeyBall_Source_MonkeyBall_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AItem(AItem&&); \
	NO_API AItem(const AItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItem)


#define MonkeyBall_Source_MonkeyBall_Item_h_15_PRIVATE_PROPERTY_OFFSET
#define MonkeyBall_Source_MonkeyBall_Item_h_12_PROLOG
#define MonkeyBall_Source_MonkeyBall_Item_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonkeyBall_Source_MonkeyBall_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	MonkeyBall_Source_MonkeyBall_Item_h_15_SPARSE_DATA \
	MonkeyBall_Source_MonkeyBall_Item_h_15_RPC_WRAPPERS \
	MonkeyBall_Source_MonkeyBall_Item_h_15_INCLASS \
	MonkeyBall_Source_MonkeyBall_Item_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MonkeyBall_Source_MonkeyBall_Item_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonkeyBall_Source_MonkeyBall_Item_h_15_PRIVATE_PROPERTY_OFFSET \
	MonkeyBall_Source_MonkeyBall_Item_h_15_SPARSE_DATA \
	MonkeyBall_Source_MonkeyBall_Item_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MonkeyBall_Source_MonkeyBall_Item_h_15_INCLASS_NO_PURE_DECLS \
	MonkeyBall_Source_MonkeyBall_Item_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONKEYBALL_API UClass* StaticClass<class AItem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MonkeyBall_Source_MonkeyBall_Item_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
