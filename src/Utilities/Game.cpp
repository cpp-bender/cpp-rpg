#include <iostream>
#include <windows.h>

#include "Game.h"
#include "Util.h"
#include "stories\BaseStory.h"

Game::Game(BaseStory* story)
{
	m_Story = story;
}

void Game::Awake()
{
	Util::PrintSlow(m_WelcomeText);

	Util::PrintLine();
}

void Game::Start()
{
	Util::PrintSlow("Press enter key to continue");

	Util::WaitAnyKey();

	system("CLS");

	m_Story->Start();
}

void Game::End()
{
	//TODO:Complete
}