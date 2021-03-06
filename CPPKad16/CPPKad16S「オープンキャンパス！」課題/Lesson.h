#pragma once

#include <list>
using namespace std;

class Listener;

class Lesson
{
public:
	enum {
		LID_GD,			// 企画
		LID_CG,			// CG
		LID_PG,			// プログラム
	};
private:
	int				id;
	char*			name;
	list<Listener*>	listeners;
public:
	Lesson(char* n, int i);
	~Lesson();
	void addListener(Listener* listener);
	void notifyListener();
	int getID() { return id; }
};

class GameDesign : public Lesson
{
public:
	GameDesign();
};

class CGDesign : public Lesson
{
public:
	CGDesign();
};

class GamePG : public Lesson
{
public:
	GamePG();
};