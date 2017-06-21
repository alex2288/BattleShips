#include "Ship.h"

Ship::Ship(Coordinate(*c)[10][10], short size, bool orientation, short x, short y) {
	this->size = size;
	this->orientation = orientation;
	for (int i = 0; i < size; i++) {
		if (orientation) {//y++
			c[x][y + i]->value = 'X';
		}
		else {//x++
			c[x + i][y]->value = 'X';
		}
	}
}

Ship::~Ship() {
}
