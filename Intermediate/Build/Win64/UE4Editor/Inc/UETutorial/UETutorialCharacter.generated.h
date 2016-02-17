// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UETUTORIAL_UETutorialCharacter_generated_h
#error "UETutorialCharacter.generated.h already included, missing '#pragma once' in UETutorialCharacter.h"
#endif
#define UETUTORIAL_UETutorialCharacter_generated_h

#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollectBatteries) \
	{ \
		P_FINISH; \
		this->CollectBatteries(); \
	}


#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollectBatteries) \
	{ \
		P_FINISH; \
		this->CollectBatteries(); \
	}


#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_EVENT_PARMS \
	struct UETutorialCharacter_eventPowerUp_Parms \
	{ \
		float BatteryPower; \
	};


extern UETUTORIAL_API  FName UETUTORIAL_PowerUp;
#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_CALLBACK_WRAPPERS
#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAUETutorialCharacter(); \
	friend UETUTORIAL_API class UClass* Z_Construct_UClass_AUETutorialCharacter(); \
	public: \
	DECLARE_CLASS(AUETutorialCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, UETutorial, NO_API) \
	DECLARE_SERIALIZER(AUETutorialCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AUETutorialCharacter*>(this); }


#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAUETutorialCharacter(); \
	friend UETUTORIAL_API class UClass* Z_Construct_UClass_AUETutorialCharacter(); \
	public: \
	DECLARE_CLASS(AUETutorialCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, UETutorial, NO_API) \
	DECLARE_SERIALIZER(AUETutorialCharacter) \
	/** Indicates whether the class is compiled into the engine */    enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	virtual UObject* _getUObject() const override { return const_cast<AUETutorialCharacter*>(this); }


#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUETutorialCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUETutorialCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUETutorialCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUETutorialCharacter); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AUETutorialCharacter(const AUETutorialCharacter& InCopy); \
public:


#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API AUETutorialCharacter(const AUETutorialCharacter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUETutorialCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUETutorialCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUETutorialCharacter)


#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_6_PROLOG \
	PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_EVENT_PARMS


#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_RPC_WRAPPERS \
	PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_CALLBACK_WRAPPERS \
	PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_INCLASS \
	PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_CALLBACK_WRAPPERS \
	PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_INCLASS_NO_PURE_DECLS \
	PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID PowerUpTutorial_Source_UETutorial_UETutorialCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS