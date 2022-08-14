#include <iostream>
#include <windows.h>

#include "Game.h"
#include "GameMacros.h"
#include "stories\BaseStory.h"

Game::Game(BaseStory* story)
{
	m_Story = story;
}

void Game::Awake()
{
	printSlow(m_WelcomeText);
	
	println("");
}

void Game::Start()
{
	printSlow("Press enter key to continue");

	waitAnyKey();

	system("CLS");

	m_Story->Start();
}

void Game::End()
{
	//TODO:Complete
}