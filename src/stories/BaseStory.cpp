#include "BaseStory.h"
#include <iostream>
#include <Windows.h>

void BaseStory::Start()
{
	Choose();
}

void BaseStory::Choose()
{
	End();
}

void BaseStory::End()
{
	return;
}
