#include <iostream>
using namespace std;

#include "Sheep.h"

static char *nameData[] = {
	"ピタゴラス",
	"アルキメデス",
	"エラストテネス",
	"ユークリッド",
	"フィボナッチ",
	"デカルト",
	"フェルマー",
	"パスカル",
	"オイラー",
	"ラプラス",
	"フーリエ",
	"ガウス",
	"ド・モルガン",
	"ブール",
	"リーマン",
	"ポアンカレ",
	"ラッセル",
	"ニュートン",
	"テイラー",

	"ケプラー",
	"ガリレオ",
	"ボイル",
	"フック",
	"ホイヘンス",
	"ベルヌイ",
	"ラグランジュ",
	"ファラデー",
	"ジュール",
	"フーコー",
	"ストークス",
	"マクスウェル",
	"マッハ",
	"レントゲン",
	"キュリー",
	"ラザフォード",
	"アインシュタイン",
};

#define NAME_MAX	(sizeof(nameData) / sizeof(char*))

int Sheep::rest = NAME_MAX;

// コンストラクタ
Sheep::Sheep()
{
	// 同じ名前が重ならないように
	int n = rand() % rest;
	name = nameData[n];
	rest--;
	nameData[n] = nameData[rest];

	nameData[rest] = name;
	if (rest == 0) rest = NAME_MAX;

	cout << name << "がやってきた！" << endl;
}

// デストラクタ
Sheep::~Sheep()
{
	//cout << name << "はどこかへ行った！" << endl;
}

// 自己紹介する
void Sheep::intro()
{
	cout << name << "「メェ～！」" << endl;
}
