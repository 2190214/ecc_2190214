#pragma once

#include <iostream>
#include <list>
using namespace std;

// ���j���[�\���C���^�[�t�F�C�X
class Component
{
public:
	virtual void show() = 0;
};

// ���j���[����
class MenuItem : public Component
{
private:
	char*	name;
	int		price;
public:
	MenuItem(char* n, int p) : name(n), price(p) {}
	void show() { cout << name << "�F" << price << endl; }
};

// ���j���[
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
// �T�u���j���[
//================================================================

// �h�����N���j���[
class DrinkMenu : public Menu
{
public:
	DrinkMenu() : Menu("���h�����N���j���[��")
	{
		add(new MenuItem("�R�[�q�[", 220));
		add(new MenuItem("�g��", 220));
	}
};

// �f�U�[�g���j���[
class DessertMenu : public Menu
{
public:
	DessertMenu() : Menu("���f�U�[�g���j���[��")
	{
		add(new MenuItem("�`�[�Y�P�[�L", 350));
		add(new MenuItem("�A�C�X�N���[��", 150));
	}
};

//================================================================
// ���C�����j���[
//================================================================

// ���[�j���O���j���[
class MorningMenu : public Menu
{
public:
	MorningMenu() : Menu("�����[�j���O���j���[��")
	{
		add(new MenuItem("���[�j���O�Z�b�g", 400));
		add(new MenuItem("�Ă�����H", 600));
	}
};

// �����`���j���[
class LunchMenu : public Menu
{
public:
	LunchMenu() : Menu("�������`���j���[��")
	{
		add(new MenuItem("���ւ�胉���`", 680));
		add(new MenuItem("�V�F�t�̂������߃����`", 890));
		add(new DrinkMenu);
	}
};

// �f�B�i�[���j���[
class DinerMenu : public Menu
{
public:
	DinerMenu() : Menu("���f�B�i�[���j���[��")
	{
		add(new MenuItem("�a���n���o�[�O", 680));
		add(new MenuItem("�T�[���C���X�e�[�L", 1180));
		add(new DrinkMenu);
		add(new DessertMenu);
	}
};

//================================================================
// �S���j���[
//================================================================

// �S���j���[
class AllMenu : public Menu
{
public:
	AllMenu() : Menu("������ECC�t�[�Y�S���j���[������")
	{
		add(new MorningMenu);
		add(new LunchMenu);
		add(new DinerMenu);
	}
};
