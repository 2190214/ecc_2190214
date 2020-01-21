#ifndef _STUDENT_H_
#define	_STUDENT_H_

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string			myName;				// 自分の名前
	int				id;					// 学籍番号

	// クラス名


public:
	// コンストラクタ


	// デストラクタ


	void setData(string n, int i);
	void showData();

	// classNameのセッター


};

#endif // !_STUDENT_H_
