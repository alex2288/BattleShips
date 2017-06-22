#include "Model.h"

void Run(LPVOID param) {
	Model * obj = (Model *)param;
	while (1) {
		//run
	}
}

Model::Model() {
	this->_aiBoard = new Board();
	this->_userBoard = new Board;
}

Model::~Model(){
	free(_aiBoard);
	free(_userBoard);
}

bool Model::checkCoordinate(Coordinate c, bool user) {
	if (!user) {
		return !_userBoard->isCoordinateShot(Coordinate c);
	}
	else {
		return !_aiBoard->isCoordinateShot(Coordinate c);
	}
}

bool Model::shotAtCoordinate(Coordinate c, bool user) {
	if (!user) {
		return _userBoard->shotAt(Coordinate c);
	}
	else {
		return _aiBoard->shotAt(Coordinate c);
	}
}

Coordinate Model::generateMove() {
	Coordinate result;
	do {
		result.x = rand() % BOARD_SIZE;
		result.y = rand() % BOARD_SIZE;
	}
	while (!this->checkCoordinate(result, 0));
	this->shotAtCoordinate(result, 0);
}
