#pragma once

#include <string>
using namespace std;

// Sheepクラスの定義
class Sheep
{
private:
	string	name;
	static int rest;
public:
	Sheep();
	~Sheep();
	void showData();
};
