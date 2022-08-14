#pragma once
#include "Story.h"

class Game
{
private:
	const char* m_Name = "Simple RPG";
	const char* m_WelcomeText = "Welcome to Simple RPG. Be carefull when choosing. You might end up losing your mind!";
	Story m_Story;

public:
	Game();
	~Game();
	void Awake();
	void Start(Story story);
	void Update();
	void End();
};

