#pragma once

#include "BasicShip.h"
#include "Coordinate.h"

const int SHIP_SIZE3 = 3;

class ShipSize3 : public BasicShip {
public:
	Coordinate coords[SHIP_SIZE3];
	ShipSize3(Coordinate(*c)[10][10], bool orientation, short x, short y);
	virtual ~ShipSize3();
};

