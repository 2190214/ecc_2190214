//******************************************************************************
//
//
//		CPPChallenge02「多人数じゃんけん」
//
//		クラス：
//		氏　名：
//		作成日：
//
//
//******************************************************************************

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

#define MAX_PLAYER		4

class Player
{
private:
	string	name;					// 名前
	int		hand;					// 「手」
public:
	Player(string n) : name(n)
	{
		cout << name << "が現れた！" << endl;
	}
	string getName() { return name; }
	void setHand(int h) { hand = h; }
	int getHand() { return hand; }
};

//******************************************************************************
//
//
//		main関数
//
//
//******************************************************************************

int main()
{
	// 乱数系列の設定
	srand( (unsigned int)time(NULL) );

	Player	player[MAX_PLAYER] = { "のび太", "しずか", "ジャイアン", "スネ夫", };
	cout << "全員で「じゃんけん」をした！！" << endl;
	cout << endl;







	return 0;
}

//******************************************************************************
