#pragma once

#include <iostream>
using namespace std;

// HotDrinkクラス
class HotDrink
{
private:
	char*	name;
public:
	HotDrink(char* n) : name(n) { cout << "--- " << name << "のレシピを取り出しました！ ---" << endl; }
	~HotDrink() { cout << "--- " << name << "のレシピを片付けました！ ---" << endl; }

	void makeHotDrink()
	{
		boilWater();
		addDrink();
		pourInCup();
		addTopping();
	}
private:
	void boilWater() { cout << "お湯を沸かしました！" << endl; }
	virtual void addDrink() {}
	void pourInCup() { cout << "カップに注ぎました！" << endl; }
	virtual void addTopping() {}
};

// HotWaterクラス
class HotWater : public HotDrink
{
public:
	HotWater() : HotDrink("白湯") {}
};

// Cofeeクラス
class Coffee : public HotDrink
{
public:
	Coffee() :HotDrink("コーヒー") {}
private:
	void addDrink() { cout << "コーヒーをドリップしました！" << endl; }
};

// Teaクラス
class Tea : public HotDrink
{
public:
	Tea() : HotDrink("紅茶") {}
private:
	void addDrink() { cout << "ティーバッグを浸しました！" << endl; }
};

// Yuzuクラス（ゆず茶）
class Yuzu : public HotDrink
{
public:
	Yuzu() : HotDrink("ゆず茶") {}
private:
	void addDrink() { cout << "ゆずジャムを入れました！" << endl; }
	void addTopping() { cout << "はちみつを加えました！" << endl; }
};
