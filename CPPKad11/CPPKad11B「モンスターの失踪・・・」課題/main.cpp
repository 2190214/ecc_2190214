//******************************************************************************
//
//
//		CPPKad11B「モンスターの失踪・・・」
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

#include "Trainer.h"

//******************************************************************************
//
//		自己紹介関数
//
//******************************************************************************

// 実体を引数とする自己紹介関数





// ポインタを引数とする自己紹介関数





// 参照を引数とする自己紹介関数





//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(nullptr));

	// サトシ出現
	Trainer		satoshi("サトシ");
	cout << endl;

	while (1) {
		cout << "何を使って自己紹介しますか？（1：実体、2：ポインタ、3：参照、-1：終了）＞";
		int	cmd;
		cin >> cmd;
		if (cmd < 0) break;





		cout << endl;
	}
	return 0;
}

//******************************************************************************
