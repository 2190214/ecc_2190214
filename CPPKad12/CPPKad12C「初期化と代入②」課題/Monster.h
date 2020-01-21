#pragma once

#include <string>
using namespace std;

class Monster
{
private:
	string		name;					// –¼‘O
public:
	Monster(string n);
	Monster();
	Monster(const Monster& org);
	~Monster();
	void intro();						// ©ŒÈĞ‰î
};
