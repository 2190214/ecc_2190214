//******************************************************************************
//
//
//		CPPKad16S「オープンキャンパス！」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
using namespace std;

#include "Lesson.h"
#include "Listener.h"

Lesson*	lesson[] = {
	new GameDesign,
	new CGDesign,
	new GamePG,
};

Listener*	listeners[] = {
	new nobita,
	new sizuka,
	new giant,
	new suneo,
	new dekisugi,
};

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	cout << endl;
	cout << "ようこそECCオープンキャンパスへ！" << endl;
	cout << "体験授業を選んでください！" << endl;

	cout << endl;

	// リスナーの追加
	for (auto& p : listeners) {
		cout << p->getName() << "さん、こんにちは！" << endl;
		while (1) {
			cout << "体験授業を選んでください（0：企画、1：CG、2：プログラム、-1：もういい）";
			int n;
			cin >> n;
			if (n < 0) break;

			lesson[n]->addListener(p);
		}
		cout << endl;
	}

	// 授業開始
	cout << "今から体験授業を始めます！" << endl;
	while (1) {
		cout << "何の授業を始めますか？（0：企画、1：CG、2：プログラム、-1：終了）";
		int n;
		cin >> n;
		if (n < 0) break;

		lesson[n]->notifyListener();
		cout << endl;
	}

	cout << endl;
	return 0;
}

//******************************************************************************
