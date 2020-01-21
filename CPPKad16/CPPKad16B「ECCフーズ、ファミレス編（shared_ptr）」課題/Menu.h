#pragma once

#include <iostream>
#include <list>
using namespace std;

// メニュー表示インターフェイス
class Component
{
public:
	virtual void show() = 0;
};

// メニュー項目
class MenuItem : public Component
{
private:
	char*	name;
	int		price;
public:
	MenuItem(char* n, int p) : name(n), price(p) {}
	void show() { cout << name << "：" << price << endl; }
};

// メニュー
class Menu : public Component
{
protected:
	char*				title;
	list<Component*>	menu;
public:
	Menu(char* t) : title(t) {}
	void show()
	{
		cout << endl;
		cout << title << endl;
		for (auto pItem : menu) pItem->show();
	}
	void add(Component* p)
	{
		menu.push_back(p);
	}
	~Menu()
	{
		for (auto pItem : menu) delete pItem;
	}
};

//================================================================
// サブメニュー
//================================================================

// ドリンクメニュー
class DrinkMenu : public Menu
{
public:
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
	LunchMenu() : Menu("★ランチメニュー★")
	{
		add(new MenuItem("日替わりランチ", 680));
		add(new MenuItem("シェフのおすすめランチ", 890));
		add(new DrinkMenu);
	}
};

// ディナーメニュー
class DinerMenu : public Menu
{
public:
	DinerMenu() : Menu("★ディナーメニュー★")
	{
		add(new MenuItem("和風ハンバーグ", 680));
		add(new MenuItem("サーロインステーキ", 1180));
		add(new DrinkMenu);
		add(new DessertMenu);
	}
};

//================================================================
// 全メニュー
//================================================================

// 全メニュー
class AllMenu : public Menu
{
public:
	AllMenu() : Menu("★★★ECCフーズ全メニュー★★★")
	{
		add(new MorningMenu);
		add(new LunchMenu);
		add(new DinerMenu);
	}
};
