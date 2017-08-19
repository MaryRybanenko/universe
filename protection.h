#ifndef PROTECTION_H
#define PROTECTION_H

#include"base_card.h"

class Protection: public BaseCard
{
public:
	Protection();
	Protection(bool status, std::wstring type, int points, std::wstring name);
	~Protection();
	void drawCard();

private:
	bool ifProtect;
};


#endif PROTECTION_H

