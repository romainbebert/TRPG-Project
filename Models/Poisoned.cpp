// Implémentation

#include "Poisoned.hpp"

Poisoned::Poisoned(Entity *up) : Decorator(up) {}

void Poisoned::applyDecorator() {
	Decorator::setHP(Decorator::getHP() - (Decorator::getHP() * 1/10));
	Decorator::applyDecorator();
}

string Poisoned::getAlt() {
	return Decorator::getAlt() + " empoisonné";
}