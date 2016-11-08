#pragma once

#include "Factory.hpp"
#include "Zombie.hpp"					// 1
#include "Loup.hpp"						// 2

// Déclaration

class FactoryNormal : public Factory {
public:
	Entity createEntity(int ent = 2, int lvl = 1);
};