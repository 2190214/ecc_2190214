#pragma once

#include <iostream>
#include <string>
using namespace std;

struct MenuItem
{
	string	name;			// 名前
	int		price;			// 値段

	MenuItem() : MenuItem("", 0) {}
	MenuItem(string n, int p) : name(n), price(p) {}
	void showData()
	{
		cout << name << "：" << price << endl;
	}
};

class ECCShop
{
private:
	string	name;			// ショップ名
public:
	ECCShop(string n) : name(n)
	{
		cout << name << "をオープンした！" << endl;
	}
	virtual ~ECCShop()
	{
		cout << name << "を閉店した！" << endl;
	}
	virtual void showMenu() = 0;
};
