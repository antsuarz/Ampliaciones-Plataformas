#pragma once

#include "Tile.h"
class DraggableTile : public Actor
{
public:
	bool collisionLeft= false;
	bool collisionRight = true;
	float vxIntelligence;
	float vx;
	float vy;
	DraggableTile(float x, float y, Game* game);
	void update();
};


