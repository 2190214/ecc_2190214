#pragma once

// �O���錾
class MyVector;

// �v���g�^�C�v�錾
void showVector(char* str, MyVector& v);




// �x�N�g���N���X
class MyVector
{
private:
	float	x, y;
public:
	MyVector() : MyVector(0, 0) {}
	MyVector(float fx, float fy) : x(fx), y(fy) {}







	friend void showVector(char* str, MyVector& v);		// �t�����h�֐�
};
