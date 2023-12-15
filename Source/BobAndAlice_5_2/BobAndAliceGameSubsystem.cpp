#include "BobAndAliceGameSubsystem.h"

void UBobAndAliceGameSubsystem::Initialize(
	FSubsystemCollectionBase &Collection) {
	Super::Initialize(Collection);
	timeRemaining = 45.0f;
}

void UBobAndAliceGameSubsystem::Deinitialize() { Super::Deinitialize(); }

void UBobAndAliceGameSubsystem::SetData(bool currentDelivered, float currentTime, bool currentCollected)
{
	timeRemaining = currentTime;
	isDelivered = currentDelivered;
	isCollected = currentCollected;
}
