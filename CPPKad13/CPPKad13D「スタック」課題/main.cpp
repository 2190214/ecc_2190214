//******************************************************************************
//
//
//		CPPKad13D「スタック」
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




// int型の乱数（0～99）生成
void myRand(int& data)
{
	data = rand() % 100;
}

// string型の乱数（3文字の英大文字）生成
void myRand(string& data)
{
	data = "";
	for (int i = 0; i < 3; i++) {
		data += 'A' + rand() % 26;
	}
}

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	// コンテナクラスの宣言
	Stack		s(5);
	int			data;

	// データの格納
	cout << "データを格納します！" << endl;
	while (s.full() == false) {
		myRand(data);

		// データを格納する


		cout << "push：" << data << endl;
	}
	cout << endl;

	// データの取り出し
	cout << "データを取り出します！" << endl;
	while (s.empty() == false) {
		
		// データを取り出す


		cout << "pop：" << data << endl;
	}
	cout << endl;

	return 0;
}

//******************************************************************************
