#include "Game.h"
#include <iostream>
#include <Windows.h>
#include "GameMacros.h"

Game::Game()
{
	SetConsoleTitleA(m_Name);
}

Game::~Game()
{

}

void Game::Init()
{
	printSlow(m_WelcomeText);
	
	println("");
}

void Game::Start()
{
	printSlow("Press any key to continue");

	waitAnyKey();

	system("CLS");
}