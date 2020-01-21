//******************************************************************************
//
//
//		CPPKad04D「クラス定義とコードの分割」
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
using namespace std;

// クラス定義
class Monster
{
private:
	string		name;		// 名前
	int			hp;			// 体力
public:
	// コンストラクタ
	Monster()
	{
		cout << "Monsterクラスのコンストラクタが呼び出されました！" << endl;
		name = "未設定";
		hp = 0;
	}
	// 引数付きコンストラクタ
	Monster(string n, int h)
	{
		cout << "Monsterクラスのコンストラクタが呼び出されました！" << endl;
		name = n;
		hp = h;
	}
	// デストラクタ
	~Monster()
	{
		cout << "Monsterクラスのデストラクタが呼び出されました！" << endl;
	}

    void showData();
    void walk();
    void sleep();

};

// メンバ関数のコード

// データ表示
void Monster::showData()
{
    cout << name << "の体力は、" << hp << "です。" << endl;
}

// 散歩する
void Monster::walk()
{
    if (hp > 0) {
        cout << "てくてく・・・" << endl;
        hp--;
    }
    else {
        cout << "疲れて歩けないよ～" << endl;
    }
}

// 眠る
void Monster::sleep()
{
    cout << "ぐうぐう・・・";
    int recover = rand() % 3;
    if (recover > 0) {
        cout << "体力が" << recover << "回復した!" << endl;
        hp += recover;
    }
    else {
        cout << "よく眠れなかった！" << endl;
    }
}



//******************************************************************************
//
//
//							<<< main関数 >>>
//
//
//******************************************************************************

int main()
{
	Monster		m("ピカチュウ", 5);

	while (1) {
		m.showData();
		cout << "何をしますか？（0：散歩する　1：眠る　-1:終了する）";
		int cmd;
		cin >> cmd;
		if (cmd < 0) break;

		switch (cmd) {
		case 0:	m.walk();		break;			// 散歩する
		case 1:	m.sleep();		break;			// 眠る
		}
		cout << endl;
	}

	cout << endl;
	return 0;
}

//******************************************************************************
