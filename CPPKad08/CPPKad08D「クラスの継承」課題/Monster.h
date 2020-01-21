#pragma once

#include <string>
using namespace std;

// Monsterクラス
class Monster
{
private:
	string	name;						// 名前
	int		hp;							// 体力
public:
	Monster();							// コンストラクタ
	~Monster();							// デストラクタ
	void showData();					// データ表示
	void intro();						// 自己紹介
	void walk();						// 散歩する
	void sleep();						// 眠る

	void setName(string n) { name = n; }
	string getName() { return name; }
};

// FlyMonsterクラス



