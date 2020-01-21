#include <iostream>
using namespace std;

#include "SceneTitle.h"
#include "SceneGame.h"

SceneTitle::SceneTitle() : count(0)
{
	cout << "タイトル画面のコンストラクタが呼び出されました！" << endl;
}

SceneTitle::~SceneTitle()
{
	cout << "タイトル画面のデストラクタが呼び出されました！" << endl;
}

IScene* SceneTitle::update()
{
	cout << "タイトル画面の更新処理です！" << endl;
	cout << "どうしますか？（0：続ける、1：ゲーム画面へ、-1：終了）";
	int cmd;
	cin >> cmd;

	IScene* pNext = nullptr;
	switch (cmd) {
	case 0:	pNext = this;			break;
	case 1:	pNext = new SceneGame;	break;
	}
	if (pNext != this) delete this;

	cout << "タイトル画面を" << ++count << "回更新しました！" << endl;
	return pNext;
}

void SceneTitle::draw()
{
	cout << "タイトル画面を描画します！" << endl;
}
