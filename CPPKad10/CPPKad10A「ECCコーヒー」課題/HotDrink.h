#ifndef _HOTDRINK_H_
#define _HOTDRINK_H_

#include <iostream>
using namespace std;

// HotDrink�N���X







// Cofee�N���X
class Coffee
{
public:
	// �����𕦂���
	void boilWater()
	{
		cout << "�����𕦂����܂����I" << endl;
	}
	// �R�[�q�[���h���b�v����
	void dripCoffee()
	{
		cout << "�R�[�q�[���h���b�v���܂����I" << endl;
	}
	// �J�b�v�ɒ���
	void pourInCup()
	{
		cout << "�J�b�v�ɒ����܂����I" << endl;
	}
};

// Tea�N���X
class Tea
{
public:
	// �����𕦂���
	void boilWater()
	{
		cout << "�����𕦂����܂����I" << endl;
	}
	// �e�B�[�o�b�O��Z��
	void steepTeabag()
	{
		cout << "�e�B�[�o�b�O��Z���܂����I" << endl;
	}
	// �J�b�v�ɒ���
	void pourInCup()
	{
		cout << "�J�b�v�ɒ����܂����I" << endl;
	}
};

// Yuzu�N���X�i�䂸���j







#endif		// #ifndef _HOTDRINK_H_
