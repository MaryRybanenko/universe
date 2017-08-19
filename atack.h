#ifndef ATACK_H
#define ATACK_H

#include"base_card.h"

class Atack: public BaseCard
{
public:
	Atack();
	Atack(std::wstring type, int points, std::wstring name);
	~Atack();
	void drawCard();
	int pickUpPoints(int srcPoints);
};

#endif ATACK_H

