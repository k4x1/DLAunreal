#pragma once
#include "CoreMinimal.h"
#include "Walker.generated.h"
USTRUCT(BlueprintType)
struct TERRAINGEN_API FWalker
{
	GENERATED_BODY()
	public:
	FIntPoint Position = FIntPoint(0,0);
	bool bStuck = false;
	int32 StepCount = 0;
	int32 MapSizeX = 0;
	int32 MapSizeY = 0;
	FIntPoint ConnectionDirection = FIntPoint(0,0);
	
	FWalker() {}
	FWalker(int32 MapSizeX, int32 MapSizeY);
	bool StepWalker(const TArray<TArray<bool>>& Map, FIntPoint& OutStuckPos, FIntPoint& OutDirection);
};
