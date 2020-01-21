//******************************************************************************
//
//
//		�}�`�N���X
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

#include <iostream>
using namespace std;

// �N���X��`�̃w�b�_�t�@�C��
#include "Shape.h"

//******************************************************************************
//
//		Eraser�N���X
//
//******************************************************************************

// �`��
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
//		Triangle�N���X
//
//******************************************************************************

// �R���X�g���N�^
Triangle::Triangle(int left, int bottom, int width, int height)
{
	x[0] = left;				y[0] = bottom;
	x[1] = left + width;		y[1] = bottom;
	x[2] = left + width / 2;	y[2] = bottom - height;
}

// �`��
void Triangle::drawTriangle(Canvas *c)
{
	for (int i = 0; i < 3; i++) {
		c->drawLine(x[i], y[i], x[(i + 1) % 3], y[(i + 1) % 3]);
	}
}

//******************************************************************************
//
//		Rectangle�N���X
//
//******************************************************************************

// �R���X�g���N�^
Rectangle::	Rectangle( int left, int top, int width, int height )
{
	x[0] = left;			y[0] = top;
	x[1] = left + width;	y[1] = top;
	x[2] = left + width;	y[2] = top + height;
	x[3] = left;			y[3] = top + height;
}

// �`��
void Rectangle::drawRectangle( Canvas *c )
{
	for ( int i = 0; i < 4; i++ ) {
		c->drawLine( x[i], y[i], x[(i+1)%4], y[(i+1)%4] );
	}
}

//******************************************************************************
