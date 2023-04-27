// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGetChildrenBones.h"

TArray<FName> UMyGetChildrenBones::GetChildBones(USkeletalMeshComponent* SkeletalMesh, FName ParentBoneName)
{
    TArray<FName> ChildBoneNames;

    if (SkeletalMesh)
    {
        const FReferenceSkeleton& RefSkeleton = SkeletalMesh->SkeletalMesh->RefSkeleton;
        const int32 ParentBoneIndex = RefSkeleton.FindBoneIndex(ParentBoneName);

        if (ParentBoneIndex != INDEX_NONE)
        {
            for (const FMeshBoneInfo& BoneInfo : RefSkeleton.GetRefBoneInfo())
            {
                if (BoneInfo.ParentIndex == ParentBoneIndex)
                {
                    ChildBoneNames.Add(BoneInfo.Name);
                }
            }
        }
    }

    return ChildBoneNames;
}
