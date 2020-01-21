#pragma once

#include "Matrix2D.h"

// 2D同次ベクトル
class Vector2D
{
public:
	float	x, y, w;
public:
	Vector2D() : x(0), y(0), w(1) {}
	Vector2D(float x0, float y0, float w0=1) : x(x0), y(y0), w(w0) {}
	Vector2D operator*(const Matrix2D& m) const;		// ベクトル×行列
};
