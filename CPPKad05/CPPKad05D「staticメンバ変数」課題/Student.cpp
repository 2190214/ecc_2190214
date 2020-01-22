#include "Student.h"
using namespace std;

// staticメンバ変数の宣言
static string className;
string Student::className = "ゲームPG1年";

// コンストラク
Student::Student() {
    cout << "誰かが入学しました" << endl;
}

// デストラクタ
Student::~Student() {
    cout << myName << "が卒業しました。" << endl;
}

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
    cout << "クラス :" <<className << endl;

	cout << "名　前　：" << myName << endl;
	cout << "学籍番号：" << id << endl;
}

// classNameのセッター
void Student::setClassName(string n) {
    className = n;
}


