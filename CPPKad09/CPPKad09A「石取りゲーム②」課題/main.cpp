//******************************************************************************
//
//
//		CPPKad09A「石取りゲーム②」
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

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	// 乱数系列の設定
	srand( (unsigned int)time(NULL) );

	// 説明の表示
	cout << "20個ある石を交互に取っていきます。一度に取れる石の数は1～3個です。" << endl;
	cout << "最後の1つを取った方が負けです。" << endl;
	cout << endl;

	// 先手
	UserPlayer		user("あなた");

	// 後手（3種類のプレイヤーから選択できるようにする）
	//BasePlayer		comp("基本プレイヤー");
	//UserPlayer		comp("もうひとりのあなた");
	CompPlayer		comp("HAL");
	cout << endl;

	// 自己紹介
	user.intro();
	comp.intro();
	cout << endl;

	int	stone = 20;			// 石の数

	// メインループ
	while (1) {
		// あなたの手番
		cout << "残り" << stone << "個：";
		for (int i = 0; i < stone; i++) {
			cout << "●";
		}
		cout << endl;

		cout << user.getName() << "の番です。";
		int	take1 = user.takeStone(stone);
		cout << take1 << "個取りました！" << endl;
		stone -= take1;
		if (stone <= 0) {
			cout << user.getName() << "の負けです！" << endl;
			cout << endl;
			break;								// while文を抜ける
		}
		cout << endl;

		// 相手の手番
		cout << "残り" << stone << "個：";
		for (int i = 0; i < stone; i++) {
			cout << "●";
		}
		cout << endl;

		cout << comp.getName() << "の番です。";
		int	take2 = comp.takeStone(stone);
		cout << take2 << "個取りました！" << endl;
		stone -= take2;
		if (stone <= 0) {
			cout << comp.getName() << "の負けです！" << endl;
			cout << endl;
			break;								// while文を抜ける
		}
		cout << endl;
	}

	return 0;
}

//******************************************************************************
