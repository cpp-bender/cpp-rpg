#include <iostream>

#include "StoryA.h"
#include "../Utilities/Util.h"

StoryA::StoryA()
{
}

void StoryA::Start()
{
	Util::SetTitle("Simple RPG: The Beginning");

	Util::PrintSlow("Birds, birds you keep telling yourself. There's a bird chirping outside of the building.");
	
	Util::Wait(1.0F);

	Util::PrintSlow("Something happened!");

	Util::Wait(1.0F);

	Util::PrintSlow("You don't know what but for some reason you go to sleep.");

	Util::Wait(1.0F);

	Util::PrintSlow("You open your eyes and realize something pushed you and you ended up in a hole");

	Util::Wait(1.0F);

	Util::PrintSlow("But, you have no time!");

	Util::Wait(.5F);

	Choose();
}

void StoryA::Choose()
{
	Util::PrintSlow("You start to hear something that is coming towards you");

	Util::PrintSlow("Choose what to do");

	Util::PrintSlow("1 - Hide");

	Util::PrintSlow("2 - Get a little back and be ready to fight!");

	int i = 0;

	std::cin >> i;

	if (i == 1)
	{
		SuccessEnd();
	}

	else
	{
		FailEnd();
	}
}

void StoryA::SuccessEnd()
{
	Util::PrintSlow("You chose to hide");

	Util::Wait(1.0f);

	Util::PrintSlow("Something little falls down");

	Util::Wait(.25f);

	Util::PrintSlow("You see him circuling around");

	Util::Wait(.25f);

	Util::PrintSlow("As he turns his back to you. You grab your sword");

	Util::Wait(.25f);

	Util::PrintSlow("And, jump right onto him to kill");

	Util::Wait(.25f);

	Util::PrintSlow("Fortunately, you are fast enough to kill him");

	Util::Wait(.25f);

	Util::PrintSlow("You cut his head off and he dies");

	Util::Wait(.25f);

	Util::PrintSlow("Well done!");

	Util::Wait(2.0f);
}

void StoryA::FailEnd()
{
	Util::PrintSlow("You chose to stay and fight");

	Util::Wait(1.0F);

	Util::PrintSlow("A little creator falls down as you stare at it");

	Util::Wait(.25F);

	Util::PrintSlow("Says, chill warrior, I am a friend");

	Util::Wait(.25f);

	Util::PrintSlow("He moves his pawn to you to shake your hands");

	Util::Wait(.25f);

	Util::PrintSlow("You do the same.");

	Util::Wait(.25f);

	Util::PrintSlow("As soon as he touches your human hand, He CRUSHES DA FUCK OUT THEM");

	Util::PrintSlow("You start yelling. But, he doesn't stop");
	
	Util::PrintSlow("You are DEAD!");

	Util::Wait(2.0F);

	return;
}