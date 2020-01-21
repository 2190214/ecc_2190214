
#include <iostream>
#include <string>
using namespace std;

#include "Shepherd.h"

Shepherd::Shepherd(string n, int i) : name(n), num(i)
{
	cout << name << "がやってきた！" << endl;

	// num分のSheepを生成



}

Shepherd::~Shepherd()
{
	cout << name << "が去っていった！" << endl;

	// num分のSheepを削除



}

void Shepherd::intro()
{
	cout << "おいらの名前は" << name << "っていうんだ。" << endl;
	cout << "おいらの羊を紹介するよ。" << endl;

	// num分のSheepを紹介



}
