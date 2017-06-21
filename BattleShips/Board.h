#pragma once

#include <stdexcept>     
#include <stdlib.h> 
#include <time.h>  
#include "Coordinate.h"
#include "Ship.h"

const short BOARD_SIZE = 10;
const short SHIP1_COUNT = 1;
const short SHIP2_COUNT = 2;
const short SHIP3_COUNT = 3;
const short SHIP4_COUNT = 4;

class Board {
public:
	Ship * ships1[SHIP1_COUNT];
	Ship * ships2[SHIP2_COUNT];
	Ship * ships3[SHIP3_COUNT];
	Ship * ships4[SHIP4_COUNT];
	Coordinate array[BOARD_SIZE][BOARD_SIZE];
	Board();
	bool checkShipAvailability(Coordinate * c, short size, bool orientation);
	bool checkPointAvailability(Coordinate * c);
	Ship * allocShip(short size);
	void initCoordinates();
	~Board();
};

