//******************************************************************************
//
//
//		CPPKad11S「シネコンECC」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
using namespace std;

#include "Window.h"		// 窓口クラス

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	cout << "ようこそ！シネコンECCへ！！" << endl;

	Window	w[3] = {
		{"のび太"},
		{"ドラえもん"},
		{"ジャイアン"},
	};

	// ゲームループ
	while ( 1 ) {
		// チケットの購入
		cout << "何番の窓口でチケットを購入しますか？（0〜2、-1：終了）> ";
		int	i;
		cin >> i;
		if ( i < 0 ) break;

		cout << "【窓口No." << i << "】" << endl;
		w[i].sellTicket();
		cout << endl;
	}

	return 0;
}

//******************************************************************************
