//******************************************************************************
//
//
//		CPPKad12B「MyStringクラス！」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

// ヘッダファイルのインクルード
#include <iostream>
using namespace std;

#include "MyString.h"

//******************************************************************************
//
//		main関数
//
//******************************************************************************

int main()
{
	cout << "str1とstr2を表示します！" << endl;
	MyString str1 = "ABCDE";
	MyString str2 = "ECC";
	cout << str1 << endl;
	cout << str2 << endl;
	cout << endl;

	cout << "str1とstr2を入れ換えます！" << endl;
	MyString tmp = str1;
	str1 = str2;
	str2 = tmp;
	cout << str1 << endl;
	cout << str2 << endl;
	cout << endl;

	cout << "str1にstr1を代入します！" << endl;
	str1 = str1;
	cout << str1 << endl;
	cout << endl;

	cout << "str1とstr2をつなげてstr3を作ります！" << endl;
	MyString str3 = str1 + str2;
	cout << str3 << endl;
	cout << endl;

	return 0;
}

//******************************************************************************
