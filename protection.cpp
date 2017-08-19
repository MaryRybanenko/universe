#include "protection.h"

Protection::Protection()
{
}

Protection::Protection(bool status, std::wstring type, int points, std::wstring name):
	BaseCard(type, points, name)
{}
Protection::~Protection()
{
}

void Protection::drawCard()
{

}

