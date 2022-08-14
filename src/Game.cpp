#include <iostream>
#include <windows.h>

#include "Game.h"
#include "GameMacros.h"

Game::Game()
{
	SetConsoleTitleA(m_Name);
}

Game::~Game()
{

}

void Game::Awake()
{
	printSlow(m_WelcomeText);
	
	println("");
}

void Game::Start(Story story)
{
	m_Story = story;

	printSlow("Press enter key to continue");

	waitAnyKey();

	system("CLS");
}

void Game::Update()
{
	while (true)
	{
		m_Story.play();
	}
}

void Game::End()
{
	//TODO:Complete
}