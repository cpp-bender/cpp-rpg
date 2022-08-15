#include <iostream>

#include "StoryA.h"
#include "../Util.h"

StoryA::StoryA()
{
	m_StartText = "Birds, birds you keep telling yourself. There's a bird outside of the building.\n";
	"Something happened.You don't know what but for some reason you wake up inside a deep hole.\n";
	"Deep hole fills you with determinati....\n";
	"Oh wait this ain't Undertale :)\n";
	"It is much like, Deep hole fucks you from inside every day\n";

	m_ChooseText = "Something in front of you is shining\n";
	"You wanna go take a closer look?\n";
	"Now, choose wisely\n";
	"Press 1 to go take a look\n";
	"Press 2 to stop\n";

	m_FailText = "will implement later on";

	m_SuccesText = "will implement later on";
}

void StoryA::Start()
{
	Util::PrintSlow(m_StartText);

	Choose();
}

void StoryA::Choose()
{
	Util::PrintSlow(m_ChooseText);

	End();
}

void StoryA::End()
{
	Util::PrintSlow(m_SuccesText);

	return;
}