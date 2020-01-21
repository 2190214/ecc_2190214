//******************************************************************************
//
//
//		CPPKad09D「基底クラスのポインタ」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

// クラス定義のヘッダファイル
#include "Monster.h"

void HouseOfSwimMonster(SwimMonster* p);	// SwimMonsterの館
void HouseOfMonster(Monster* p);			// Monsterの館

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	// 乱数系列の設定
	srand((unsigned int)time(NULL));

	SwimMonster		m("コイキング");

	while (1) {
		cout << "どうしますか？（0：SwimMonsterの館へ行く、1：Monsterの館へ行く、-1：終了）＞";
		int cmd;
		cin >> cmd;
		if (cmd < 0) break;
		cout << endl;

		switch (cmd) {
		case 0:	HouseOfSwimMonster(&m);	break;		// SwimMonsterの館

		// Monsterの館

		}
	}
	return 0;
}

// SwimMonsterの館
void HouseOfSwimMonster(SwimMonster* p)
{
	cout << "ようこそ！SwimMonsterの館へ！！" << endl;
	cout << "ここではあなたの外見をみてあげるわ！" << endl;
	while (1) {
		p->showData();
		cout << "何をしますか？（0：自己紹介、1：散歩、2：眠る、3：泳ぐ、-1：出ていく）";
		int	cmd;
		cin >> cmd;
		if (cmd < 0) break;

		switch (cmd) {
		case 0:	p->intro();		break;
		case 1:	p->walk();		break;
		case 2:	p->sleep();		break;
		case 3:	p->swim();		break;
		}
		cout << endl;
	}
	cout << endl;
}

// Monsterの館
void HouseOfMonster(Monster* p)
{




}

//******************************************************************************
