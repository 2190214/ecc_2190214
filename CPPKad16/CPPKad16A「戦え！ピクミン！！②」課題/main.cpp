//******************************************************************************
//
//
//		CPPKad16A「戦え！ピクミン！！②」
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

#include "Pikmin.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	cout << "あなたは宇宙船のパイロットです。" << endl;
	cout << "ちょっとしたアクシデントでとある惑星に不時着しました！" << endl;
	cout << "ピクミンを探して何かと戦ってください！！" << endl;
	cout << endl;

	PikminManager	manager;

	while (1) {
		manager.show();
		cout << "どうしますか？（0：探す、1：何かと戦う、-1：あきらめる）";
		int cmd;
		cin >> cmd;
		cout << endl;
		if (cmd < 0) break;

		switch (cmd) {
		case 0:	manager.search();	break;
		case 1:	manager.fight();	break;
		}
		cout << endl;
	}

	return 0;
}

//******************************************************************************
