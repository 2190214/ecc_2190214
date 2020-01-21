//******************************************************************************
//
//
//		�L�����o�X�N���X
//
//		�N���X�F
//		���@���F
//		�쐬���F
//
//
//******************************************************************************

//////// �w�b�_�t�@�C���̃C���N���[�h ////////
#include <iostream>
using namespace std;

#include "Canvas.h"

//******************************************************************************
//
//		Canvas�N���X
//
//******************************************************************************

// �R���X�g���N�^
Canvas::Canvas()
{
	for ( int y = 0; y < HEIGHT; y++ ) {
		for ( int x = 0; x < WIDTH; x++ ) {
			pixel[y][x] = false;
		}
	}
}

//==============================================================================

// �L�����o�X�̕\��
void Canvas::show()
{
	for ( int y = 0; y < HEIGHT; y++ ) {
		for ( int x = 0; x < WIDTH; x++ ) {
			cout << ((pixel[y][x])? "��": "�E");
		}
		cout << endl;
	}
}

//==============================================================================

// �_��ł�
void Canvas::setPoint(int x, int y)
{
	if (((unsigned int)x < WIDTH) && ((unsigned int)y < HEIGHT)) {
		pixel[y][x] = true;
	}
}

//==============================================================================

// �_�̃N���A
void Canvas::resetPoint(int x, int y)
{
	if (((unsigned int)x < WIDTH) && ((unsigned int)y < HEIGHT)) {
		pixel[y][x] = false;
	}
}

//==============================================================================

// ����������
void Canvas::drawLine( int x1, int y1, int x2, int y2 )
{
#if 1
	int	distX = x2 - x1;
	if ( distX < 0 ) distX = -distX;

	int distY = y2 - y1;
	if ( distY < 0 ) distY = -distY;

	int maxDist = ( distX > distY )? distX: distY;

	for ( int i = 0; i <= maxDist; i++ ) {
		int x = int( (float)( x2 - x1 ) / maxDist * i + x1 );
		int y = int( (float)( y2 - y1 ) / maxDist * i + y1 );
		setPoint( x, y );
	}
#else
	//--------------------------------
	//	�u���[���n���iBresenham�j�̃A���S���Y��
	//--------------------------------

	int	dx = ( x2 - x1 ) * 2;
	int	sx = 1;
	if ( dx < 0 ) {
		dx = -dx;
		sx = -sx;
	}

	int	dy = ( y2 - y1 ) * 2;
	int	sy = 1;
	if ( dy < 0 ) {
		dy = -dy;
		sy = -sy;
	}

	int		x = x1;
	int		y = y1;
	int		f;

	setPoint( x, y );

	if ( dx > dy ) {
		f = dy * 2 - dx;
		while ( x != x2 ) {
			if ( f >= 0 ) {
				y += sy;
				f -= dx;
			}
			x += sx;
			f += dy;
			setPoint( x, y );
		}
	}
	else {
		f = dx * 2 - dy;
		while ( y != y2 ) {
			if ( f >= 0 ) {
				x += sx;
				f -= dy;
			}
			y += sy;
			f += dx;
			setPoint( x, y );
		}
	}
#endif
}

//******************************************************************************
