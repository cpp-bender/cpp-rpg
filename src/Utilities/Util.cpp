#include <string>
#include <Windows.h>

#include "Util.h"


void Util::PrintSlow(const std::string& text)
{
	for (size_t i = 0; i < text.size(); i++)
	{
		std::cout << text[i];

		Sleep(m_Delay);
	}

	PrintLine();
}

void Util::Wait(const float& delay)
{
	Sleep(delay * 1000.0f);
}

void Util::PrintLine()
{
	std::cout << "" << std::endl;
}

void Util::WaitAnyKey()
{
	std::cin.get();
}
