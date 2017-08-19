#include"base_card.h"

#include <string>

BaseCard::BaseCard()
{
}

BaseCard::BaseCard(std::wstring type, int points, std::wstring name):
	mname(name), 
	mpoints(points)
{
	mtypeID = type;
}

BaseCard::~BaseCard()
{}

void BaseCard::setID(std::wstring srcID)
{
	mtypeID = srcID;
}

void BaseCard::setPnts(int srcPnts)
{
	mpoints = srcPnts;
}

void BaseCard::setName(std::wstring srcName)
{
	mname = srcName;
}

std::wstring BaseCard::getID()
{
	return mtypeID;
}

int BaseCard::getPnts()
{
	return mpoints;
}

std::wstring BaseCard::getName()
{
	return mname;
}

void BaseCard::drawFront()
{

}

void BaseCard::drawBack()
{

}

void BaseCard::setSign(char sign)
{

}