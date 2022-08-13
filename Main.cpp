#include <iostream>
#include "src\Game.h"
#include <Windows.h>
#include "src\GameMacros.h"

int main()
{
	bool m_ApplicationRunning = 1;

	while (m_ApplicationRunning)
	{
		//Game Code
		Game game;

		game.Init();

		Sleep(1000);

		game.Start();

		waitAnyKey();
	}
}