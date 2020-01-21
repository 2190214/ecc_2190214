#pragma once

#include <string>
using namespace std;

enum {
	WIN,
	LOSE,
	DRAW,
};


// 基底クラス
class Hand
{
private:
	string	name;
public:
	Hand(string n) : name(n) {}
	string getName() { return name; }
	virtual int vsHand(Hand* h) = 0;			// 対戦！
};


// グー
class Gu : public Hand
{
public:
	Gu() : Hand("グー") {}
	int vsHand(Hand* h) { return DRAW; }			// 判定
};


// チョキ
class Choki : public Hand
{
public:
	Choki() : Hand("チョキ") {}
	int vsHand(Hand* h) { return DRAW; }			// 判定
};

// パー
class Pa : public Hand
{
public:
	Pa() : Hand("パー") {}
	int vsHand(Hand* h) { return DRAW; }			// 判定
};
