#include "Game.h"
#include <iostream>
#include <Windows.h>

Game::Game(const char* name)
{
	m_Name = name;
	
	SetConsoleTitleA(m_Name);
}

Game::~Game()
{

}