#include "D:\forkRepos\TerrainGen\Intermediate\Build\Win64\x64\TerrainGenEditor\Development\UnrealEd\SharedPCH.UnrealEd.Project.ValApi.Cpp20.h"
#include "Walker.h"



FWalker::FWalker(int32 MapSizeX, int32 MapSizeY)
{
	Position.X = FMath::RandRange(0, MapSizeX - 1);
	Position.Y = FMath::RandRange(0, MapSizeY - 1);
}

bool FWalker::StepWalker(const TArray<TArray<bool>>& Map, FIntPoint& OutStuckPos, FIntPoint& OutDirection) 
{
	const int32 Width = Map.Num();
	const int32 Height = Map[0].Num();

	FIntPoint Offset;

	do{
		Offset.X = FMath::RandRange(-1, 1);
		Offset.Y = FMath::RandRange(-1, 1);
	}
	while(Offset == FIntPoint::ZeroValue); 
	return false;
}
