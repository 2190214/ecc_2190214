#ifndef _STUDENT_H_STUDENT
#define	_STUDENT_H_STUDENT

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class Student
{
private:
	string			myName;				// �����̖��O
	int				id;					// �w�Дԍ�

	// �N���X��
    static string className;

public:
	// �R���X�g���N�^
    Student();

        // �f�X�g���N�^
    ~Student();

	void setData(string n, int i);
	void showData();

	// className�̃Z�b�^�[
    void setClassName(string n);


};

#endif // !_STUDENT_H_
