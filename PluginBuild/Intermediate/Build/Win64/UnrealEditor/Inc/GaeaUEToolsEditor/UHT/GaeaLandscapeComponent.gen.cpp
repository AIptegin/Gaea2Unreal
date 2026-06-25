// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GaeaLandscapeComponent.h"
#include "UObject/SoftObjectPath.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeGaeaLandscapeComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath(ETypeConstructPhase);
ENGINE_API UClass* Z_Construct_UClass_UActorComponent(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_GaeaUEToolsEditor(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGaeaLandscapeComponent(ETypeConstructPhase);
GAEAUETOOLSEDITOR_API UClass* Z_Construct_UClass_UGaeaLandscapeComponent(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UGaeaLandscapeComponent **************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UGaeaLandscapeComponent_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "GaeaLandscapeComponent.h" },
		{ "ModuleRelativePath", "Public/GaeaLandscapeComponent.h" },
		{ "NotBlueprintable", "" },
		{ "NotBlueprintType", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockProperties_MetaData[] = {
		{ "Category", "Gaea Landscape" },
		{ "ModuleRelativePath", "Public/GaeaLandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapFilepath_MetaData[] = {
		{ "Category", "Gaea Landscape" },
		{ "EditCondition", "!LockProperties" },
		{ "FilePathFilter", "png" },
		{ "ModuleRelativePath", "Public/GaeaLandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionFilepath_MetaData[] = {
		{ "Category", "Gaea Landscape" },
		{ "EditCondition", "!LockProperties" },
		{ "FilePathFilter", "json" },
		{ "ModuleRelativePath", "Public/GaeaLandscapeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapFilepaths_MetaData[] = {
		{ "Category", "Gaea Landscape" },
		{ "EditCondition", "!LockProperties" },
		{ "FilePathFilter", "png" },
		{ "ModuleRelativePath", "Public/GaeaLandscapeComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UGaeaLandscapeComponent constinit property declarations ******************
	static void NewProp_LockProperties_SetBit(void* Obj)
	{
		((UGaeaLandscapeComponent*)Obj)->LockProperties = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockProperties;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightmapFilepath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefinitionFilepath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WeightmapFilepaths_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapFilepaths;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UGaeaLandscapeComponent constinit property declarations ********************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGaeaLandscapeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UGaeaLandscapeComponent Property Definitions *****************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_LockProperties = { "LockProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UGaeaLandscapeComponent), &UHT_STATICS::NewProp_LockProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockProperties_MetaData), NewProp_LockProperties_MetaData) };
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_HeightmapFilepath = { "HeightmapFilepath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UGaeaLandscapeComponent, HeightmapFilepath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapFilepath_MetaData), NewProp_HeightmapFilepath_MetaData) }; // 0b92f70c4aaca653170512ccb353f3aa009da14a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_DefinitionFilepath = { "DefinitionFilepath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, STRUCT_OFFSET(UGaeaLandscapeComponent, DefinitionFilepath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefinitionFilepath_MetaData), NewProp_DefinitionFilepath_MetaData) }; // 0b92f70c4aaca653170512ccb353f3aa009da14a
const UECodeGen_Private::FStructPropertyParams UHT_STATICS::NewProp_WeightmapFilepaths_Inner = { "WeightmapFilepaths", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(0, nullptr) }; // 0b92f70c4aaca653170512ccb353f3aa009da14a
const UECodeGen_Private::FArrayPropertyParams UHT_STATICS::NewProp_WeightmapFilepaths = { "WeightmapFilepaths", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, nullptr, nullptr, 1, STRUCT_OFFSET(UGaeaLandscapeComponent, WeightmapFilepaths), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapFilepaths_MetaData), NewProp_WeightmapFilepaths_MetaData) }; // 0b92f70c4aaca653170512ccb353f3aa009da14a
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_LockProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_HeightmapFilepath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_DefinitionFilepath,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeightmapFilepaths_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_WeightmapFilepaths,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UGaeaLandscapeComponent Property Definitions *******************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UActorComponent,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_GaeaUEToolsEditor,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UGaeaLandscapeComponent,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UGaeaLandscapeComponent;
UClass* Z_Construct_UClass_UGaeaLandscapeComponent(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UGaeaLandscapeComponent;
		if (!Z_Registration_Info_UClass_UGaeaLandscapeComponent.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("GaeaLandscapeComponent"),
				Z_Registration_Info_UClass_UGaeaLandscapeComponent.InnerSingleton,
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
		return Z_Registration_Info_UClass_UGaeaLandscapeComponent.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UGaeaLandscapeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGaeaLandscapeComponent.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UGaeaLandscapeComponent.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UGaeaLandscapeComponent);
UGaeaLandscapeComponent::~UGaeaLandscapeComponent() {}
// ********** End Class UGaeaLandscapeComponent ****************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaLandscapeComponent_h__Script_GaeaUEToolsEditor_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGaeaLandscapeComponent, TEXT("UGaeaLandscapeComponent"), &Z_Registration_Info_UClass_UGaeaLandscapeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGaeaLandscapeComponent), 3623932673U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Alp_Documents_llmft_Gaea2Unreal_Release_PluginBuild_HostProject_Plugins_GaeaUnrealTools_Source_GaeaUEToolsEditor_Public_GaeaLandscapeComponent_h__Script_GaeaUEToolsEditor_b7c580fb7ae66cff03fbb493479080d570cd74bf{
	TEXT("/Script/GaeaUEToolsEditor"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
