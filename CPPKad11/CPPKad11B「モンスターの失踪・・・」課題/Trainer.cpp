#include <iostream>
using namespace std;

#include "Trainer.h"

// 引数付きコンストラクタ
Trainer::Trainer( string n ) : name(n), pm(0)
{
	cout << name << "が現れた！" << endl;

	// モンスターゲット



}

// デストラクタ
Trainer::~Trainer()
{
	cout << name << "が去っていった！" << endl;

	// モンスター解放



}
// 自己紹介関数
void Trainer::intro()
{
	cout << "ぼくは" << name << "。";
	if ( pm ) {
		cout << "ぼくのポケモンを紹介するよ。" << endl;
		pm->intro();
	}
	else {
		cout << "まだ、ポケモンを持ってないんだ。" << endl;
	}
}

// コピーコンストラクタ





