#pragma once
#include <iostream>
#include <synchapi.h>

#define print(x) std::cout<<x;
#define waitAnyKey() std::cin.get();
#define println(x) std::cout<<x<<std::endl;
#define printSlow(x) for (size_t i = 0; i < strlen(x); i++) {print(x[i]); Sleep(100);}
