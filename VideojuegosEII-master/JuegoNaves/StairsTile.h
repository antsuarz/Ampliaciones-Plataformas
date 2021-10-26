#pragma once
#include "Tile.h"
class StairsTile : public Actor
{
public:
	bool collisionLeft = false;
	bool collisionRight = true;
	float vxIntelligence;
	float vx;
	float vy = 0;
	StairsTile(float x, float y, Game* game); 
	void update();
};
