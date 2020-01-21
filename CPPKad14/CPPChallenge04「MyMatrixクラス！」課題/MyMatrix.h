#pragma once

class MyMatrix;

void showMatrix(const char* str, const MyMatrix& m);




class MyMatrix
{
private:
	float	mat[2][2];
public:
	MyMatrix() : MyMatrix(0, 0, 0, 0) {}
	MyMatrix(float m00, float m01, float m10, float m11)
	{
		mat[0][0] = m00;	mat[0][1] = m01;
		mat[1][0] = m10;	mat[1][1] = m11;
	}






	friend void showMatrix(const char* str, const MyMatrix& m);
	friend class MyVector;			// フレンドクラス
};