#include <iostream>
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

Monster::Monster() : Monster(nameData[rand() % NAME_MAX])
{
}

Monster::Monster(string n) : name(n)
{
	cout << name << "をゲットした！" << endl;
}

Monster::~Monster()
{
	cout << name << "を逃がした！" << endl;
}

void Monster::showData()
{
	cout << name << "だよ！" << endl;
}
