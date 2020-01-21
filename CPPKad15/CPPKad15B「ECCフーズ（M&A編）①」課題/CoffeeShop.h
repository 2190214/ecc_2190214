#pragma once

#include "ECCShop.h"

class CoffeeShop : public ECCShop
{
private:
	MenuItem	menu[100];
public:
	CoffeeShop() : ECCShop("ECC�R�[�q�[")
	{
		menu[0] = { "�R�[�q�[", 380 };
		menu[1] = { "�g��", 390 };
		menu[2] = { "�t���[�c�W���[�X", 210 };
	}
	void showMenu()
	{
		for (auto& item : menu) {
			if (item.price == 0) break;
			item.showData();
		}
	}
};
