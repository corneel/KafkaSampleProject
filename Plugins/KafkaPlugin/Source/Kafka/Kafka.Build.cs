// Copyright 2018 Augmented Enterprise, Inc. All Rights Reserved.

using System;
using System.IO;
using System.Collections.Generic;
using System.Reflection;
using System.Diagnostics;
using System.Runtime.Serialization;
//using Tools.DotNETCommon;
using UnrealBuildTool;

public class Kafka : ModuleRules
{
    public Kafka(ReadOnlyTargetRules Target) : base(Target)
    {
        //PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bEnforceIWYU = false;

        //PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "../ThirdParty"));
        PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "../ThirdParty/librdkafka.redist.1.8.2/build/native/include/librdkafka"));

        PublicIncludePaths.AddRange(
            new string[] {
                //"Kafka/Public",
                //"ThirdParty"

                
				
				// ... add public include paths required here ...
			}
            );


        PrivateIncludePaths.AddRange(
            new string[] {
                //"Kafka/Private",
                //"Kafka/Public",
                //"ThirdParty",
                //"ThirdParty/librdkafka.redist.0.11.4/build/native/include/librdkafka"
				
				// ... add other private include paths required here ...
			}
            );


        PublicDependencyModuleNames.AddRange(
            new string[]
            {
                "Core",
				
				// ... add other public dependencies that you statically link with here ...
			}
            );


        PrivateDependencyModuleNames.AddRange(
            new string[]
            {
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",

				// ... add private dependencies that you statically link with here ...	
			}
            );


        DynamicallyLoadedModuleNames.AddRange(
            new string[]
            {


            }
            );

        if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            

            var basePath = Path.GetDirectoryName(RulesCompiler.GetFileNameFromType(GetType()));
            var LibraryPath = Path.Combine(basePath, "../ThirdParty/librdkafka.redist.1.8.2/build/native/lib/win/x64/win-x64-Release/v140");

            PublicAdditionalLibraries.Add(LibraryPath + "/librdkafkacpp.lib");                          // link libraries
            PublicAdditionalLibraries.Add(LibraryPath + "/librdkafka.lib");

            var BinariesPath = Path.Combine(basePath, "../ThirdParty/librdkafka.redist.1.8.2/runtimes/win-x64/native");

            RuntimeDependencies.Add(Path.Combine(BinariesPath, "libcrypto-1_1-x64.dll"));
            RuntimeDependencies.Add(Path.Combine(BinariesPath, "librdkafka.dll"));
            RuntimeDependencies.Add(Path.Combine(BinariesPath, "librdkafkacpp.dll"));
            RuntimeDependencies.Add(Path.Combine(BinariesPath, "libssl-1_1-x64.dll"));
            RuntimeDependencies.Add(Path.Combine(BinariesPath, "msvcp140.dll"));
            RuntimeDependencies.Add(Path.Combine(BinariesPath, "vcruntime140.dll"));
            RuntimeDependencies.Add(Path.Combine(BinariesPath, "zlib1.dll"));
            RuntimeDependencies.Add(Path.Combine(BinariesPath, "zstd.dll"));

        }

    }
}
