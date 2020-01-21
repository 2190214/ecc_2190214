#include "Student.h"

// staticメンバ変数の宣言




// コンストラクタ



// デストラクタ



// データ設定
void Student::setData(string n, int i)
{
	myName = n;
	id = i;
	cout << myName << "のデータを設定しました！" << endl;
}

// データ表示
void Student::showData()
{
	// クラス名を表示する


	cout << "名　前　：" << myName << endl;
	cout << "学籍番号：" << id << endl;
}

// classNameのセッター



