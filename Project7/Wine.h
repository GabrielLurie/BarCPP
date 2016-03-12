#pragma once
#include "drink.h"
class Wine :public Drink
{
private:
	int year;
public:
	 Wine(char* s,int y):Drink(s),year(y){}
	~Wine(void);
	virtual void getName();
	virtual void prepare();
};

