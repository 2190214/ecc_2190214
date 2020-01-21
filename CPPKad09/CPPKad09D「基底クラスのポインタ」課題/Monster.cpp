//******************************************************************************
//
//
//		モンスタークラス
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
#include <string>
using namespace std;

#include "Monster.h"

//******************************************************************************
//
//		Monsterクラス
//
//******************************************************************************

// 引数付きコンストラクタ
Monster::Monster(string n) : name(n), hp(1+rand()%10)
{
	cout << "Monsterクラス（" << name << "）のコンストラクタが呼び出されました！" << endl;
}

// デストラクタ
Monster::~Monster()
{
	cout << "Monsterクラス（" << name << "）のデストラクタが呼び出されました！" << endl;
}

// データ表示
void Monster::showData()
{
	cout << name << "（体力：" << hp << "）" << endl;
}

// 自己紹介
void Monster::intro()
{
	cout << "おいらの名前は" << name << "。" << endl;
	cout << "趣味は散歩、特技はどこでも眠れることだよ。" << endl;
}

// 散歩する
void Monster::walk()
{
	if ( hp > 0 ) {
		cout << "てくてく・・・" << endl;
		hp--;
	}
	else {
		cout << "疲れて歩けないよ～" << endl;
	}
}

// 眠る
void Monster::sleep()
{
	cout << "ぐうぐう・・・";
	int r = rand() % 3;
	if ( r > 0 ) {
		cout << "体力が" << r << "ポイント回復した!" << endl;
		hp += r;
	}
	else {
		cout << "よく眠れなかった！" << endl;
	}
}

//******************************************************************************
//
//		SwimMonsterクラス
//
//******************************************************************************

// コンストラクタ
SwimMonster::SwimMonster(string n) : Monster(n)
{
	cout << "SwimMonsterクラス（" << name << "）のコンストラクタが呼び出されました！" << endl;
}

// デストラクタ
SwimMonster::~SwimMonster()
{
	cout << "SwimMonsterクラス（" << name << "）のデストラクタが呼び出されました！" << endl;
}

// 泳ぐ
void SwimMonster::swim()
{
	if ( hp > 0 ) {
		cout << name << "が泳ぐよ！ぶくぶく・・・っ！？" << endl;
		hp--;
	}
	else {
		cout << "疲れて泳げないよ～" << endl;
	}
}

// 散歩する
void SwimMonster::walk()
{
	cout << "足がないから歩けないよ～" << endl;
}

// 自己紹介
void SwimMonster::intro()
{
	Monster::intro();
	cout << "あと泳ぎも得意さ！" << endl;
}

//******************************************************************************
