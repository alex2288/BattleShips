#pragma once

#include <stdexcept>     
#include <stdlib.h> 
#include <time.h>  
#include "Coordinate.h"
#include "ShipSize1.h"
#include "ShipSize2.h"
#include "ShipSize3.h"
#include "ShipSize4.h"


const short BOARD_SIZE = 10;
const short SHIP1_COUNT = 1;
const short SHIP2_COUNT = 2;
const short SHIP3_COUNT = 3;
const short SHIP4_COUNT = 4;

class Board {
public:
	ShipSize1 * ships1[SHIP1_COUNT];
	ShipSize2 * ships2[SHIP2_COUNT];
	ShipSize3 * ships3[SHIP3_COUNT];
	ShipSize4 * ships4[SHIP4_COUNT];
	Coordinate array[BOARD_SIZE][BOARD_SIZE];
	Board();
	bool checkShipAvailability(Coordinate * c, short size, bool orientation);
	bool checkPointAvailability(Coordinate * c);
	ShipSize4 * allocShip(short size);
	void initCoordinates();
	~Board();
};

