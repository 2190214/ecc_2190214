#pragma once

#include <string>
using namespace std;

#include "Sheep.h"

class Shepherd
{
private:
	string		name;				// ���O
	int			num;				// �r�̐�
public:
	Shepherd(string n, int i);
	~Shepherd();
	void intro();
};
