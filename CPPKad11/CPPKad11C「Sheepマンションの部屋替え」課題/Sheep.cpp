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

	cout << name << "が入居した！" << endl;
}

// デストラクタ
Sheep::~Sheep()
{
	cout << name << "は出ていった！" << endl;
}

// データを表示する
void Sheep::showData()
{
	cout << name << "だよ！" << endl;
}
