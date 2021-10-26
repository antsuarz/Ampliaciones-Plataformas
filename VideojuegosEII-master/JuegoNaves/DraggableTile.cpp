#include "DraggableTile.h"

DraggableTile::DraggableTile(float x, float y, Game* game)
	: Actor("res/bloque_caja.png", x, y, 40, 32, game) {
	vx = 0;
	vxIntelligence = 0;
	vy = -1;
	draggable = true;
}

void DraggableTile::update() {
	vy = vy -1;
}

