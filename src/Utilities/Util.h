#pragma once

#include <iostream>
#include <string>


class Util
{
public:
	static void PrintSlow(const std::string& text);
	static void PrintLine();
	static void WaitAnyKey();
private:
	const static int m_Delay = 100;
};