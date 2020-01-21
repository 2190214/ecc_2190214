#pragma once

#include <string>
using namespace std;

// Monsterクラス
class Monster
{
protected:
	string	name;						// 名前
	int		hp;							// 体力
public:
	Monster(string n);					// 引数付きコンストラクタ
	~Monster();							// デストラクタ
	void showData();					// データ表示
	void intro();						// 自己紹介
	void walk();						// 散歩する
	void sleep();						// 眠る

	void setName(string n) { name = n; }
	string getName() { return name; }
};

// SwimMonsterクラス
class SwimMonster : public Monster
{
public:
	SwimMonster(string n);				// 引数付きコンストラクタ
	~SwimMonster();						// デストラクタ
	void swim();						// 泳ぐ
	void walk();						// 散歩する（オーバーライド）
	void intro();						// 自己紹介（オーバーライド）
};
