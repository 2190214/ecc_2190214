#ifndef _CANVAS_H_
#define	_CANVAS_H_
//******************************************************************************
//
//		キャンバスクラス
//
//******************************************************************************

const int WIDTH = 40;				// キャンバスの横幅
const int HEIGHT = 24;				// キャンバスの高さ

//////// Canvasクラスの定義 ////////
class Canvas
{
private:
	bool	pixel[HEIGHT][WIDTH];					// キャンバスのピクセルデータ
public:
	Canvas();										// コンストラクタ
	void show();									// キャンバスの表示
	void setPoint(int x, int y);					// 点を打つ
	void resetPoint(int x, int y);					// 点のクリア
	void drawLine(int x1, int y1, int x2, int y2);	// 直線を引く
};

//******************************************************************************
#endif // !_CANVAS_H_
