//******************************************************************************
//
//
//		CPPKad16S�u�I�[�v���L�����p�X�I�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
using namespace std;

#include "Lesson.h"
#include "Listener.h"

Lesson*	lesson[] = {
	new GameDesign,
	new CGDesign,
	new GamePG,
};

Listener*	listeners[] = {
	new nobita,
	new sizuka,
	new giant,
	new suneo,
	new dekisugi,
};

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	cout << endl;
	cout << "�悤����ECC�I�[�v���L�����p�X�ցI" << endl;
	cout << "�̌����Ƃ�I��ł��������I" << endl;

	cout << endl;

	// ���X�i�[�̒ǉ�
	for (auto& p : listeners) {
		cout << p->getName() << "����A����ɂ��́I" << endl;
		while (1) {
			cout << "�̌����Ƃ�I��ł��������i0�F���A1�FCG�A2�F�v���O�����A-1�F���������j";
			int n;
			cin >> n;
			if (n < 0) break;

			lesson[n]->addListener(p);
		}
		cout << endl;
	}

	// ���ƊJ�n
	cout << "������̌����Ƃ��n�߂܂��I" << endl;
	while (1) {
		cout << "���̎��Ƃ��n�߂܂����H�i0�F���A1�FCG�A2�F�v���O�����A-1�F�I���j";
		int n;
		cin >> n;
		if (n < 0) break;

		lesson[n]->notifyListener();
		cout << endl;
	}

	cout << endl;
	return 0;
}

//******************************************************************************
