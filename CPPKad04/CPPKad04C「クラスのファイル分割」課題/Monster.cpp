#include "Monster.h"

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