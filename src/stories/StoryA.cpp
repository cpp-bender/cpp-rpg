#include <iostream>

#include "StoryA.h"
#include "../Utilities/Util.h"

StoryA::StoryA()
{
}

void StoryA::Start()
{
	//Line 1
	Util::PrintSlow("Birds, birds you keep telling yourself.There's a bird outside of the building.");

	//Line 2
	Util::PrintSlow("Something happened.You don't know what but for some reason you wake up inside a deep hole");

	//Line 3
	Util::PrintSlow("Deep hole fills you with determinati....");

	//Line 4
	Util::PrintSlow("Oh wait this ain't Undertale :)");

	//Line 5
	Util::PrintSlow("It is much like, Deep hole fucks you from inside every day");

	Choose();
}

void StoryA::Choose()
{
	//Line 1
	Util::PrintSlow("Something in front of you is shining");

	//Line 2
	Util::PrintSlow("You wanna go take a closer look?");

	//Line 3
	Util::PrintSlow("Press 1 to go take a look");

	//Line 4
	Util::PrintSlow("Press 2 to stop");

	End();
}

void StoryA::End()
{
	//Line 1
	Util::PrintSlow("Will implement this");

	return;
}