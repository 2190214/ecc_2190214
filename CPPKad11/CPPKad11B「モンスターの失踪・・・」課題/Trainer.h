#pragma once

#include <string>
using namespace std;

#include "Monster.h"

class Trainer
{
private:
	string			name;					// 名前
	Monster			*pm;					// 持っているモンスター
public:
	Trainer( string n );					// 引数付きコンストラクタ				
	~Trainer();								// デストラクタ
	void intro();							// 自己紹介関数

	// コピーコンストラクタ




};
