#pragma once

#include "CoreMinimal.h"

#include "BobAndAliceGameSubsystem.generated.h"

UCLASS()
class BOBANDALICE_5_2_API UBobAndAliceGameSubsystem : public UGameInstanceSubsystem
{
  GENERATED_BODY()

public:
  virtual void Initialize(FSubsystemCollectionBase &Collection) override;

  virtual void Deinitialize() override;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
  float timeRemaining;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
  bool isDelivered;

  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variables")
  bool isCollected;

  UFUNCTION(BlueprintCallable, Category = "Variables")
  void SetData (bool currentDelivered, float currentTime, bool currentCollected);


};
