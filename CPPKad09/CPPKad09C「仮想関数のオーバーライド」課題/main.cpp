//******************************************************************************
//
//
//		CPPKad09C「仮想関数のオーバーライド」
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

// クラス定義のヘッダファイル
#include "Fairy.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	Light*		pLight;
	Darkness*	pDarkness;
	Fire*		pFire;

	cout << "妖精を召喚して自己紹介させます！" << endl;

	while (1) {
		cout << "誰を召喚しますか？（0：光の妖精、1：闇の妖精、2：炎の妖精、-1：やめる）";
		int		fairy;
		cin >> fairy;
		if (fairy < 0) break;
		cout << endl;

		switch (fairy) {
		case 0:		// 光の妖精
			pLight = new Light;
			pLight->intro();
			delete pLight;
			break;
		case 1:		// 闇の妖精
			pDarkness = new Darkness;
			pDarkness->intro();
			delete pDarkness;
			break;
		case 2:		// 炎の妖精
			pFire = new Fire;
			pFire->intro();
			delete pFire;
			break;
		}
		cout << endl;
	}
	return 0;
}

//******************************************************************************
