#ifndef _PIKMIN_H_
#define	_PIKMIN_H_

#include <iostream>
using namespace std;

// ���N���X
class Pikmin
{
public:
	void intro();
};

// �ԃs�N�~��
class RedPikmin : public Pikmin
{
private:
	static	int	counter;
	int	num;
public:
	RedPikmin();
	~RedPikmin();
	void intro();
};

// ���s�N�~��
class YellowPikmin : public Pikmin
{
private:
	static	int	counter;
	int	num;
public:
	YellowPikmin();
	~YellowPikmin();
	void intro();
};

// �s�N�~��
class BluePikmin : public Pikmin
{
private:
	static	int	counter;
	int	num;
public:
	BluePikmin();
	~BluePikmin();
	void intro();
};

#endif // !_PIKMIN_H_
