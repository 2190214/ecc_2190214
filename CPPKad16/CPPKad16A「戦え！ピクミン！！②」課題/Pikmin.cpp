#include <iostream>
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

void PikminManager::show()
{
	cout << "ピクミンのデータを表示します！" << endl;
	for (auto p : pikmins) p->show();
}

void PikminManager::search()
{
	cout << "ピクミンを探します！" << endl;
	int n = rand() % 4;
	if (n == 0) {
		cout << "・・・見つらなかった！！" << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		Pikmin* p = nullptr;
		switch (rand() % 3) {
		case 0:	p = new RedPikmin;		break;
		case 1:	p = new YellowPikmin;	break;
		case 2:	p = new BluePikmin;		break;
		}
		pikmins.push_back(p);
	}
}

void PikminManager::fight()
{
	cout << "ピクミンが何かと戦った！！" << endl;
	auto it = pikmins.begin();
	while (it != pikmins.end()) {
		(*it)->fight();
		if ((*it)->isAlive()) {
			it++;
		}
		else {
			delete (*it);				// Pikminのクリア
			it = pikmins.erase(it);		// ノードのクリア
		}
	}
}

PikminManager::~PikminManager()
{
	for (auto p : pikmins) delete p;	// 全Pikminのクリア
	pikmins.clear();					// 全ノードのクリア
}

//******************************************************************************
