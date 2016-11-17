#pragma once

#include "Capacity.hpp"

class Fireball : public Capacity {
public:
	Fireball();
	void onHit(Entity *launcher, Entity *receiver);
};