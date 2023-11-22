// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Ball.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABall;
class APlaneObject;
#ifdef MYPROJECT_Ball_generated_h
#error "Ball.generated.h already included, missing '#pragma once' in Ball.h"
#endif
#define MYPROJECT_Ball_generated_h

#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_SPARSE_DATA
#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSphereToPlane); \
	DECLARE_FUNCTION(execCollision); \
	DECLARE_FUNCTION(execGetSpeed);


#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSphereToPlane); \
	DECLARE_FUNCTION(execCollision); \
	DECLARE_FUNCTION(execGetSpeed);


#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_ACCESSORS
#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABall(); \
	friend struct Z_Construct_UClass_ABall_Statics; \
public: \
	DECLARE_CLASS(ABall, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject"), NO_API) \
	DECLARE_SERIALIZER(ABall)


#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	NO_API virtual ~ABall();


#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABall(ABall&&); \
	NO_API ABall(const ABall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABall); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABall) \
	NO_API virtual ~ABall();


#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_12_PROLOG
#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_SPARSE_DATA \
	FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_RPC_WRAPPERS \
	FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_ACCESSORS \
	FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_INCLASS \
	FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_SPARSE_DATA \
	FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_ACCESSORS \
	FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT_API UClass* StaticClass<class ABall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Tribs_OneDrive_Documents_Unreal_Projects_MyProject_Source_MyProject_Public_Ball_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
