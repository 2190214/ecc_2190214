//******************************************************************************
//
//
//		CPPKad12B�uMyString�N���X�I�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

// �w�b�_�t�@�C���̃C���N���[�h
#include <iostream>
using namespace std;

#include "MyString.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	cout << "str1��str2��\�����܂��I" << endl;
	MyString str1 = "ABCDE";
	MyString str2 = "ECC";
	cout << str1 << endl;
	cout << str2 << endl;
	cout << endl;

	cout << "str1��str2����ꊷ���܂��I" << endl;
	MyString tmp = str1;
	str1 = str2;
	str2 = tmp;
	cout << str1 << endl;
	cout << str2 << endl;
	cout << endl;

	cout << "str1��str1�������܂��I" << endl;
	str1 = str1;
	cout << str1 << endl;
	cout << endl;

	cout << "str1��str2���Ȃ���str3�����܂��I" << endl;
	MyString str3 = str1 + str2;
	cout << str3 << endl;
	cout << endl;

	return 0;
}

//******************************************************************************
