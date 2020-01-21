//******************************************************************************
//
//
//		CPPKad03B「口座開設！」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
#include <string>
using namespace std;

// 作成すること
class Kouza {
private:
    int id;
    string name;
    int gold;

public:
    //コンストラクタ
    Kouza()
    {
        cout << "Kouza クラスのデフォルトコンストラクトが呼び出されました！" << endl;
        id = 0;
        name = "未設定";
        gold = 0;
    }

    //引数付きコンストラクタ
    Kouza(string n, int i, int g) {
        cout << "Kouza クラスの引数付きコンストラクタが呼び出されました！" << endl;
        name = n;
        id = i;
        gold = g;
    }

    //デストラクタ
    ~Kouza() {
        cout << "Kouza (" << name << ") のデストラクタが呼び出されました！" << endl;
    }

    void setData(int i, string n, int g) {
        id = i;
        name = n;
        gold = g;
    }

    void showData() {
        cout << "口座番号: " << id << endl;
        cout << "名義: " << name << endl;
        cout << "口座残高: " << gold << " ゴールド" << endl;
    }
};

int main() {
    cout << "のび太の口座を作ります！" << endl;
    Kouza nobita;
    nobita.showData();

    cout << endl;

    cout << "のび太の口座情報を設定します" << endl;
    nobita.setData(1234,"のび太",0);
    nobita.showData();

    cout << endl;

    cout << "スネ夫の口座を作ります！" << endl;
    Kouza suneo("スネ夫",5678,1000);
    suneo.showData();
    cout << endl;

    return 0;
}


//******************************************************************************
