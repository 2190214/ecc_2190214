#ifndef _FAIRY_H_
#define _FAIRY_H_
//******************************************************************************
//
//
//							<<< �d���N���X >>>
//
//
//******************************************************************************

// �d���N���X
class Fairy
{
public:
	~Fairy() {}
	void intro();
};

// ���̗d��
class Light : public Fairy
{
public:
	Light();
	~Light();
	void intro();
};

// �ł̗d��
class Darkness : public Fairy
{
public:
	Darkness();
	~Darkness();
	void intro();
};

// ���̗d��
class Fire : public Fairy
{
public:
	Fire();
	~Fire();
	void intro();
};

//******************************************************************************
#endif	// #ifndef _FAIRY_H_