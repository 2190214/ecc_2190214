#pragma once

// 2Dアフィン変換
class Matrix2D
{
public:
	float	mat[3][3];
public:
	Matrix2D()
	{
		mat[0][0] = 0;	mat[0][1] = 0;	mat[0][2] = 0;
		mat[1][0] = 0;	mat[1][1] = 0;	mat[1][2] = 0;
		mat[2][0] = 0;	mat[2][1] = 0;	mat[2][2] = 0;
	}
	Matrix2D(float m00, float m01, float m02, float m10, float m11, float m12, float m20, float m21, float m22)
	{
		mat[0][0] = m00;	mat[0][1] = m01;	mat[0][2] = m02;
		mat[1][0] = m10;	mat[1][1] = m11;	mat[1][2] = m12;
		mat[2][0] = m20;	mat[2][1] = m21;	mat[2][2] = m22;
	}
	Matrix2D operator*(const Matrix2D& m) const;			// 積
};

Matrix2D Matrix2DTranslation(float tx, float ty);			// 平行移動
Matrix2D Matrix2DRotation(float rad);						// 回転
