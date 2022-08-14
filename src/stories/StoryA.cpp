#include <iostream>

#include "StoryA.h"

StoryA::StoryA()
{
	m_StartText = "Welcome to Story A start text";
	m_ChooseText = "Choose from Story A choose tex";
	m_SuccesText = "Story a success tex";
	m_FailText = "Story a fail tex";
}

void StoryA::Start()
{
	std::cout << m_StartText << std::endl;

	Choose();
}

void StoryA::Choose()
{
	std::cout << m_ChooseText << std::endl;

	End();
}

void StoryA::End()
{
	std::cout << m_SuccesText << std::endl;

	return;
}