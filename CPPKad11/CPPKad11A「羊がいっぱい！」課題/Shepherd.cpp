
#include <iostream>
#include <string>
using namespace std;

#include "Shepherd.h"

Shepherd::Shepherd(string n, int i) : name(n), num(i)
{
	cout << name << "������Ă����I" << endl;

	// num����Sheep�𐶐�



}

Shepherd::~Shepherd()
{
	cout << name << "�������Ă������I" << endl;

	// num����Sheep���폜



}

void Shepherd::intro()
{
	cout << "������̖��O��" << name << "���Ă����񂾁B" << endl;
	cout << "������̗r���Љ���B" << endl;

	// num����Sheep���Љ�



}
