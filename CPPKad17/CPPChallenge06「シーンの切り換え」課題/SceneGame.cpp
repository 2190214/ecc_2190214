#include <iostream>
using namespace std;

#include "SceneTitle.h"
#include "SceneGame.h"

SceneGame::SceneGame() : count(0)
{
	cout << "ゲーム画面のコンストラクタが呼び出されました！" << endl;
}

SceneGame::~SceneGame()
{
	cout << "ゲーム画面のデストラクタが呼び出されました！" << endl;
}

IScene* SceneGame::update()
{
	cout << "ゲーム画面の更新処理です！" << endl;
	cout << "どうしますか？（0：続ける、1：タイトル画面へ、 - 1：終了）";
	int cmd;
	cin >> cmd;

	IScene* pNext = nullptr;
	switch (cmd) {
	case 0:	pNext = this;			break;
	case 1:	pNext = new SceneTitle;	break;
	}
	if (pNext != this) delete this;

	cout << "ゲーム画面を" << ++count << "回更新しました！" << endl;
	return pNext;
}

void SceneGame::draw()
{
	cout << "ゲーム画面を描画します！" << endl;
}
