#pragma once
class Story
{
private:
	const char* m_StoryText = "You end up in a hole. It's dark as fuck. And you don't know where to go";
public:
	Story();
	~Story();
	void play();
};

