#include "Player.h"
#pragma once

player::player()
{
	setUpShape();
}

void player::setUpShape()
{
	body.setSize(MyVector3{ 30.0, 30.0, 0.0 });
	body.setFillColor(sf::Color::Red);
	position = { 400.0, 400.0, 0.0 };
	velocity = { 0.0, 0.0, 0.0 };
}

void player::move()
{

}
