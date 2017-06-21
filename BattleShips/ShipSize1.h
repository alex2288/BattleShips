#pragma once

#include "BasicShip.h"
#include "Coordinate.h"

const int SHIP_SIZE1 = 1;

class ShipSize1 : public BasicShip {
public:
	Coordinate coords[SHIP_SIZE1];
	ShipSize1(Coordinate(*c)[10][10], bool orientation, short x, short y);
	virtual ~ShipSize1();
};

