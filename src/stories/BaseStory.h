#pragma once

#include <iostream>
#include <string>

class BaseStory
{
public:
	virtual void Start();
	virtual void Choose();
	virtual void End();
};

