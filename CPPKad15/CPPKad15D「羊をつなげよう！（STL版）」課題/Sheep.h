#pragma once

// Sheepクラスの定義
class Sheep
{
private:
	char*	name;
	static int rest;
public:
	Sheep();
	~Sheep();
	void intro();
};
