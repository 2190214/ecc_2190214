#include "Monster.h"

Monster::Monster(string n, int h) :name(n), hp(h)
{
    cout << "Monsterクラスのコンストラクタが呼び出されました！" << endl;
    //name = n;
    //hp = h;
}

Monster::~Monster()
{
    cout << "Monsterクラスのデストラクタが呼び出されました！" << endl;
}

void Monster::showData() {
    cout << name << "の体力は、" << hp << "です。" << endl;
}

void Monster::walk() {
    if (hp > 0) {
        cout << "てくてく・・・" << endl;
        hp--;
    }
    else {
        cout << "疲れて歩けないよ～" << endl;
    }
}
void Monster::sleep() {
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