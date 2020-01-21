//******************************************************************************
//
//		プレイヤークラス
//
//******************************************************************************

#include <string>
using namespace std;

//--------------------------------
//	BasePlayerクラス
//--------------------------------

class BasePlayer
{
protected:
	string		name;
public:
	BasePlayer(string n) : name(n) {}
	~BasePlayer();
	void intro();

	string getName() { return name; }
	int takeStone( int stoneNum );
};

//--------------------------------
//	UserPlayerクラス
//--------------------------------

class UserPlayer : public BasePlayer
{
public:
	UserPlayer(string n) : BasePlayer(n) {}
	~UserPlayer();
	void intro();
	int takeStone( int stoneNum );
};

//--------------------------------
//	CompPlayerクラス
//--------------------------------

class CompPlayer : public BasePlayer
{
public:
	CompPlayer(string n) : BasePlayer(n) {}
	~CompPlayer();
	void intro();
	int takeStone( int stoneNum );
};

//******************************************************************************
