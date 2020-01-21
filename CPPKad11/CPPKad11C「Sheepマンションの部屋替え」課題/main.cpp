//******************************************************************************
//
//
//		CPPKad11C�uSheep�}���V�����̕��������v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Sheep.h"

// �r�̓��ꊷ��
void swapSheep(Sheep s1, Sheep s2)
{
	Sheep tmp = s1;
	s1 = s2;
	s2 = tmp;
}

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(nullptr));

	Sheep	s[3];
	cout << endl;

	cout << "Sheep�}���V�����ւ悤�����I" << endl;
	cout << "�����畔���̓��ꊷ�������܂��I�I" << endl;
	cout << endl;

	while (1) {
		for (int i = 0; i < 3; i++) {
			cout << i << "�����F";
			s[i].showData();
		}
		cout << "�ǂ�����ꊷ���܂����H�i0�F0��1�A1�F1��2�A2�F2��0�A-1�F�I���j��";
		int n1;
		cin >> n1;
		if (n1 < 0) break;

		int n2 = (n1 + 1) % 3;

		cout << endl;
		cout << n1 << "������" << n2 << "��������ꊷ���܂��I" << endl;
		swapSheep(s[n1], s[n2]);
		cout << endl;
	}
	cout << endl;
	return 0;
}

//******************************************************************************
