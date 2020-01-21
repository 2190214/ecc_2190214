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
    Monster();
    // 引数付きコンストラクタ
    Monster(string n, int h);
    // デストラクタ
    ~Monster();
    // データ表示
    void showData();
    // 散歩する
    void walk();

    // 眠る
    void sleep();
};

// メンバ関数のコード
Monster::Monster() :name("未設定"), hp(0) {
    cout << "Monsterクラスのコンストラクタが呼び出されました！" << endl;
    //name = "未設定";
    //hp = 0;
}