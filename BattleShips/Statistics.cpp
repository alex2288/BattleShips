#include "Statistics.h"

void Statistics::setShipsLeft(int ships) {
	_shipsLeft = ships;
}

void Statistics::setShipsDrown(int ships) {
	_shipsDrown = ships;
}

int Statistics::getShipsLeft() {
	return _shipsLeft;
}

int Statistics::getShipsDrown(){
	return _shipsDrown;
}

int Statistics::getScore() {
	return _score;
}
