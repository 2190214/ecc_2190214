#pragma once

#include <string>
using namespace std;

#include "Sheep.h"

class Shepherd
{
private:
	string		name;				// –¼‘O
	int			num;				// —r‚Ì”
public:
	Shepherd(string n, int i);
	~Shepherd();
	void intro();
};
