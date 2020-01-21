#pragma once

#include <iostream>
#include <string>
using namespace std;

struct MenuItem
{
	string	name;			// ���O
	int		price;			// �l�i

	MenuItem() : MenuItem("", 0) {}
	MenuItem(string n, int p) : name(n), price(p) {}
	void showData()
	{
		cout << name << "�F" << price << endl;
	}
};

class ECCShop
{
private:
	string	name;			// �V���b�v��
public:
	ECCShop(string n) : name(n)
	{
		cout << name << "���I�[�v�������I" << endl;
	}
	virtual ~ECCShop()
	{
		cout << name << "��X�����I" << endl;
	}
	virtual void showMenu() = 0;
};
