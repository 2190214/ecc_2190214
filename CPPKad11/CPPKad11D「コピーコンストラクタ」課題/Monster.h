#pragma once

#include <string>
using namespace std;

// Monsterクラスの定義
class Monster
{
private:
	string	name;						// 名前
	int		num;						// 番号

	static int	count;					// 存在する実体数
public:
	Monster(string n);					// 引数付きコンストラクタ
	~Monster();							// デストラクタ
	void showData();					// データ表示

	// コピーコンストラクタ



	static void countMonster();
};
