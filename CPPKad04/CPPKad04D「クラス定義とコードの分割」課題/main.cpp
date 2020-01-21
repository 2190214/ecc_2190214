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
//#include "Monster.h"
#include <iostream>
#include <string>
using namespace std;

class Monster {
private:
    string name;
    int hp;

public:
    Monster();
    
    Monster(string n, int h);
    
    ~Monster();

    void showData();
    void walk();
    void sleep();
};

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
