#pragma once

#include <string>
using namespace std;

class Monster
{
private:
	char*		name;					// ���O
public:
	Monster();
	operator const char*() { return name; }
};
