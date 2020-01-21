//******************************************************************************
//
//
//		プレイヤークラス
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
using namespace std;

// クラス定義のヘッダファイル
#include "Player.h"

//******************************************************************************
//
//		BasePlayerクラス
//
//******************************************************************************

// デストラクタ
BasePlayer::~BasePlayer()
{
	cout << "BasePlayer（" << name << "）のデストラクタが呼び出されました！" << endl;
}

// 自己紹介
void BasePlayer::intro()
{
	cout << "名前：" << name << endl;
	cout << "特徴：取る石の数を乱数で決めます。" << endl;
}

// 取る石の数を返す
int BasePlayer::takeStone( int stoneNum )
{
	return 1 + (rand() % 3);
}

//******************************************************************************
//
//		UserPlayerクラス
//
//******************************************************************************

// デストラクタ
UserPlayer::~UserPlayer()
{
	cout << "UserPlayer（" << name << "）のデストラクタが呼び出されました！" << endl;
}

// 自己紹介
void UserPlayer::intro()
{
	cout << "名前：" << name << endl;
	cout << "特徴：あなたが操作するプレイヤーです。" << endl;
}

// 取る石の数を返す
int UserPlayer::takeStone( int stoneNum )
{
	cout << "何個取りますか？（1～3）";
	int	takeNum;
	cin >> takeNum;
	return takeNum;
}

//******************************************************************************
//
//		CompPlayerクラス
//
//******************************************************************************

// デストラクタ
CompPlayer::~CompPlayer()
{
	cout << "CompPlayer（" << name << "）のデストラクタが呼び出されました！" << endl;
}

// 自己紹介
void CompPlayer::intro()
{
	cout << "名前：" << name << endl;
	cout << "特徴：少しだけ強いです。" << endl;
}

// 取る石の数を返す
int CompPlayer::takeStone( int stoneNum )
{
	switch (stoneNum) {
	case 1:
		return 1;
	case 2:
	case 3:
	case 4:
		return stoneNum - 1;
	case 6:
	case 7:
	case 8:
		return stoneNum - 5;
	default:
		return 1 + rand() % 3;
	}
}

//******************************************************************************
