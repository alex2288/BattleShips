#pragma once

#include "BasicShip.h"
#include "Coordinate.h"

const int SHIP_SIZE4 = 4;

class ShipSize4 : public BasicShip {
public:
	Coordinate coords[SHIP_SIZE4];
	ShipSize4(Coordinate(*c)[10][10], bool orientation, short x, short y);
	virtual ~ShipSize4();
};

