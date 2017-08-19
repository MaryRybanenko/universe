#ifndef SATELLITE_H
#define SATELLITE_H

#include"planet.h"

class Satellite: public Planet
{
public:
	Satellite();
	Satellite(std::wstring planetName, bool status, std::wstring type, int points, std::wstring name);
	~Satellite();

	std::wstring getRelation();
	void setRelation(std::wstring planetName);
	void drawCard();


private:
	std::wstring mrelatedTo;
};


#endif SATELLITE_H

