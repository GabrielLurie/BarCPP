#pragma once
#include "wine.h"
class RedWine :
	public Wine
{
public:
	RedWine(char* s,int year):Wine(s,year){}
	~RedWine(void);
	virtual void prepare();
};

