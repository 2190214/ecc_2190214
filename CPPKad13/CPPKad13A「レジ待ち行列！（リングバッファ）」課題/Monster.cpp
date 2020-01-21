#include <iostream>
using namespace std;

#include "Monster.h"

char *nameData[] = {
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
#define NAME_MAX	(sizeof(nameData) / sizeof(char*))

Monster::Monster() : name(nameData[rand()%NAME_MAX])
{
}

Monster & Monster::operator=(const Monster & org)
{
	name = org.name;
	cout << "（" << name << "を代入した！）" << endl;
	return *this;
}

