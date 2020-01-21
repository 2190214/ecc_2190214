#include <iostream>
using namespace std;

#include "Lesson.h"
#include "Listener.h"

class Listener;

Lesson::Lesson(char* n, int i) : name(n), id(i)
{
	cout << name << "の先生がやってきた！" << endl;
}

Lesson::~Lesson()
{
	cout << name << "の先生はどこかへ行った！" << endl;
}

void Lesson::addListener(Listener* listener)
{
	for (auto& item : listeners) {
		if (listener->getName() == item->getName()) {	// アドレス比較
			cout << "すでに登録済みです！" << endl;
			return;
		}
	}
	listeners.push_back(listener);
	cout << name << "に登録しました！" << endl;
}

void Lesson::notifyListener()
{
	cout << "<<<" << name << "を始めます！>>>" << endl;
	for (auto& item : listeners) {
		item->notify(this);
	}
}

GameDesign::GameDesign() : Lesson("ゲーム企画", LID_GD)
{
	cout << "「こんにちは！！」" << endl;
}

CGDesign::CGDesign() : Lesson("ゲームCG", LID_CG)
{
	cout << "「Bonjour！！」" << endl;
}

GamePG::GamePG() : Lesson("ゲームプログラム", LID_PG)
{
	cout << "「※§÷ΓΘΦΣ！！」" << endl;
}
