#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "TicketMaker.h"

// Window�i�����j�N���X
class Window
{
private:
	string		name;		// ���O
	TicketMaker	t;			// �`�P�b�g���[�J�[
public:
	Window(string n) : name(n)
	{
	}
	// ��������
	void sellTicket()
	{
		cout << "�����S����" << name << "�ł��I" << endl;
		cout << "���Ȃ��̍��Ȃ�" << t.getNextTicket() << "�Ԃł��B���肪�Ƃ��������܂����I" << endl;
	}
};
