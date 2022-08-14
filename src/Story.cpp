#include <windows.h>

#include "GameMacros.h"
#include "Story.h"

Story::Story()
{

}

Story::~Story()
{

}

void Story::play()
{
	printSlow(m_StoryText);
}