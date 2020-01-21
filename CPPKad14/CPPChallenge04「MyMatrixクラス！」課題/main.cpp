//******************************************************************************
//
//
//		CPPChallenge04�uMyMatrix�N���X�I�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

// �w�b�_�t�@�C���̃C���N���[�h
#include <iostream>
#include <string>
using namespace std;

#include "MyVector.h"
#include "MyMatrix.h"

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	// �s�񓯎m�̉��Z
	while (1) {
		MyMatrix	m1(1, 2, 3, 4);
		MyMatrix	m2(5, 6, 7, 8);
		MyMatrix	ans;

		char* str_calc[] = {
			"5.0f*m1",
			"m1*5.0f",
			"m1+m2",
			"m1*m2",
			"m2*m1",
			"m1*=m2",
		};

		cout << "�s�񉉎Z�����܂��I" << endl;
		for (int i = 0; i < sizeof(str_calc) / sizeof(char*); i++) {
			cout << i << "�F" << str_calc[i] << "�A";
		}
		cout << "-1�F���ց�";
		int cmd;
		cin >> cmd;
		cout << endl;
		if (cmd < 0) break;

		cout << "ans = " << str_calc[cmd] << " �����܂��I" << endl;

		switch (cmd) {
		//case 0:	ans = 5.0f * m1;		break;
		//case 1:	ans = m1 * 5.0f;		break;
		//case 2:	ans = m1 + m2;			break;
		//case 3:	ans = m1 * m2;			break;
		//case 4:	ans = m2 * m1;			break;
		//case 5:	ans = m1 *= m2;			break;
		}

		showMatrix("m1 ", m1);
		showMatrix("m2 ", m2);
		showMatrix("ans", ans);
		cout << endl;
	}

	// �x�N�g���ƍs��̉��Z
	while (1) {
		MyMatrix	m1(1, 2, 3, 4);
		MyMatrix	m2(5, 6, 7, 8);

		MyVector	v(1, 2);
		MyVector	ans;

		char* str_calc[] = {
			"v*m1",
			"(v*m1)*m2",
			"v*(m1*m2)",
		};

		cout << "�x�N�g���ƍs��̉��Z�����܂��I" << endl;
		for (int i = 0; i < sizeof(str_calc) / sizeof(char*); i++) {
			cout << i << "�F" << str_calc[i] << "�A";
		}
		cout << "-1�F�I����";
		int cmd;
		cin >> cmd;
		if (cmd < 0) break;
		cout << endl;

		cout << "ans = " << str_calc[cmd] << " �����܂��I" << endl;

		switch (cmd) {
		//case 0:	ans = v * m1;			break;
		//case 1:	ans = (v * m1) * m2;	break;
		//case 2:	ans = v * (m1 * m2);	break;
		}

		showVector("v  ", v);
		showVector("ans", ans);
		cout << endl;
	}

	return 0;
}

//******************************************************************************
