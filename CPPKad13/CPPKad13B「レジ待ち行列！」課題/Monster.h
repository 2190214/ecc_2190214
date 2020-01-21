#pragma once

#include <string>
using namespace std;

class Monster
{
private:
	char*		name;					// –¼‘O
public:
	Monster();
	operator const char*() { return name; }
};
