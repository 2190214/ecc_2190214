#pragma once

#include <string>
using namespace std;

class Monster
{
private:
	char*		name;					// ���O
public:
	Monster();
	Monster& operator=(const Monster& org);
	operator const char*() { return name; }
};
