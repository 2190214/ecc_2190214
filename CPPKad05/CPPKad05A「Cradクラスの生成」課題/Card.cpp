#include <iostream>
#include <cstdlib>
using namespace std;

#include "Card.h"




Card::Card()
{
	cout << myCount << "枚目：" << myNum << "を引きました！" << endl;
}

Card::~Card()
{
	cout << myCount << "枚目：" << myNum << "を返しました！" << endl;
}
