
#include <iostream>
#include <string>
using namespace std;

#include "Monster.h"

static char *nameData[] = {
	"ウインディ",
	"イシツブテ",
	"イワンコ",
	"オコリザル",

	"カビゴン",
	"ケンタロン",
	"キャタピー",
	"ギャラドス",
	"キングラー",
	"ゴースト",

	"サンド",
	"ジュゴン",
	"スピアー",
	"スリープ",
	"ゼニガメ",

	"ディグダ",
	"ドードー",
	"トランセル",
	"ドククラゲ",

	"ナゾノクサ",
	"ニャビー",
	"ニドラン",

	"バタフリー",
	"ピカチュウ",
	"ピジョン",
	"ヒトカゲ",
	"フシギダネ",
	"ベトベトン",

	"マルマイン",
	"ミニリュウ",
	"ミュウ",
	"ムックル",
	"モクロー",

	"ヤドン",
	"ユンゲラー",

	"ラッタ",
	"ラプラス",
	"リザードン",
	"レアコイル",
};

#define NAME_MAX		(sizeof(nameData)/sizeof(char*))

Monster::Monster() : name(nameData[rand() % NAME_MAX])
{
	cout << name << "をゲットした！" << endl;
}

Monster::~Monster()
{
	cout << name << "は逃げていった･･･" << endl;
}

void Monster::intro()
{
	cout << "おいらは" << name << "だよ！" << endl;
}

// コピーコンストラクタ




