#pragma once

#include <list>
using namespace std;

class Listener;

class Lesson
{
public:
	enum {
		LID_GD,			// Šé‰æ
		LID_CG,			// CG
		LID_PG,			// ƒvƒƒOƒ‰ƒ€
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