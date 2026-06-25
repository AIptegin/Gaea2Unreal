// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GMCSettings.h"

#ifdef GAEAUETOOLSEDITOR_GMCSettings_generated_h
#error "GMCSettings.generated.h already included, missing '#pragma once' in GMCSettings.h"
#endif
#define GAEAUETOOLSEDITOR_GMCSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FGaeaLandscapeSetting *********************************************
struct Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics;
GAEAUETOOLSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGaeaLandscapeSetting(ETypeConstructPhase);

#define FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics; \
	UE_NODEBUG static UScriptStruct* StaticStruct() { return Z_Construct_UScriptStruct_FGaeaLandscapeSetting(ETypeConstructPhase::Inner); }


struct FGaeaLandscapeSetting;
// ********** End ScriptStruct FGaeaLandscapeSetting ***********************************************

// ********** Begin Class UGMCSettings *************************************************************
struct Z_Construct_UClass_UGMCSettings_Statics;
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGMCSettings(ETypeConstructPhase);

#define FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UGMCSettings_Statics; \
	friend GAEAUETOOLSEDITOR_API UClass* ::Z_Construct_UClass_UGMCSettings(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UGMCSettings, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GaeaUEToolsEditor"), Z_Construct_UClass_UGMCSettings) \
	DECLARE_SERIALIZER(UGMCSettings)


#define FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGMCSettings(UGMCSettings&&) = delete; \
	UGMCSettings(const UGMCSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGMCSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGMCSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGMCSettings)


#define FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_47_PROLOG
#define FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_INCLASS_NO_PURE_DECLS \
	FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h_50_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGMCSettings;

// ********** End Class UGMCSettings ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h

// ********** Begin Enum ELandscapeBlendLayersType *************************************************
#define FOREACH_ENUM_ELANDSCAPEBLENDLAYERSTYPE(op) \
	op(ELandscapeBlendLayersType::LB_WeightedBlend) \
	op(ELandscapeBlendLayersType::LB_AlphaBlends) \
	op(ELandscapeBlendLayersType::LB_HeightBlends) 

enum class ELandscapeBlendLayersType : uint8;
template<> struct TIsUEnumClass<ELandscapeBlendLayersType> { enum { Value = true }; };
template<> UE_NODEBUG GAEAUETOOLSEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeBlendLayersType>();
// ********** End Enum ELandscapeBlendLayersType ***************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
