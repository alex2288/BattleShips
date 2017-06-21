#pragma once
#include "Ship.h"
#include <stdexcept>     
#include "Coordinate.h"
#include <stdlib.h> 
#include <time.h>  

class Board {
public:
	static const short BOARD_SIZE = 10;
	static const short SHIP1_COUNT = 1;
	static const short SHIP2_COUNT = 2;
	static const short SHIP3_COUNT = 3;
	static const short SHIP4_COUNT = 4;
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

