#pragma once

#include <iostream>
using namespace std;

// HotDrink�N���X
class HotDrink
{
private:
	char*	name;
public:
	HotDrink(char* n) : name(n) { cout << "--- " << name << "�̃��V�s�����o���܂����I ---" << endl; }
	~HotDrink() { cout << "--- " << name << "�̃��V�s��Еt���܂����I ---" << endl; }

	void makeHotDrink()
	{
		boilWater();
		addDrink();
		pourInCup();
		addTopping();
	}
private:
	void boilWater() { cout << "�����𕦂����܂����I" << endl; }
	virtual void addDrink() {}
	void pourInCup() { cout << "�J�b�v�ɒ����܂����I" << endl; }
	virtual void addTopping() {}
};

// HotWater�N���X
class HotWater : public HotDrink
{
public:
	HotWater() : HotDrink("����") {}
};

// Cofee�N���X
class Coffee : public HotDrink
{
public:
	Coffee() :HotDrink("�R�[�q�[") {}
private:
	void addDrink() { cout << "�R�[�q�[���h���b�v���܂����I" << endl; }
};

// Tea�N���X
class Tea : public HotDrink
{
public:
	Tea() : HotDrink("�g��") {}
private:
	void addDrink() { cout << "�e�B�[�o�b�O��Z���܂����I" << endl; }
};

// Yuzu�N���X�i�䂸���j
class Yuzu : public HotDrink
{
public:
	Yuzu() : HotDrink("�䂸��") {}
private:
	void addDrink() { cout << "�䂸�W���������܂����I" << endl; }
	void addTopping() { cout << "�͂��݂������܂����I" << endl; }
};
