//******************************************************************************
//
//
//		CPPChallenge03�uMyVector�N���X�I�v
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

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	while (1) {
		MyVector	v1(5, 6);
		MyVector	v2(10, 3);
		MyVector	ans;

		char* str_calc[] = {
			"5.0f*v1",
			"v1*5.0f",
			"v1+v2",
			"v1+=v2",
			"++v1",
			"v1++" ,
			"(v1+=v2)++",
			"(++v1)+=v2",
			"(v1++)+=v2",
		};

		cout << "�x�N�g�����Z���܂��I" << endl;
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
		//case 0:	ans = 5.0f * v1;		break;
		//case 1:	ans = v1 * 5.0f;		break;
		//case 2:	ans = v1 + v2;			break;
		//case 3:	ans = (v1 += v2);		break;
		//case 4:	ans = ++v1;				break;
		//case 5:	ans = v1++;				break;
		//case 6:	ans = (v1 += v2)++;		break;
		//case 7:	ans = (++v1) += v2;		break;
		//case 8:	ans = (v1++) += v2;		break;
		}

		showVector("v1 ", v1);
		showVector("v2 ", v2);
		showVector("ans", ans);
		cout << endl;
	}

	return 0;
}

//******************************************************************************
