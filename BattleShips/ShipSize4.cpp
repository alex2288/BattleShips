#include "ShipSize4.h"

ShipSize4::ShipSize4(Coordinate(*c)[10][10], bool orientation, short x, short y) {
	this->orientation = orientation;
	for (int i = 0; i < SHIP_SIZE4; i++) {
		if (orientation) {//y++
			c[x][y + i]->value = 'X';
		}
		else {//x++
			c[x + i][y]->value = 'X';
		}
	}
}

ShipSize4::~ShipSize4()
{
}
