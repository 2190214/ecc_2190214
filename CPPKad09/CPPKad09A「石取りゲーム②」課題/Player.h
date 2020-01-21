//******************************************************************************
//
//		�v���C���[�N���X
//
//******************************************************************************

#include <string>
using namespace std;

//--------------------------------
//	BasePlayer�N���X
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
//	UserPlayer�N���X
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
//	CompPlayer�N���X
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
