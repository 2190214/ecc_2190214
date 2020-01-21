//******************************************************************************
//
//
//		CPPKad11D「コピーコンストラクタ」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Monster.h"


// 引数がMonster
void MonsterCopy1(Monster copy)
{
	cout << "MonsterCopy1が呼び出されました！" << endl;
	copy.showData();
	cout << "MonsterCopy1を終了します！" << endl;
}

// 引数も戻り値もMonster
Monster MonsterCopy2(Monster copy)
{
	cout << "MonsterCopy2が呼び出されました！" << endl;
	copy.showData();
	cout << "MonsterCopy2を終了します！" << endl;
	return copy;
}

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	Monster		pika("ピカチュウ");
	pika.showData();
	cout << endl;

	while (1) {
		Monster::countMonster();
		cout << "どうしますか？（0：コピーする、1：引数にする、2：戻り値にする、-1：終了）＞";
		int cmd;
		cin >> cmd;
		cout << endl;
		if (cmd < 0) break;

		switch (cmd) {
		case 0:		// コピー
			{
				Monster copy = pika;
				copy.showData();
				cout << "}の直前です！" << endl;
			}
			cout << "}の直後です！" << endl;
			break;
		case 1:		// 引数がMonster
			MonsterCopy1(pika);
			cout << "MonsterCopy1から戻ってきました！" << endl;
			break;
		case 2:		// 引数も戻り値もMonster
			MonsterCopy2(pika).showData();
			cout << "MonsterCopy2から戻ってきました！" << endl;
			break;
		}
		cout << endl;
	}
	return 0;
}

//******************************************************************************
