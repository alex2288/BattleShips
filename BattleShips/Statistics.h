#pragma once

class Statistics {
public:
	static Statistics& Instance() {
		static Statistics s;
		return s;
	}
	static void setShipsLeft(int ships);
	static void setShipsDrown(int ships);
	static int getShipsLeft();
	static int getShipsDrown();
	static int getScore();
private:
	static int _score;
	static int _shipsLeft;
	static int _shipsDrown;
	Statistics() {}  
	~Statistics() {} 
	Statistics(Statistics const&); 
	Statistics& operator = (Statistics const&);
};