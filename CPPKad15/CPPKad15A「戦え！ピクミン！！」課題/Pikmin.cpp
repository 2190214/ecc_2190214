#include <iostream>
#include <string>
using namespace std;

#include "Pikmin.h"

//******************************************************************************
//
//		Pikminクラス
//
//******************************************************************************

int Pikmin::count = 0;

Pikmin::Pikmin(char* n, int h, int a, int s) : name(n), hp(h), attack(a), speed(s), exp(0), num(++count)
{
	cout << "No." << num << "：" << name << "を見つけた！" << endl;
}

Pikmin::~Pikmin()
{
	cout << "No." << num << "：" << name << "はどこかへ行った！" << endl;
}

void Pikmin::show()
{
	cout << "No." << num << "：" << name << "（体力：" << hp << "、攻撃力：" << attack << "、素早さ：" << speed << "、経験値：" << exp << "）" << endl;
}

void Pikmin::fight()
{
	cout << "No." << num << "：" << name << "は何かを攻撃した！！";
	if (speed > rand() % 10) {
		int damage = 1 + rand() % attack;
		cout << "あたった！何かに" << damage << "ダメージ与えた！！" << endl;
		exp++;
	}
	else {
		int damage = 1 + rand() % 3;
		cout << "はずれた！何かから" << damage << "ダメージ受けた！" << endl;
		hp -= damage;
		if (hp <= 0) {
			cout << "No." << num << "：" << name << "は力尽きた・・・" << endl;
		}
	}
}

//******************************************************************************
//
//		PikminManager
//
//******************************************************************************





