#include <iostream>
#include "src\Game.h"
#include <Windows.h>

int main()
{
	bool m_ApplicationRunning = 1;

	while (m_ApplicationRunning)
	{
		//Game Code
		Game game;

		game.Init();

		std::cin.get();
	}
}