#include <iostream>
using namespace std;

#include "Trainer.h"

// 引数付きコンストラクタ
Trainer::Trainer(string n) : name(n), pm(0)
{
	cout << name << "がやってきた！" << endl;
	// モンスターゲット
	pm = new Monster;
}

// デストラクタ
Trainer::~Trainer()
{
	cout << name << "は去っていった！" << endl;
	// モンスター解放
	if (pm) delete pm;
}

// 自己紹介関数
void Trainer::intro()
{
	cout << endl;
	cout << "ぼくは" << name << "。";
	if (pm) {
		cout << "ぼくのポケモンを紹介するよ。" << endl;
		pm->intro();
	}
	else {
		cout << "まだ、ポケモンを持ってないんだ。" << endl;
	}
	cout << endl;
}
