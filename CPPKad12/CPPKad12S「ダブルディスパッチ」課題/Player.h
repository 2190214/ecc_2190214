#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Hand.h"

// 基底クラス
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


// ユーザー
class UserPlayer : public BasePlayer
{
public:
	UserPlayer() : BasePlayer("あなた") {}
	void intro() { cout << "あなたが操作するプレイヤーです！" << endl; }
};


// コンピュータ
class CompPlayer : public BasePlayer
{
public:
	CompPlayer() : BasePlayer("コンピュータ") {}
	void intro() { cout << "コンピュータが操作するプレイヤーです！" << endl; }
};
