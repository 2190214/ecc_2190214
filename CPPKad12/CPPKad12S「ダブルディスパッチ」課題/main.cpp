//******************************************************************************
//
//
//		CPPKad12S「ダブルディスパッチ」
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

#include "Player.h"
#include "Hand.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	srand( (unsigned int)time(NULL) );

	// 説明の表示
	cout << "ECCじゃんけん！！" << endl;

	// プレイヤーの設定（オブジェクトの作成）
	BasePlayer* p0 = new UserPlayer;
	BasePlayer* p1 = new CompPlayer;

	// メインループ
	while (1) {
		// 「手」の生成
		Hand* h0 = p0->createHand();
		if (!h0) break;

		Hand* h1 = p1->createHand();
		if (!h1) break;

		cout << p0->getName() << "は" << h0->getName() << "を出した！" << endl;
		cout << p1->getName() << "は" << h1->getName() << "を出した！" << endl;

		// 判定
		switch (h0->vsHand(h1)) {
		case WIN:
			cout << p0->getName() << "の勝ち！" << endl;
			break;
		case LOSE:
			cout << p1->getName() << "の勝ち！" << endl;
			break;
		case DRAW:
			cout << "あいこ！" << endl;
			break;
		}
		cout << endl;

		delete h0;
		delete h1;
	}

	// 終了処理（オブジェクトの解放）
	delete p0;
	delete p1;

	return 0;
}

//******************************************************************************
