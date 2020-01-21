//******************************************************************************
//
//
//		CPPKad03D「コンストラクタとデストラクタ」
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

//------< class >---------------------------------------------------------------

class Monster
{
private:
	string	name;
	int		hp;
	int		attack;
public:
	void showData()
	{
		cout << "名前：" << name << "（体力：" << hp << "、攻撃力：" << attack << "）" << endl;
	}

	void setName(string n) { name = (n == "") ? "ゲレゲレ" : n; }
	void setHP(int h) { hp = (h > 0) ? h : 1000; }
	void setAttack(int a) { attack = (a > 0) ? a : 1; }
	string getName() { return name; }
	int getAttack() { return attack; }

	// コンストラクタ



	// デストラクタ



};

//******************************************************************************
//
//
//		main関数
//
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	// m1の設定
	cout << "ピカチュウが現れた！" << endl;

	Monster		m1;

	// ここでm1のデータを表示してみる

	cout << "ピカチュウのデータを設定します。" << endl;
	m1.setName("ピカチュウ");
	m1.setHP(1 + rand() % 10);
	m1.setAttack(100 + rand() % 50);
	m1.showData();
	cout << endl;

	// m2の設定
	cout << "ディアルガが現れた！" << endl;

	Monster		m2;

	// ここでm2のデータを表示してみる

	cout << "ディアルガのデータを設定します。" << endl;
	m2.setName("ディアルガ");
	m2.setHP(1000);
	m2.setAttack(1000);
	m2.showData();
	cout << endl;

	return 0;
}

//******************************************************************************
