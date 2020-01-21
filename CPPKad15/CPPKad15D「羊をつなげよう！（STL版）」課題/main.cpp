//******************************************************************************
//
//
//		CPPKad15D「羊をつなげよう！（STL版）」
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

#include "Sheep.h"
#include "List.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	cout << "ここは世界に羽ばたくECC牧場です！" << endl;
	cout << "次々とやってくる羊たちをつないでください！" << endl;
	cout << "ECC牧場の命運はあなたの腕にかかっています！！" << endl;
	cout << endl;

	srand((unsigned int)time(NULL));

	List<Sheep> sheepList;		// 羊リスト

	while( 1 ) {
		// 一覧表示
		if (sheepList.empty()) {
			cout << "羊がいません！" << endl;
		}
		else {
			cout << "現在つながっている羊たちです。" << endl;
			for (int i = 0; i < sheepList.size(); i++) {
				sheepList[i].intro();
			}
		}
		cout << endl;

		// 行動選択
		Sheep	sheep;
		cout << "どうしますか？（0：前につなぐ、1：後ろにつなぐ、2:みんな逃がす、3:無視する、-1：終了）＞";
		int	cmd;
		cin >> cmd;
		if ( cmd < 0 ) break;

		// 実行
		switch (cmd) {
			case 0:	sheepList.push_front(sheep);	break;
			case 1:	sheepList.push_back(sheep);		break;
			case 2:	sheepList.clear();				break;
		}
		cout << endl;
	}

	return 0;
}

//******************************************************************************
