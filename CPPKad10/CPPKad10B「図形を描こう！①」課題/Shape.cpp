//******************************************************************************
//
//
//		図形クラス
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
using namespace std;

// クラス定義のヘッダファイル
#include "Shape.h"

//******************************************************************************
//
//		Eraserクラス
//
//******************************************************************************

// 描画
void Eraser::erase(Canvas *c)
{
	for (int x = 0; x < WIDTH; x++) {
		for (int y = 0; y < HEIGHT; y++) {
			c->resetPoint(x, y);
		}
	}
}

//******************************************************************************
//
//		Triangleクラス
//
//******************************************************************************

// コンストラクタ
Triangle::Triangle(int left, int bottom, int width, int height)
{
	x[0] = left;				y[0] = bottom;
	x[1] = left + width;		y[1] = bottom;
	x[2] = left + width / 2;	y[2] = bottom - height;
}

// 描画
void Triangle::drawTriangle(Canvas *c)
{
	for (int i = 0; i < 3; i++) {
		c->drawLine(x[i], y[i], x[(i + 1) % 3], y[(i + 1) % 3]);
	}
}

//******************************************************************************
//
//		Rectangleクラス
//
//******************************************************************************

// コンストラクタ
Rectangle::	Rectangle( int left, int top, int width, int height )
{
	x[0] = left;			y[0] = top;
	x[1] = left + width;	y[1] = top;
	x[2] = left + width;	y[2] = top + height;
	x[3] = left;			y[3] = top + height;
}

// 描画
void Rectangle::drawRectangle( Canvas *c )
{
	for ( int i = 0; i < 4; i++ ) {
		c->drawLine( x[i], y[i], x[(i+1)%4], y[(i+1)%4] );
	}
}

//******************************************************************************
