#pragma once

#include <iostream>
#include <memory>
using namespace std;

// Job���N���X





// ���N���X
class RPGCharacter
{
protected:
	int		hp;
	int		str;
	int		dex;
	int		iq;
	int		wis;
public:
	RPGCharacter()
	{
		hp = 3 + rand() % 6 + rand() % 6 + rand() % 6;
		str = 3 + rand() % 6 + rand() % 6 + rand() % 6;
		dex = 3 + rand() % 6 + rand() % 6 + rand() % 6;
		iq = 3 + rand() % 6 + rand() % 6 + rand() % 6;
		wis = 3 + rand() % 6 + rand() % 6 + rand() % 6;
	}

	void showData()
	{
		cout << "�E�ƁF" << getJobName() << endl;
		cout << "�̗́F" << hp << "�A�����F" << str << "�A�f�����F" << dex << "�A�m���F" << iq << "�A�����F" << wis << endl;
	}

	virtual char* getJobName() = 0;
	virtual void fight() = 0;
};

// ��m
class Fighter : public RPGCharacter
{
public:
	char* getJobName() { return "��m"; }
	void fight() {
		cout << "�����Ɛ킢�܂��I" << endl;
		cout << "���œG����������I�I" << endl;
	}
};

// ���@�g��
class Wizard : public RPGCharacter
{
public:
	char* getJobName() { return "���@�g��"; }
	void fight()
	{
		cout << "���������@���������I" << endl;
		cout << "Bibbidi-Bobbidi-Boo�I�I" << endl;
	}
};

// �m��
class Cleric : public RPGCharacter
{
public:
	char* getJobName() { return "�m��"; }
	void fight()
	{
		cout << "�V�ɋF�����I" << endl;
		cout << "�N�����K���ɂȂ����I�I" << endl;
	}
};

// ����
class Thief : public RPGCharacter
{
public:
	char* getJobName() { return "����"; }
	void fight()
	{
		cout << "Open sesami�I" << endl;
		cout << "�ǂ����Ŕ閧�̔����J�����I�I" << endl;
	}
};
