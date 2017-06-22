#include "Board.h"

Board::Board() {
	this->initCoordinates();
	for (int i = 0; i < SHIP1_COUNT; i++) {
		//ships1[i] = (ShipSize1)allocShip(SHIP_SIZE1);
	}
	for (int i = 0; i < SHIP2_COUNT; i++) {
		//ships2[i] = (ShipSize2)allocShip(SHIP_SIZE2);
	}
	for (int i = 0; i < SHIP3_COUNT; i++) {
		//ships3[i] = (ShipSize3)allocShip(SHIP_SIZE3);
	}
	for (int i = 0; i < SHIP4_COUNT; i++) {
		//ships4[i] = (ShipSize4)allocShip(SHIP_SIZE4);
	}
}

ShipSize4 * Board::allocShip(short size) {
	srand((unsigned int)time(0));
	bool orientation;
	short x, y;
	do {
		orientation = rand() % 1;
		x = rand() % BOARD_SIZE;
		y = rand() % BOARD_SIZE;
	} while (!checkShipAvailability(&array[x][y], size, orientation));
	ShipSize4 * result = new ShipSize4(&array, orientation, x, y);
	return result;
}

void Board::initCoordinates() {
	for (int i = 0; i < BOARD_SIZE; i++) {
		for (int j = 0; j < BOARD_SIZE; j++) {
			array[i][j].x = i;
			array[i][j].y = j;
		}
	}
}

bool Board::checkShipAvailability(Coordinate * c, short size, bool orientation) {
	for (int i = 0; i < size; i++) {
		if (orientation) {//y++
			c = &array[c->x][c->y + 1];
			if (!this->checkPointAvailability(c))
				return false;
		}
		else {//x++
			c = &array[c->x + 1][c->y];
			if (!this->checkPointAvailability(c))
				return false;
		}
	}
	return true;
}

bool Board::checkPointAvailability(Coordinate * c) {
	if (c->x > BOARD_SIZE || c->x < 0 || c->y > BOARD_SIZE || c->y < 0 || c->value == 'X')
		return false;
	else {
		c = &array[c->x - 1][c->y - 1];
		for (int i = 0; i < 3; i++) {
			try {
				c = &array[c->x][c->y + i];
				if (c->value == 'X')
					return false;
			}
			catch (const std::out_of_range&) {}
		}
		c = &array[c->x + 1][c->y - 2];
		for (int i = 0; i < 3; i++) {
			try {
				c = &array[c->x][c->y + i];
				if (c->value == 'X')
					return false;
			}
			catch (const std::out_of_range&) {}
		}
		c = &array[c->x + 1][c->y - 2];
		for (int i = 0; i < 3; i++) {
			try {
				c = &array[c->x][c->y + i];
				if (c->value == 'X')
					return false;
			}
			catch (const std::out_of_range&) {}
		}
	}
	return true;
}

Board::~Board() {
	free(ships1);
	free(ships2);
	free(ships3);
	free(ships4);
}
