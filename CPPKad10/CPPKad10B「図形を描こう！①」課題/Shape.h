//******************************************************************************
//
//		�}�`�N���X
//
//******************************************************************************

#include "Canvas.h"

//--------------------------------
//	Shape�N���X
//--------------------------------








//--------------------------------
//	Eraser�N���X
//--------------------------------

class Eraser
{
public:
	void erase(Canvas *c);
};

//--------------------------------
//	Triangle�N���X
//--------------------------------

class Triangle
{
private:
	int		x[3];
	int		y[3];
public:
	Triangle(int left, int bottom, int width, int height);
	void drawTriangle(Canvas *c);
};

//--------------------------------
//	Rectangle�N���X
//--------------------------------

class Rectangle
{
private:
	int		x[4];
	int		y[4];
public:
	Rectangle( int left, int top, int width, int height );
	void drawRectangle( Canvas *c );
};

//******************************************************************************
