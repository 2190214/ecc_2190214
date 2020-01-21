#pragma once

#include <string>
using namespace std;

enum {
	WIN,
	LOSE,
	DRAW,
};


// ���N���X
class Hand
{
private:
	string	name;
public:
	Hand(string n) : name(n) {}
	string getName() { return name; }
	virtual int vsHand(Hand* h) = 0;			// �ΐ�I
};


// �O�[
class Gu : public Hand
{
public:
	Gu() : Hand("�O�[") {}
	int vsHand(Hand* h) { return DRAW; }			// ����
};


// �`���L
class Choki : public Hand
{
public:
	Choki() : Hand("�`���L") {}
	int vsHand(Hand* h) { return DRAW; }			// ����
};

// �p�[
class Pa : public Hand
{
public:
	Pa() : Hand("�p�[") {}
	int vsHand(Hand* h) { return DRAW; }			// ����
};
