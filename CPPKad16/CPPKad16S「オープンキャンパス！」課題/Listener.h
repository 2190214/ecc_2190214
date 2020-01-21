#pragma once

#include <iostream>
using namespace std;

#include "Lesson.h"

class Listener
{
protected:
	char*	name;
public:
	Listener(char* n) : name(n) { cout << name << "がやってきた！" << endl; }
	virtual ~Listener() { cout << name << "はどこかへ行った！" << endl; }
	virtual void notify(Lesson* lesson) = 0;
	char* getName() { return name; }
};

class nobita : public Listener
{
public:
	nobita() : Listener("のび太") {}
	void notify(Lesson* lesson)
	{
		cout << "ぼく、" << name << "。よろしく！";
		switch (lesson->getID()) {
		case Lesson::LID_GD:
			break;
		case Lesson::LID_CG:
			break;
		case Lesson::LID_PG:
			cout << "実はプログラムが得意なんだ！！";
			break;
		}
		cout << endl;
	}
};

class sizuka : public Listener
{
public:
	sizuka() : Listener("しずか") {}
	void notify(Lesson* lesson)
	{
		cout << "わたし、" << name << "。よろしくね！";
		switch (lesson->getID()) {
		case Lesson::LID_GD:
			break;
		case Lesson::LID_CG:
			cout << "CGって楽しい！！";
			break;
		case Lesson::LID_PG:
			break;
		}
		cout << endl;
	}
};

class suneo : public Listener
{
public:
	suneo() : Listener("スネ夫") {}
	void notify(Lesson* lesson)
	{
		cout << "オレ、" << name << "。よろしくな！";
		switch (lesson->getID()) {
		case Lesson::LID_GD:
			cout << "ゲーム企画ならまかせて！！";
			break;
		case Lesson::LID_CG:
			break;
		case Lesson::LID_PG:
			break;
		}
		cout << endl;
	}
};

class giant : public Listener
{
public:
	giant() : Listener("ジャイアン") {}
	void notify(Lesson* lesson)
	{
		cout << "オレ様、" << name << "。よろしくな！";
		cout << "う～ん、むずかしい～っ！！";
		cout << endl;
	}
};

class dekisugi : public Listener
{
public:
	dekisugi() : Listener("出木杉") {}
	void notify(Lesson* lesson)
	{
		cout << "ぼく、" << name << "。よろしく！";
		cout << "こんなの簡単だよ！";
		cout << endl;
	}
};
