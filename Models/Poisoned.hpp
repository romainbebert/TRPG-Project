#pragma once

#include "Decorator.hpp"

// Déclaration

class Poisoned : public Decorator {
public:
	Poisoned(Entity *up);

	void applyDecorator();

	string getAlt();
};