// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "BobAndAliceGameSubsystem.generated.h"

UCLASS(Blueprintable, BlueprintType)
class BOBANDALICE_5_2_API UBobAndAliceGameSubsystem : public UGameInstanceSubsystem
{
  GENERATED_BODY()

public:
  virtual void Initialize(FSubsystemCollectionBase &Collection) override;

  virtual void Deinitialize() override;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, BlueprintType, Category = "State")
  bool bIsPackageCollected;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, BlueprintType, Category ="State")
  bool bIsPackageDelivered;

  UPROPERTY(VisibleAnywhere, BlueprintReadOnly,BlueprintType, Category = "State")
  float TimeRemaining;

  UFUNCTION(BlueprintCallable, Blueprintable, BlueprintType, Category = "Game State")
  void SetPackageCollected(bool bCollected);

  UFUNCTION(BlueprintCallable, Blueprintable, BlueprintType, Category = "Game State")
  void SetPackageDelivered(bool bDelivered);

  UFUNCTION(BlueprintCallable, Blueprintable, BlueprintType, Category = "Game State")
  void SetRemainingTime(float Time);

  UFUNCTION(BlueprintCallable, Blueprintable, BlueprintType, Category = "Game State")
  bool GetPackageCollected() const;

  UFUNCTION(BlueprintCallable, Blueprintable, BlueprintType, Category = "Game State")
  bool GetPackageDelivered() const;

  UFUNCTION(BlueprintCallable, Blueprintable, BlueprintType, Category = "Game State")
  float GetRemainingTime() const;

};
