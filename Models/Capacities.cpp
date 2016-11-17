#include "Capacities.hpp"

Fireball::Fireball() : Capacity("Boule de Feu", 5, 1, 3) {}

void Fireball::onHit(Entity *launcher, Entity *receiver) {
	receiver->setHP(receiver->getHP() - launcher->getInt() * 5);
	receiver = new Burnt(receiver);
}