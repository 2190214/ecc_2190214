#ifndef _FAIRY_H_
#define _FAIRY_H_
//******************************************************************************
//
//
//							<<< —d¸ƒNƒ‰ƒX >>>
//
//
//******************************************************************************

// —d¸ƒNƒ‰ƒX
class Fairy
{
public:
	~Fairy() {}
	void intro();
};

// Œõ‚Ì—d¸
class Light : public Fairy
{
public:
	Light();
	~Light();
	void intro();
};

// ˆÅ‚Ì—d¸
class Darkness : public Fairy
{
public:
	Darkness();
	~Darkness();
	void intro();
};

// ‰Š‚Ì—d¸
class Fire : public Fairy
{
public:
	Fire();
	~Fire();
	void intro();
};

//******************************************************************************
#endif	// #ifndef _FAIRY_H_