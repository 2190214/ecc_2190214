//******************************************************************************
//
//
//		CPPKad12D「初期化と代入①」
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

// 初期化して自己紹介
void introTrainer1( Trainer& t )
{
	Trainer	t1 = t;			// 初期化
	t1.intro();
}

// 代入して自己紹介
void introTrainer2( Trainer& t )
{
	Trainer	t1("「わたし代入されるのいやっ！」");
	cout << endl;



}

// 2回代入して自己紹介
void introTrainer3( Trainer& t )
{
	Trainer	t1("「わたし代入されるのいやっ！」");
	Trainer	t2("「わたしもいやよ！！」");
	cout << endl;



}

// 自分自身に代入して自己紹介
void introTrainer4( Trainer& t )
{



}

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	Trainer		satoshi( "サトシ" );

	while( 1 ) {
		cout << "何をしますか？（1：初期化、2：代入、3：代入×2、4：自分に代入、-1：終了）＞";
		int	cmd;
		cin >> cmd;
		cout << endl;
		if ( cmd < 0 ) break;

		switch( cmd ) {
			case 1:	introTrainer1( satoshi );	break;		// 初期化
			case 2:	introTrainer2( satoshi );	break;		// 代入
			case 3:	introTrainer3( satoshi );	break;		// 代入×2
			case 4:	introTrainer4( satoshi );	break;		// 自分に代入
		}
		cout << endl;
	}
	return 0;
}

//******************************************************************************
