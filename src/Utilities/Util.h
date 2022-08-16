#pragma once

#include <iostream>
#include <string>


class Util
{
public:
	static void PrintSlow(const std::string& text);
	static void Wait(const float& delay);
	static void PrintLine();
	static void WaitAnyKey();
	static void Clear();
	static void SetTitle(const char* title);
private:
	const static int m_Delay = 100;
};