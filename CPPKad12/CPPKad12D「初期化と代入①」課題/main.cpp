//******************************************************************************
//
//
//		CPPKad12D�u�������Ƒ���@�v
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
#include <cstdlib>
#include <ctime>
using namespace std;

#include "Trainer.h"

//******************************************************************************
//
//		���ȏЉ�֐�
//
//******************************************************************************

// ���������Ď��ȏЉ�
void introTrainer1( Trainer& t )
{
	Trainer	t1 = t;			// ������
	t1.intro();
}

// ������Ď��ȏЉ�
void introTrainer2( Trainer& t )
{
	Trainer	t1("�u�킽����������̂�����I�v");
	cout << endl;



}

// 2�������Ď��ȏЉ�
void introTrainer3( Trainer& t )
{
	Trainer	t1("�u�킽����������̂�����I�v");
	Trainer	t2("�u�킽���������I�I�v");
	cout << endl;



}

// �������g�ɑ�����Ď��ȏЉ�
void introTrainer4( Trainer& t )
{



}

//******************************************************************************
//
//		main�֐�
//
//******************************************************************************

int main()
{
	srand((unsigned int)time(NULL));

	Trainer		satoshi( "�T�g�V" );

	while( 1 ) {
		cout << "�������܂����H�i1�F�������A2�F����A3�F����~2�A4�F�����ɑ���A-1�F�I���j��";
		int	cmd;
		cin >> cmd;
		cout << endl;
		if ( cmd < 0 ) break;

		switch( cmd ) {
			case 1:	introTrainer1( satoshi );	break;		// ������
			case 2:	introTrainer2( satoshi );	break;		// ���
			case 3:	introTrainer3( satoshi );	break;		// ����~2
			case 4:	introTrainer4( satoshi );	break;		// �����ɑ��
		}
		cout << endl;
	}
	return 0;
}

//******************************************************************************
