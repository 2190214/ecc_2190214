#pragma once

#include <string>
using namespace std;

class Monster
{
private:
	string		name;					// ���O
public:
	Monster(string n);
	Monster();
	Monster(const Monster& org);
	~Monster();
	void intro();						// ���ȏЉ�
};
