#include <iostream>
#include <Windows.h>
#include <conio.h>
#include "Statistics.h"
#include "Coordinate.h"
#include "Board.h"

using namespace std;

class Model {
public:
	Model();
	~Model();
	bool checkCoordinate(Coordinate c, bool user);
	bool shotAtCoordinate(Coordinate c, bool user);
	Coordinate generateMove();
private:
	Board * _userBoard;
	Board * _aiBoard;
};