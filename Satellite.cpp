#include "satellite.h"

Satellite::Satellite()
{}

Satellite::Satellite(std::wstring planetName, bool status, std::wstring type, int points, std::wstring name) :
	mrelatedTo(planetName),
	Planet(status, type, points, name)
{}

Satellite::~Satellite()
{}

std::wstring Satellite::getRelation()
{
	return mrelatedTo;
}

void Satellite::setRelation(std::wstring planetName)
{
	mrelatedTo = planetName;
}

void Satellite::drawCard()
{}

