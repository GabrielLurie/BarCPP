#pragma once
#include <iostream>
class Drink
{
	
   protected: 
	 char* name;
public:
 Drink(char* s);
	~Drink(void);
	 virtual void getName(){std::cout<< name;}
	 virtual void prepare()=0;
};

