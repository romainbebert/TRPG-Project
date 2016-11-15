#pragma once

#include "Decorator.hpp"

// Déclaration

class Burnt : public Decorator {
public:
	Burnt(Entity *up);

	int getStr() const;

	void applyDecorator();

	string getAlt();
};