#ifndef PLAYER
#define PLAYER

#include "MyVector3.h"

class player
{
private:

	double heading;
	sf::RectangleShape body;
	MyVector3 position{};
	MyVector3 velocity{};
	double turnate;
	const double MAX_SPEED = 20.0;
	double speed;
	void setUpShape();
	void move();

public:
	player();


};

#endif // !Game
