#pragma once

#include <iostream>
#include <list>
using namespace std;

// メニュー項目
class MenuItem
{
private:
	char*	name;
	int		price;
public:
	MenuItem(char* n, int p) : name(n), price(p) {}
	void showItem() { cout << name << "：" << price << endl; }
};

// メニュー
class Menu
{
protected:
	char*						title;
	list<MenuItem*>				menu;
public:
	Menu(char* t) : title(t) {}
	~Menu()
	{
		for (auto& pItem : menu) {
			delete pItem;
		}
	}
	void add(MenuItem* p)
	{
		menu.push_back(p);
	}
	void showMenu()
	{
		cout << endl;
		cout << title << endl;
		for (auto& pItem : menu) {
			pItem->showItem();
		}
	}
};

//================================================================
// サブメニュー
//================================================================

// ドリンクメニュー
class DrinkMenu : public Menu
{
public:
	// コンストラクタ
	DrinkMenu() : Menu("＊ドリンクメニュー＊")
	{
		add(new MenuItem("コーヒー", 220));
		add(new MenuItem("紅茶", 220));
	}
};

// デザートメニュー
class DessertMenu : public Menu
{
public:
	// コンストラクタ
	DessertMenu() : Menu("＊デザートメニュー＊")
	{
		add(new MenuItem("チーズケーキ", 350));
		add(new MenuItem("アイスクリーム", 150));
	}
};

//================================================================
// メインメニュー
//================================================================

// モーニングメニュー
class MorningMenu : public Menu
{
public:
	// コンストラクタ
	MorningMenu() : Menu("★モーニングメニュー★")
	{
		add(new MenuItem("モーニングセット", 400));
		add(new MenuItem("焼き魚定食", 600));
	}
};

// ランチメニュー
class LunchMenu : public Menu
{
public:
	// コンストラクタ
	LunchMenu() : Menu("★ランチメニュー★")
	{
		add(new MenuItem("日替わりランチ", 680));
		add(new MenuItem("シェフのおすすめランチ", 890));
	}
};

// ディナーメニュー
class DinerMenu : public Menu
{
public:
	// コンストラクタ
	DinerMenu() : Menu("★ディナーメニュー★")
	{
		add(new MenuItem("和風ハンバーグ", 680));
		add(new MenuItem("サーロインステーキ", 1180));
	}
};

//================================================================
// 全メニュー
//================================================================

// 全メニュー
class AllMenu : public Menu
{
public:
	// コンストラクタ
	AllMenu() : Menu("★★★ECCフーズ全メニュー★★★")
	{
	}
};
