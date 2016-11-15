// Implémentation

#include "Cecity.hpp"

Cecity::Cecity(Entity *up) : Decorator(up) {}

int Cecity::getPre() const {
	return Decorator::getPre() - 80;
}

string Cecity::getAlt() {
	return Decorator::getAlt() +" aveuglé";
}