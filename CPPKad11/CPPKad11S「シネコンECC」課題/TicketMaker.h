#pragma once

// TicketMakerクラス
class TicketMaker
{
private:
	int			ticket;									// チケット番号
public:
	TicketMaker() : ticket(0) {}						// デフォルトコンストラクタ
	int getNextTicket() { return ++ticket; }			// 次のチケット番号を返す
};
