#ifndef _HOTDRINK_H_
#define _HOTDRINK_H_

#include <iostream>
using namespace std;

// HotDrinkクラス







// Cofeeクラス
class Coffee
{
public:
	// お湯を沸かす
	void boilWater()
	{
		cout << "お湯を沸かしました！" << endl;
	}
	// コーヒーをドリップする
	void dripCoffee()
	{
		cout << "コーヒーをドリップしました！" << endl;
	}
	// カップに注ぐ
	void pourInCup()
	{
		cout << "カップに注ぎました！" << endl;
	}
};

// Teaクラス
class Tea
{
public:
	// お湯を沸かす
	void boilWater()
	{
		cout << "お湯を沸かしました！" << endl;
	}
	// ティーバッグを浸す
	void steepTeabag()
	{
		cout << "ティーバッグを浸しました！" << endl;
	}
	// カップに注ぐ
	void pourInCup()
	{
		cout << "カップに注ぎました！" << endl;
	}
};

// Yuzuクラス（ゆず茶）







#endif		// #ifndef _HOTDRINK_H_
