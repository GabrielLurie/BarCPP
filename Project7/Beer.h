#pragma once
#include "drink.h"
class Beer :public Drink
{
public:
	
	 Beer(char* s):Drink(s){}
	~Beer(void);
	//virtual char* getName();
	virtual void prepare();
};




