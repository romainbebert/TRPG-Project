// Implémentation

#include "Burnt.hpp"

Burnt::Burnt(Entity *up) : Decorator(up) {}

int Burnt::getStr() const {
	return Decorator::getStr() / 2;
}

void Burnt::applyDecorator() {
	Decorator::setHP(Decorator::getHP() - (Decorator::getHPM() * 5/100));
	Decorator::applyDecorator();
}

string Burnt::getAlt() {
	return Decorator::getAlt() + " brûlé";
}