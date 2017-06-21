#pragma once
#include "Coordinate.h"
#include <stdlib.h> 
#include <time.h>  

class Ship {
public:
	short size;
	Coordinate coords[4];
	bool orientation;
	bool drown = false;

	Ship(Coordinate(*c)[10][10], short size, bool orientation, short x, short y);
	~Ship();
};

