//Predefines includes
#include <windows.h>

//Custom includes
#include "src\Utilities\Game.h"
#include "src\stories\BaseStory.h"
#include "src\stories\StoryA.h"

int main()
{
	//Game Loop
	BaseStory* storyA = new StoryA();

	Game game(storyA);

	game.Awake();

	game.Start();

	game.End();

	delete storyA;
}