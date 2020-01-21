//******************************************************************************
//
//
//							<<< 妖精クラス >>>
//
//
//******************************************************************************

#include <iostream>
#include <cstdlib>
using namespace std;

#include "Fairy.h"

//******************************************************************************
//
//
//							<<< Fairyクラス >>>
//
//
//******************************************************************************

Fairy::Fairy()
{
	cout << "Fairyクラスのコンストラクタが呼び出されました！" << endl;
}

Fairy::~Fairy()
{
	cout << "Fairyクラスのデストラクタが呼び出されました！" << endl;
}

void Fairy::intro()
{
	cout << "わたしは普通の妖精よ！" << endl;
	cout << "すべての妖精の源よ！" << endl;
}

//******************************************************************************
//
//
//							<<< Lightクラス >>>
//
//
//******************************************************************************

Light::Light()
{
	cout << "Lightクラスのコンストラクタが呼び出されました！" << endl;
}

Light::~Light()
{
	cout << "Lightクラスのデストラクタが呼び出されました！" << endl;
}

void Light::intro()
{
	cout << "わたしは光の妖精！" << endl;
	cout << "この者に祝福を！" << endl;
}

//******************************************************************************
//
//
//							<<< Darknessクラス >>>
//
//
//******************************************************************************

Darkness::Darkness()
{
	cout << "Darknessクラスのコンストラクタが呼び出されました！" << endl;
}

Darkness::~Darkness()
{
	cout << "Darknessクラスのデストラクタが呼び出されました！" << endl;
}

void Darkness::intro()
{
	cout << "わたしは闇の妖精だ！" << endl;
	cout << "闇の力を思い知れ！" << endl;
}

//******************************************************************************
//
//
//							<<< Fireクラス >>>
//
//
//******************************************************************************

Fire::Fire()
{
	cout << "Fireクラスのコンストラクタが呼び出されました！" << endl;
}

Fire::~Fire()
{
	cout << "Fireクラスのデストラクタが呼び出されました！" << endl;
}

void Fire::intro()
{
	cout << "わたしは炎の妖精さ！" << endl;
	cout << "炎の力は気まぐれなのさ！" << endl;
}

//******************************************************************************
