#include <iostream>
#include <string>
using namespace std;

#include "Monster.h"

int Monster::count = 0;

// 引数付きコンストラクタ
Monster::Monster(string n) : name(n), num(++count)
{
	cout << "No." << num << "：" << name << "が出現した！" << endl;
}

// デストラクタ
Monster::~Monster()
{
	cout << "No." << num << "：" << name << "はどこかへ行った！！" << endl;
	count--;
}

// データ表示
void Monster::showData()
{
	cout << "No." << num << "：" << name << "だよ！" << endl;
}

// コピーコンストラクタ





void Monster::countMonster()
{
	cout << "現在のモンスター数は" << count << "匹です！" << endl;
}
