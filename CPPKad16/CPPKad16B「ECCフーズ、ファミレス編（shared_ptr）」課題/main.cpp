//******************************************************************************
//
//
//		CPPKad16B「ECCフーズ（ファミレス編）shared_ptr」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
#include <memory>
using namespace std;

#include "Menu.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	cout << "ファミレスECCへようこそ！！" << endl;
	cout << endl;

	while (1) {
		cout << "何のメニューを表示しますか？" << endl;
		cout << "（0：モーニング、1：ランチ、2：ディナー、3：すべて、-1：終了）";
		int	cmd;
		cin >> cmd;
		if (cmd < 0) break;

		// メニューの表示
		unique_ptr<Menu> pMenu;
		switch (cmd) {
		default:
		case 0:	pMenu.reset(new MorningMenu);	break;
		case 1:	pMenu.reset(new LunchMenu);		break;
		case 2:	pMenu.reset(new DinerMenu);		break;
		case 3:	pMenu.reset(new AllMenu);		break;
		}
		pMenu->show();
		cout << endl;
	}

	return 0;
}

//******************************************************************************
