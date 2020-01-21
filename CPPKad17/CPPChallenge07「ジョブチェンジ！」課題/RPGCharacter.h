#pragma once

#include <iostream>
#include <memory>
using namespace std;

// Job基底クラス





// 基底クラス
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
		cout << "職業：" << getJobName() << endl;
		cout << "体力：" << hp << "、強さ：" << str << "、素早さ：" << dex << "、知性：" << iq << "、賢さ：" << wis << endl;
	}

	virtual char* getJobName() = 0;
	virtual void fight() = 0;
};

// 戦士
class Fighter : public RPGCharacter
{
public:
	char* getJobName() { return "戦士"; }
	void fight() {
		cout << "何かと戦います！" << endl;
		cout << "剣で敵をやっつけた！！" << endl;
	}
};

// 魔法使い
class Wizard : public RPGCharacter
{
public:
	char* getJobName() { return "魔法使い"; }
	void fight()
	{
		cout << "すごい魔法を唱えた！" << endl;
		cout << "Bibbidi-Bobbidi-Boo！！" << endl;
	}
};

// 僧侶
class Cleric : public RPGCharacter
{
public:
	char* getJobName() { return "僧侶"; }
	void fight()
	{
		cout << "天に祈った！" << endl;
		cout << "誰かが幸せになった！！" << endl;
	}
};

// 盗賊
class Thief : public RPGCharacter
{
public:
	char* getJobName() { return "盗賊"; }
	void fight()
	{
		cout << "Open sesami！" << endl;
		cout << "どこかで秘密の扉が開いた！！" << endl;
	}
};
