// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NMPGAME_NMPGameCharacter_generated_h
#error "NMPGameCharacter.generated.h already included, missing '#pragma once' in NMPGameCharacter.h"
#endif
#define NMPGAME_NMPGameCharacter_generated_h

#define NMPGame_Source_NMPGame_NMPGameCharacter_h_9_RPC_WRAPPERS
#define NMPGame_Source_NMPGame_NMPGameCharacter_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define NMPGame_Source_NMPGame_NMPGameCharacter_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesANMPGameCharacter(); \
	friend NMPGAME_API class UClass* Z_Construct_UClass_ANMPGameCharacter(); \
	public: \
	DECLARE_CLASS(ANMPGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/NMPGame"), NO_API) \
	DECLARE_SERIALIZER(ANMPGameCharacter) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NMPGame_Source_NMPGame_NMPGameCharacter_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesANMPGameCharacter(); \
	friend NMPGAME_API class UClass* Z_Construct_UClass_ANMPGameCharacter(); \
	public: \
	DECLARE_CLASS(ANMPGameCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/NMPGame"), NO_API) \
	DECLARE_SERIALIZER(ANMPGameCharacter) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define NMPGame_Source_NMPGame_NMPGameCharacter_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANMPGameCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANMPGameCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANMPGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANMPGameCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANMPGameCharacter(ANMPGameCharacter&&); \
	NO_API ANMPGameCharacter(const ANMPGameCharacter&); \
public:


#define NMPGame_Source_NMPGame_NMPGameCharacter_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANMPGameCharacter(ANMPGameCharacter&&); \
	NO_API ANMPGameCharacter(const ANMPGameCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANMPGameCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANMPGameCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANMPGameCharacter)


#define NMPGame_Source_NMPGame_NMPGameCharacter_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ANMPGameCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ANMPGameCharacter, FollowCamera); }


#define NMPGame_Source_NMPGame_NMPGameCharacter_h_6_PROLOG
#define NMPGame_Source_NMPGame_NMPGameCharacter_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPGame_Source_NMPGame_NMPGameCharacter_h_9_PRIVATE_PROPERTY_OFFSET \
	NMPGame_Source_NMPGame_NMPGameCharacter_h_9_RPC_WRAPPERS \
	NMPGame_Source_NMPGame_NMPGameCharacter_h_9_INCLASS \
	NMPGame_Source_NMPGame_NMPGameCharacter_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NMPGame_Source_NMPGame_NMPGameCharacter_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NMPGame_Source_NMPGame_NMPGameCharacter_h_9_PRIVATE_PROPERTY_OFFSET \
	NMPGame_Source_NMPGame_NMPGameCharacter_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	NMPGame_Source_NMPGame_NMPGameCharacter_h_9_INCLASS_NO_PURE_DECLS \
	NMPGame_Source_NMPGame_NMPGameCharacter_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NMPGame_Source_NMPGame_NMPGameCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
