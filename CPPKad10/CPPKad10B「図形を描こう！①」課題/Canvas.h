#ifndef _CANVAS_H_
#define	_CANVAS_H_
//******************************************************************************
//
//		�L�����o�X�N���X
//
//******************************************************************************

const int WIDTH = 40;				// �L�����o�X�̉���
const int HEIGHT = 24;				// �L�����o�X�̍���

//////// Canvas�N���X�̒�` ////////
class Canvas
{
private:
	bool	pixel[HEIGHT][WIDTH];					// �L�����o�X�̃s�N�Z���f�[�^
public:
	Canvas();										// �R���X�g���N�^
	void show();									// �L�����o�X�̕\��
	void setPoint(int x, int y);					// �_��ł�
	void resetPoint(int x, int y);					// �_�̃N���A
	void drawLine(int x1, int y1, int x2, int y2);	// ����������
};

//******************************************************************************
#endif // !_CANVAS_H_
