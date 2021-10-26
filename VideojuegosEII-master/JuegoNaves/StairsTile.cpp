#include "StairsTile.h"

StairsTile::StairsTile(float x, float y, Game* game)
	: Actor("res/bloque_escalera.png", x, y, 40, 32, game) {
	vx = 1;
	vxIntelligence = -1;
	vx = vxIntelligence;
	vy = 1;
}

void StairsTile::update() {
	vy = vy *-1;
}
