#ifndef _PIKMIN_H_
#define	_PIKMIN_H_

#include <iostream>
using namespace std;

// 基底クラス
class Pikmin
{
public:
	void intro();
};

// 赤ピクミン
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

// 黄ピクミン
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

// 青ピクミン
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
