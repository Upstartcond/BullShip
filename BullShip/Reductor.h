#pragma once
#include "Ball.h"
class Reductor
{

private:
	int size;
	int x{ 0 };
	int y{ 0 };
	float t = 1;
	Pong :: Ball* ball;
public:
	Reductor(int _x, int _y, float _t);
	~Reductor();
	void init();
	void draw();
	void update();
	void reducBall(Pong::Ball* ball);
};

