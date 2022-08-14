#include "BaseStory.h"
#include <iostream>

void BaseStory::Start()
{
	std::cout << m_StartText<< std::endl;

	Choose();
}

void BaseStory::Choose()
{
	std::cout << m_ChooseText << std::endl;

	End();
}

void BaseStory::End()
{
	std::cout << m_SuccesText << std::endl;

	return;
}
