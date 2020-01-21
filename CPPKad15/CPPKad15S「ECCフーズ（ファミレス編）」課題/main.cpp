//******************************************************************************
//
//
//		CPPKad15S「ECCフーズ（ファミレス編）」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
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
		Menu*	pMenu;
		switch (cmd) {
		default:
		case 0:		// モーニング
			pMenu = new MorningMenu;
			pMenu->showMenu();			// モーニングメニュー表示
			delete pMenu;
			break;
		case 1:		// ランチ
			pMenu = new LunchMenu;
			pMenu->showMenu();			// ランチメニュー表示
			delete pMenu;
			pMenu = new DrinkMenu;
			pMenu->showMenu();			// ドリンクメニュー表示
			delete pMenu;
			break;
		case 2:		// ディナー
			pMenu = new DinerMenu;
			pMenu->showMenu();			// ディナーメニュー表示
			delete pMenu;
			pMenu = new DrinkMenu;
			pMenu->showMenu();			// ドリンクメニュー表示
			delete pMenu;
			pMenu = new DessertMenu;
			pMenu->showMenu();			// デザートメニュー表示
			delete pMenu;
			break;
		case 3:		// 全メニュー
			pMenu = new AllMenu;
			pMenu->showMenu();			// 全メニュー表示（タイトルのみ）
			delete pMenu;
			// モーニング
			pMenu = new MorningMenu;
			pMenu->showMenu();			// モーニングメニュー表示
			delete pMenu;
			// ランチ
			pMenu = new LunchMenu;
			pMenu->showMenu();			// ランチメニュー表示
			delete pMenu;
			pMenu = new DrinkMenu;
			pMenu->showMenu();			// ドリンクメニュー表示
			delete pMenu;
			// ディナー
			pMenu = new DinerMenu;
			pMenu->showMenu();			// ディナーメニュー表示
			delete pMenu;
			pMenu = new DrinkMenu;
			pMenu->showMenu();			// ドリンクメニュー表示
			delete pMenu;
			pMenu = new DessertMenu;
			pMenu->showMenu();			// デザートメニュー表示
			delete pMenu;
			break;
		}
		cout << endl;
	}

	return 0;
}

//******************************************************************************
