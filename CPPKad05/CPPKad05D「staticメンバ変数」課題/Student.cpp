#include "Student.h"
using namespace std;

// static�����o�ϐ��̐錾
static string className;
string Student::className = "�Q�[��PG1�N";

// �R���X�g���N
Student::Student() {
    cout << "�N�������w���܂���" << endl;
}

// �f�X�g���N�^
Student::~Student() {
    cout << myName << "�����Ƃ��܂����B" << endl;
}

// �f�[�^�ݒ�
void Student::setData(string n, int i)
{
	myName = n;
	id = i;
	cout << myName << "�̃f�[�^��ݒ肵�܂����I" << endl;
}

// �f�[�^�\��
void Student::showData()
{
	// �N���X����\������
    cout << "�N���X :" <<className << endl;

	cout << "���@�O�@�F" << myName << endl;
	cout << "�w�Дԍ��F" << id << endl;
}

// className�̃Z�b�^�[
void Student::setClassName(string n) {
    className = n;
}


