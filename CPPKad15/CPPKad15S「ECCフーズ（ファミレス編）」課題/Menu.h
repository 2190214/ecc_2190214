#pragma once

#include <iostream>
#include <list>
using namespace std;

// ���j���[����
class MenuItem
{
private:
	char*	name;
	int		price;
public:
	MenuItem(char* n, int p) : name(n), price(p) {}
	void showItem() { cout << name << "�F" << price << endl; }
};

// ���j���[
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
// �T�u���j���[
//================================================================

// �h�����N���j���[
class DrinkMenu : public Menu
{
public:
	// �R���X�g���N�^
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
	// �R���X�g���N�^
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
	// �R���X�g���N�^
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
	// �R���X�g���N�^
	LunchMenu() : Menu("�������`���j���[��")
	{
		add(new MenuItem("���ւ�胉���`", 680));
		add(new MenuItem("�V�F�t�̂������߃����`", 890));
	}
};

// �f�B�i�[���j���[
class DinerMenu : public Menu
{
public:
	// �R���X�g���N�^
	DinerMenu() : Menu("���f�B�i�[���j���[��")
	{
		add(new MenuItem("�a���n���o�[�O", 680));
		add(new MenuItem("�T�[���C���X�e�[�L", 1180));
	}
};

//================================================================
// �S���j���[
//================================================================

// �S���j���[
class AllMenu : public Menu
{
public:
	// �R���X�g���N�^
	AllMenu() : Menu("������ECC�t�[�Y�S���j���[������")
	{
	}
};
