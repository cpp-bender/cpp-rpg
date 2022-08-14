#pragma once
#include "BaseStory.h"

class StoryA: public BaseStory
{
public:
	StoryA();
	void Start() override;
	void Choose() override;
	void End() override;
};

