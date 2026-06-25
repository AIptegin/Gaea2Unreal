// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMCSettings.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeGMCSettings() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath(ETypeConstructPhase);
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunction(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_GaeaUEToolsEditor(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UEnum* Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGMCSettings(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FGaeaLandscapeSetting(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGMCSettings(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Enum ELandscapeBlendLayersType *************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType_Statics
template<> GAEAUETOOLSEDITOR_NON_ATTRIBUTED_API UEnum* StaticEnum<ELandscapeBlendLayersType>()
{
	return Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType(ETypeConstructPhase::Outer);
}
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "Comment", "/**\n * \n */" },
		{ "LB_AlphaBlends.Comment", "/**\n * \n */" },
		{ "LB_AlphaBlends.Name", "ELandscapeBlendLayersType::LB_AlphaBlends" },
		{ "LB_HeightBlends.Comment", "/**\n * \n */" },
		{ "LB_HeightBlends.Name", "ELandscapeBlendLayersType::LB_HeightBlends" },
		{ "LB_WeightedBlend.Comment", "/**\n * \n */" },
		{ "LB_WeightedBlend.Name", "ELandscapeBlendLayersType::LB_WeightedBlend" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeBlendLayersType::LB_WeightedBlend", (int64)ELandscapeBlendLayersType::LB_WeightedBlend },
		{ "ELandscapeBlendLayersType::LB_AlphaBlends", (int64)ELandscapeBlendLayersType::LB_AlphaBlends },
		{ "ELandscapeBlendLayersType::LB_HeightBlends", (int64)ELandscapeBlendLayersType::LB_HeightBlends },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct UHT_STATICS 
const UECodeGen_Private::FEnumParams UHT_STATICS::EnumParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_GaeaUEToolsEditor,
	nullptr,
	"ELandscapeBlendLayersType",
	"ELandscapeBlendLayersType",
	UHT_STATICS::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(UHT_STATICS::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	(uint8)UEnum::EUnderlyingType::uint8,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FEnumRegistrationInfo ZRIE_ELandscapeBlendLayersType;
UEnum* Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!ZRIE_ELandscapeBlendLayersType.OuterSingleton)
		{
			ZRIE_ELandscapeBlendLayersType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType, (UObject*)Z_Construct_UPackage__Script_GaeaUEToolsEditor(ETypeConstructPhase::Outer), TEXT("ELandscapeBlendLayersType"));
		}
		return ZRIE_ELandscapeBlendLayersType.OuterSingleton;
	}
	if (!ZRIE_ELandscapeBlendLayersType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(ZRIE_ELandscapeBlendLayersType.InnerSingleton, UHT_STATICS::EnumParams);
	}
	return ZRIE_ELandscapeBlendLayersType.InnerSingleton;
}
#undef UHT_STATICS
// ********** End Enum ELandscapeBlendLayersType ***************************************************

// ********** Begin ScriptStruct FGaeaLandscapeSetting *********************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics
struct UHT_STATICS
{
	static inline consteval int32 GetStructSize() { return DataSizeOf<FGaeaLandscapeSetting>(); }
	static inline consteval int16 GetStructAlignment() { return alignof(FGaeaLandscapeSetting); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InstancedMaterial_MetaData[] = {
		{ "Category", "Gaea" },
		{ "Comment", "// Material to pull textures from. Used with MS materials, mostly.\n" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
		{ "ToolTip", "Material to pull textures from. Used with MS materials, mostly." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFunctionBase_MetaData[] = {
		{ "Category", "Gaea" },
		{ "Comment", "// Function to create \"instanced\" layer functions from to inject into the landscape master material\n" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
		{ "ToolTip", "Function to create \"instanced\" layer functions from to inject into the landscape master material" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "Gaea" },
		{ "Comment", "// Sets the landscape layer name and layer function name\n" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
		{ "ToolTip", "Sets the landscape layer name and layer function name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerGrouping_MetaData[] = {
		{ "Category", "Gaea" },
		{ "Comment", "// Sets the parameter grouping within the function layer\n" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
		{ "ToolTip", "Sets the parameter grouping within the function layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayerType_MetaData[] = {
		{ "Category", "Gaea" },
		{ "Comment", "// Sets the landscape layer blend type\n" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
		{ "ToolTip", "Sets the landscape layer blend type" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FGaeaLandscapeSetting constinit property declarations *************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstancedMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialFunctionBase;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerGrouping;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeLayerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LandscapeLayerType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FGaeaLandscapeSetting constinit property declarations ***************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGaeaLandscapeSetting>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct UHT_STATICS

// ********** Begin ScriptStruct FGaeaLandscapeSetting Property Definitions ************************
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_InstancedMaterial = { "InstancedMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaLandscapeSetting, InstancedMaterial), Z_Construct_UClass_UMaterialInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InstancedMaterial_MetaData), NewProp_InstancedMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams UHT_STATICS::NewProp_MaterialFunctionBase = { "MaterialFunctionBase", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaLandscapeSetting, MaterialFunctionBase), Z_Construct_UClass_UMaterialFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialFunctionBase_MetaData), NewProp_MaterialFunctionBase_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaLandscapeSetting, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FNamePropertyParams UHT_STATICS::NewProp_LayerGrouping = { "LayerGrouping", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaLandscapeSetting, LayerGrouping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerGrouping_MetaData), NewProp_LayerGrouping_MetaData) };
const UECodeGen_Private::FBytePropertyParams UHT_STATICS::NewProp_LandscapeLayerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams UHT_STATICS::NewProp_LandscapeLayerType = { "LandscapeLayerType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, nullptr, nullptr, 1, STRUCT_OFFSET(FGaeaLandscapeSetting, LandscapeLayerType), Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLayerType_MetaData), NewProp_LandscapeLayerType_MetaData) }; // 8b0f62918c48800e2051469fb610b34be4c7f3d5
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_InstancedMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_MaterialFunctionBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LayerGrouping,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeLayerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeLayerType,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End ScriptStruct FGaeaLandscapeSetting Property Definitions **************************
const UECodeGen_Private::FStructParams UHT_STATICS::StructParams = {
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_GaeaUEToolsEditor,
	nullptr,
	&NewStructOps,
	"GaeaLandscapeSetting",
	UHT_STATICS::PropPointers,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	DataSizeOf<FGaeaLandscapeSetting>(),
	alignof(FGaeaLandscapeSetting),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting;
UScriptStruct* Z_Construct_UScriptStruct_FGaeaLandscapeSetting(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Outer)
	{
		if (!Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.OuterSingleton)
		{
			Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGaeaLandscapeSetting, (UObject*)Z_Construct_UPackage__Script_GaeaUEToolsEditor(ETypeConstructPhase::Outer), TEXT("GaeaLandscapeSetting"));
		}
		return Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.OuterSingleton;
	}
	if (!Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.InnerSingleton, UHT_STATICS::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting.InnerSingleton);
}
#undef UHT_STATICS
// ********** End ScriptStruct FGaeaLandscapeSetting ***********************************************

// ********** Begin Class UGMCSettings *************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UGMCSettings_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "GMCSettings.h" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayerSettings_MetaData[] = {
		{ "Category", "Landscape Layer Creation settings" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContentBrowserPath_MetaData[] = {
		{ "Category", "Landscape Creation settings" },
		{ "ContentDir", "" },
		{ "DisplayName", "Material Save Location" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeMaterialName_MetaData[] = {
		{ "Category", "Landscape Creation settings" },
		{ "ModuleRelativePath", "Public/GMCSettings.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGMCSettings constinit property declarations *****************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeLayerSettings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeLayerSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContentBrowserPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LandscapeMaterialName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGMCSettings constinit property declarations *******************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGMCSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UGMCSettings Property Definitions ****************************************
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_LandscapeLayerSettings_Inner = { "LandscapeLayerSettings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGaeaLandscapeSetting, METADATA_PARAMS(0, nullptr) }; // 8ce92df2284130348b854c77e7991981db3e86a4
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_LandscapeLayerSettings = { "LandscapeLayerSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UGMCSettings, LandscapeLayerSettings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLayerSettings_MetaData), NewProp_LandscapeLayerSettings_MetaData) }; // 8ce92df2284130348b854c77e7991981db3e86a4
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_ContentBrowserPath = { "ContentBrowserPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UGMCSettings, ContentBrowserPath), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContentBrowserPath_MetaData), NewProp_ContentBrowserPath_MetaData) }; // a9ea974572ee54d1b93cb49a6434fdbad40b6bf5
const UECodeGen_Private::FStrPropertyParams UHT_STATICS::NewProp_LandscapeMaterialName = { "LandscapeMaterialName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, nullptr, nullptr, 1, STRUCT_OFFSET(UGMCSettings, LandscapeMaterialName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeMaterialName_MetaData), NewProp_LandscapeMaterialName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeLayerSettings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeLayerSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ContentBrowserPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LandscapeMaterialName,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UGMCSettings Property Definitions ******************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_GaeaUEToolsEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UGMCSettings,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UGMCSettings;
UClass* Z_Construct_UClass_UGMCSettings(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UGMCSettings;
		if (!Z_Registration_Info_UClass_UGMCSettings.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("GMCSettings"),
				Z_Registration_Info_UClass_UGMCSettings.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UGMCSettings.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UGMCSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGMCSettings.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UGMCSettings.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGMCSettings);
// ********** End Class UGMCSettings ***************************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h__Script_GaeaUEToolsEditor_Statics
struct UHT_STATICS
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ Z_Construct_UEnum_GaeaUEToolsEditor_ELandscapeBlendLayersType, TEXT("ELandscapeBlendLayersType"), &ZRIE_ELandscapeBlendLayersType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2333041297U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ Z_Construct_UScriptStruct_FGaeaLandscapeSetting, Z_Construct_UScriptStruct_FGaeaLandscapeSetting_Statics::NewStructOps, TEXT("GaeaLandscapeSetting"),&Z_Registration_Info_UScriptStruct_FGaeaLandscapeSetting, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGaeaLandscapeSetting), 2364091890U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGMCSettings, TEXT("UGMCSettings"), &Z_Registration_Info_UClass_UGMCSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGMCSettings), 1317992470U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GMCSettings_h__Script_GaeaUEToolsEditor_7c93e4221997c0779429e9a53e92c12af3a20907{
	TEXT("/Script/GaeaUEToolsEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	UHT_STATICS::ScriptStructInfo, UE_ARRAY_COUNT(UHT_STATICS::ScriptStructInfo),
	UHT_STATICS::EnumInfo, UE_ARRAY_COUNT(UHT_STATICS::EnumInfo),
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
