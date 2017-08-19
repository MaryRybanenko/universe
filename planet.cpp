#include "planet.h"

Planet::Planet()
{}

Planet::Planet(bool status, std::wstring type, int points, std::wstring name) :
	misConnected(status),
	BaseCard(type, points, name)
{}

Planet::~Planet()
{}

void Planet::drawCard()
{

}

void Planet::setStatus(bool srcStat)
{
	misConnected = srcStat;
}

bool Planet::getStatus()
{
	return misConnected;
}

