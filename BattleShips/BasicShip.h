#pragma once

class BasicShip {
public:
	bool orientation;
	bool drown = false;
	BasicShip();
	virtual ~BasicShip() = 0;
};