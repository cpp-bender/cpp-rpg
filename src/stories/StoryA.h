#pragma once
#include "BaseStory.h"

class StoryA: public BaseStory
{
public:
	StoryA();
	void Start() override;
	void Choose() override;
	void SuccessEnd() override;
	void FailEnd() override;
};

