#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "TicketMaker.h"

// Window（窓口）クラス
class Window
{
private:
	string		name;		// 名前
	TicketMaker	t;			// チケットメーカー
public:
	Window(string n) : name(n)
	{
	}
	// 発券する
	void sellTicket()
	{
		cout << "窓口担当の" << name << "です！" << endl;
		cout << "あなたの座席は" << t.getNextTicket() << "番です。ありがとうございました！" << endl;
	}
};
