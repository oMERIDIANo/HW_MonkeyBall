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
#ifdef MONKEYBALL_BasePlayer_generated_h
#error "BasePlayer.generated.h already included, missing '#pragma once' in BasePlayer.h"
#endif
#define MONKEYBALL_BasePlayer_generated_h

#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_SPARSE_DATA
#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_EVENT_PARMS
#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_CALLBACK_WRAPPERS
#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonkeyBall"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_INCLASS \
private: \
	static void StaticRegisterNativesABasePlayer(); \
	friend struct Z_Construct_UClass_ABasePlayer_Statics; \
public: \
	DECLARE_CLASS(ABasePlayer, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MonkeyBall"), NO_API) \
	DECLARE_SERIALIZER(ABasePlayer)


#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasePlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasePlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public:


#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasePlayer(ABasePlayer&&); \
	NO_API ABasePlayer(const ABasePlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasePlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasePlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasePlayer)


#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_PRIVATE_PROPERTY_OFFSET
#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_15_PROLOG \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_EVENT_PARMS


#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_SPARSE_DATA \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_RPC_WRAPPERS \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_CALLBACK_WRAPPERS \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_INCLASS \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_PRIVATE_PROPERTY_OFFSET \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_SPARSE_DATA \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_CALLBACK_WRAPPERS \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_INCLASS_NO_PURE_DECLS \
	MonkeyBall_Source_MonkeyBall_BasePlayer_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MONKEYBALL_API UClass* StaticClass<class ABasePlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MonkeyBall_Source_MonkeyBall_BasePlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
