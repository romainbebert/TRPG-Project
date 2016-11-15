#pragma once

#include "Decorator.hpp"

// Déclaration

class Cecity : public Decorator {
public:
	Cecity(Entity *up);

	int getPre() const;

	string getAlt();
};