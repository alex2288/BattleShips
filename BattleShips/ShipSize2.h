#pragma once

#include "BasicShip.h"
#include "Coordinate.h"

const int SHIP_SIZE2 = 2;

class ShipSize2 : public BasicShip {
public:
	Coordinate coords[SHIP_SIZE2];
	ShipSize2(Coordinate(*c)[10][10], bool orientation, short x, short y);
	virtual ~ShipSize2();
};

