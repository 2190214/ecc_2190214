#include <iostream>
#include <string>
using namespace std;

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