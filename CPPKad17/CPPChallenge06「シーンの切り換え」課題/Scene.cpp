#include <iostream>
using namespace std;

#include "Scene.h"

int IScene::count = 0;

void IScene::showCount()
{
	cout << "シーンが" << count << "個残っています！" << endl;
}
