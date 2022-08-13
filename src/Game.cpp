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
	for (size_t i = 0; i <strlen(m_WelcomeText); i++)
	{
		print(m_WelcomeText[i]);
		Sleep(100);
	}

	println("");
}