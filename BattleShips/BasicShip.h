#pragma once

class BasicShip {
public:
	bool orientation;
	bool drown = false;
	bool hidden;
	BasicShip();
	virtual ~BasicShip() = 0;
};