//******************************************************************************
//
//
//		CPPChallenge02�u���l������񂯂�v
//
//		�N���X�F
//		���@���F
//		�쐬���F
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
	string	name;					// ���O
	int		hand;					// �u��v
public:
	Player(string n) : name(n)
	{
		cout << name << "�����ꂽ�I" << endl;
	}
	string getName() { return name; }
	void setHand(int h) { hand = h; }
	int getHand() { return hand; }
};

//******************************************************************************
//
//
//		main�֐�
//
//
//******************************************************************************

int main()
{
	// �����n��̐ݒ�
	srand( (unsigned int)time(NULL) );

	Player	player[MAX_PLAYER] = { "�̂ё�", "������", "�W���C�A��", "�X�l�v", };
	cout << "�S���Łu����񂯂�v�������I�I" << endl;
	cout << endl;







	return 0;
}

//******************************************************************************
