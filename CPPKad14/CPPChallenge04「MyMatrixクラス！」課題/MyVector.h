#pragma once

// 前方宣言
class MyVector;

// プロトタイプ宣言
void showVector(char* str, MyVector& v);




// ベクトルクラス
class MyVector
{
private:
	float	x, y;
public:
	MyVector() : MyVector(0, 0) {}
	MyVector(float fx, float fy) : x(fx), y(fy) {}







	friend void showVector(char* str, MyVector& v);		// フレンド関数
};
