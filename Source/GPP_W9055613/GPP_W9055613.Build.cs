// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class GPP_W9055613 : ModuleRules
{
	public GPP_W9055613(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
