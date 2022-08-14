#pragma once
#include "stories\BaseStory.h"

class Game
{
private:
	const char* m_Name = "Simple RPG";
	const char* m_WelcomeText = "Welcome to Simple RPG. Be carefull when choosing. You might end up losing your mind!";
	BaseStory* m_Story;

public:
	Game(BaseStory* story);
	void Awake();
	void Start();
	void End();
};

