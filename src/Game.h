#pragma once

class Game
{
private:
	const char* m_Name = "Simple RPG";
	const char* m_WelcomeText = "Welcome to Simple RPG. Be carefull when choosing. You might end up losing your mind!";

public:
	Game();
	~Game();
	void Init();
};

