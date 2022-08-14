#include <windows.h>

#include "src\Game.h"
#include "src\GameMacros.h"
#include "src\Story.h"

int main()
{
	//Game Loop
	Game game;

	game.Awake();

	Sleep(1000);

	Story story;

	game.Start(story);

	game.Update();

	game.End();
}