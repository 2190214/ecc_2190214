//******************************************************************************
//
//
//		CPPKad15C「レジ待ち行列、再び！」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

// ヘッダファイルのインクルード
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>



using namespace std;

#include "Monster.h"
#include "Container.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	cout << "いらっしゃい！激安スーパーECCです！！" << endl;

	// コンテナクラスの宣言
	Queue<Monster>	line(10);

	while( 1 ) {
		// データの表示
		cout << "現在のレジ待ち行列です！" << endl;
		for (int i = 0; i < line.count(); i++) {
			cout << line[i].getName() << endl;
		}
		cout << endl;

		// コマンド選択
		cout << "何をしますか？（0：客を呼び込む、1：レジを打つ、-1：店をたたむ）＞";
		int cmd;
		cin >> cmd;
		if (cmd < 0) break;

		switch (cmd) {
		case 0:			// 客を呼び込む
			for (int i = 1 + rand() % 3; i > 0; i--) {
				Monster	m;
				cout << m.getName() << "がやってきた！";
				if (line.full()) {
					cout << "もう店に入れない！残念！！";
				}
				else {
					line.push(m);
				}
				cout << endl;
			}
			break;
		case 1:			// レジを打つ
			if (line.empty()) {
				cout << "お客さんがいない！！" << endl;
			}
			else {
				Monster m = line.pop();
				cout << m.getName() << "は帰っていった！！" << endl;
			}
			break;
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}

//******************************************************************************
