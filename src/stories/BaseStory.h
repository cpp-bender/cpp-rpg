#pragma once

#include <iostream>

class BaseStory
{
public:
	virtual void Start();
	virtual void Choose();
	virtual void End();
protected:
	std::string m_StartText = "Welcome to story base";
	std::string m_ChooseText = "Choose\n 1 - Do this\n 2 - Do that";
	std::string m_SuccesText = "You nailed it";
	std::string m_FailText = "You failed";
	
};

