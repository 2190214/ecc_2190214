#pragma once

#include <string>
using namespace std;

// Sheep�N���X�̒�`
class Sheep
{
private:
	string	name;
	static int rest;
public:
	Sheep();
	~Sheep();
	void intro();
};
