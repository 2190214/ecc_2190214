#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Hand.h"

// ���N���X
class BasePlayer
{
private:
	string	name;
public:
	BasePlayer(string n) : name(n) {}
	string getName() { return name; }
	Hand* createHand()
	{
		return nullptr;
	}

	virtual void intro() = 0;
};


// ���[�U�[
class UserPlayer : public BasePlayer
{
public:
	UserPlayer() : BasePlayer("���Ȃ�") {}
	void intro() { cout << "���Ȃ������삷��v���C���[�ł��I" << endl; }
};


// �R���s���[�^
class CompPlayer : public BasePlayer
{
public:
	CompPlayer() : BasePlayer("�R���s���[�^") {}
	void intro() { cout << "�R���s���[�^�����삷��v���C���[�ł��I" << endl; }
};
