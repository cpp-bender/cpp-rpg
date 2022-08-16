#include <iostream>
#include <windows.h>

#include "Game.h"
#include "Util.h"
#include "../stories/BaseStory.h"

Game::Game(BaseStory* story)
{
	m_Story = story;
}

void Game::Awake()
{
	Util::SetTitle("Simple RPG: Prologue");

	Util::PrintSlow("Welcome to Simple RPG");

	Util::Wait(1.0F);

	Util::PrintSlow("What you are about to play is just a story came out of a Game Dev.");

	Util::Wait(1.0F);
}

void Game::Start()
{
	Util::PrintSlow("Now, press enter key to continue");

	Util::WaitAnyKey();

	Util::Clear();

	m_Story->Start();
}

void Game::End()
{
	Util::Clear();

	Util::SetTitle("Simple RPG: Game Over");

	Util::PrintSlow("Turns out that not every story has a meaning in life");

	Util::Wait(1.0f);

	Util::PrintSlow("For example, this story is completely bullshit");

	Util::Wait(1.0f);

	Util::PrintSlow("But, the creator of story which is me has made it for only one purpose");

	Util::Wait(1.0f);

	Util::PrintSlow("Which is ............");

	Util::PrintSlow("GET INSIDE C++");

	Util::Wait(1.0f);

	Util::PrintSlow("Now, Whether or not You understand this story, I got what I wanted");

	Util::Wait(1.0F);

	Util::PrintSlow("I MADE MY EVER FIRST GAME WRITTEN IN C++");

	Util::Wait(1.0f);

	Util::PrintSlow("So, big thanks to you. You now can leave :)");

	Util::Wait(1.0f);
}