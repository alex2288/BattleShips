#include "ShipSize1.h"

ShipSize1::ShipSize1(Coordinate(*c)[10][10], bool orientation, short x, short y) {
	this->orientation = orientation;
	for (int i = 0; i < SHIP_SIZE1; i++) {
		if (orientation) {//y++
			c[x][y + i]->value = 'X';
		}
		else {//x++
			c[x + i][y]->value = 'X';
		}
	}
}

ShipSize1::~ShipSize1()
{
}
