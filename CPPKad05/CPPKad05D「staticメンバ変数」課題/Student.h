#ifndef _STUDENT_H_STUDENT
#define	_STUDENT_H_STUDENT

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

class Student
{
private:
	string			myName;				// 自分の名前
	int				id;					// 学籍番号

	// クラス名
    static string className;

public:
	// コンストラクタ
    Student();

        // デストラクタ
    ~Student();

	void setData(string n, int i);
	void showData();

	// classNameのセッター
    void setClassName(string n);


};

#endif // !_STUDENT_H_
