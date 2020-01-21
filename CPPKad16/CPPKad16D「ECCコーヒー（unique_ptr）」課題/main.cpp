//******************************************************************************
//
//
//		CPPKad16D「ECCコーヒー（unique_ptr）」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
using namespace std;

#include "HotDrink.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	cout << "ECCコーヒーへようこそ！" << endl;
	cout << "門外不出のレシピで作るから、おいしいよ！！" << endl;

	while (1) {
		cout << endl;
		cout << "ご注文は？（0：コーヒー、1；紅茶、2：ゆず茶、-1：店を出る）＞";
		int	n;
		cin >> n;
		if (n < 0) break;
		cout << endl;

		HotDrink*	p;
		switch (n) {
		case 0:		p = new Coffee;		break;
		case 1:		p = new Tea;		break;
		case 2:		p = new Yuzu;		break;
		default:	p = new HotWater;	break;
		}
		p->makeHotDrink();
		delete p;

		cout << endl;
		cout << "お待たせしました！ごゆっくりどうぞ！" << endl;
	}

	cout << "ありがとうございました！" << endl;

	return 0;
}

//******************************************************************************
