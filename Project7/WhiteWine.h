#pragma once
#include "wine.h"
class WhiteWine:public Wine
{
public:
	WhiteWine(char* s,int year):Wine(s,year){}
	~WhiteWine(void);
	virtual void prepare();
};

