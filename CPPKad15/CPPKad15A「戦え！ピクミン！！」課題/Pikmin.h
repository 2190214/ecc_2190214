#pragma once

// 基底クラス
class Pikmin
{
private:
	char*	name;			// 名前
	int		hp;				// 体力
	int		attack;			// 攻撃力
	int		speed;			// 素早さ
	int		exp;			// 経験値
	int		num;			// ピクミン番号

	static int count;
public:
	Pikmin(char* n, int h, int a, int s);
	~Pikmin();
	void show();
	void fight();
	bool isAlive() { return (hp > 0); }
};

// 赤ピクミン
class RedPikmin : public Pikmin
{
public:
	RedPikmin() : Pikmin("赤ピクミン", 3 + rand() % 5, 5 + rand() % 5, 3 + rand() % 5) {}
};

// 黄ピクミン
class YellowPikmin : public Pikmin
{
public:
	YellowPikmin() : Pikmin("黄ピクミン", 1 + rand() % 3, 1 + rand() % 3, 5 + rand() % 5) {}
};

// 青ピクミン
class BluePikmin : public Pikmin
{
public:
	BluePikmin() : Pikmin("青ピクミン", 5 + rand() % 5, 3 + rand() % 5, 1 + rand() % 3) {}
};

// ピクミン管理クラス




