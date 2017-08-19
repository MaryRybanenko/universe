#ifndef PLANET_H
#define PLANET_H

#include"base_card.h"

class Planet: virtual public BaseCard
{
public:
	Planet();
	Planet(bool status, std::wstring type, int points, std::wstring name);
	~Planet();

	void drawCard();
	void setStatus(bool srcStat);
	bool getStatus();

protected:
	bool misConnected;
};

#endif PLANET_H