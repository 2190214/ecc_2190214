#pragma once

#include <string>
using namespace std;

class Monster
{
private:
	string		name;
public:
	Monster();
	Monster(string n);
	~Monster();
	void showData();
};
