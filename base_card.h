#ifndef BASECARD_H
#define BASECARD_H

#include <string>

class BaseCard
{
public:
	BaseCard();
	BaseCard(std::wstring type, int points, std::wstring name);
	virtual ~BaseCard() = 0;

	virtual void drawFront();
	virtual void drawBack();
	virtual void setSign(char sign);

	void setID(std::wstring srcID);
	void setPnts(int srcPnts);
	void setName(std::wstring srcName);

	std::wstring getID();
	int getPnts();
	std::wstring getName();

protected:
	std::wstring mtypeID;
	int mpoints;
	std::wstring mname;
};

#endif BASECARD_H
