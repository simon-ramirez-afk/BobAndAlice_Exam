#include "BobAndAliceGameSubsystem.h"

void UBobAndAliceGameSubsystem::Initialize(
    FSubsystemCollectionBase &Collection) {
  Super::Initialize(Collection);
}

void UBobAndAliceGameSubsystem::Deinitialize() { Super::Deinitialize(); }

void UBobAndAliceGameSubsystem::SetPackageCollected(bool bCollected)
{
	bIsPackageCollected = bCollected;
}

void UBobAndAliceGameSubsystem::SetPackageDelivered(bool bDelivered)
{
	 bIsPackageDelivered = bDelivered;
}

void UBobAndAliceGameSubsystem::SetRemainingTime(float Time)
{
	TimeRemaining = Time;
}

bool UBobAndAliceGameSubsystem::GetPackageCollected() const
{
	return bIsPackageCollected;
}

bool UBobAndAliceGameSubsystem::GetPackageDelivered() const
{
	return bIsPackageDelivered;
}

float UBobAndAliceGameSubsystem::GetRemainingTime() const
{
	return TimeRemaining;
}

