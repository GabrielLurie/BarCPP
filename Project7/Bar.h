#pragma once
#include "Drink.h"
#include "Beer.h"
#include "CarmelEmeraldRiesling.h"
#include "GolanSmadar.h"
#include "YardenChardonnay.h"
#include "Chianti.h"
#include "YardenMHR.h"
#include "YardenCS.h"
#include "ChadeauMargot.h"



#define SHELF_SIZE 10
class Bar
{

private:
	Drink* stock[SHELF_SIZE];
	int lastSelected;
public:
	Bar(void);
	~Bar(void);
};

