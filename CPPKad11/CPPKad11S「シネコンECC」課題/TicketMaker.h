#pragma once

// TicketMaker�N���X
class TicketMaker
{
private:
	int			ticket;									// �`�P�b�g�ԍ�
public:
	TicketMaker() : ticket(0) {}						// �f�t�H���g�R���X�g���N�^
	int getNextTicket() { return ++ticket; }			// ���̃`�P�b�g�ԍ���Ԃ�
};
