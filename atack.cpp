#include "atack.h"

Atack::Atack()
{
}

Atack::Atack(std::wstring type, int points, std::wstring name) :
	BaseCard(type, points, name)
{

}

Atack::~Atack()
{
}


void Atack::drawCard()
{

}

int Atack::pickUpPoints(int srcPoints)
{
	return abs(srcPoints - mpoints);
}

