#pragma once

#include "ECCShop.h"

class CoffeeShop : public ECCShop
{
private:
	MenuItem	menu[100];
public:
	CoffeeShop() : ECCShop("ECCコーヒー")
	{
		menu[0] = { "コーヒー", 380 };
		menu[1] = { "紅茶", 390 };
		menu[2] = { "フルーツジュース", 210 };
	}
	void showMenu()
	{
		for (auto& item : menu) {
			if (item.price == 0) break;
			item.showData();
		}
	}
};
