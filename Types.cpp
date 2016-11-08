#include "Types.hpp"

// Implémentation

Types::Types(bool b, bool e, bool h, bool m, bool u) : beast_(b), elemental_(e), human_(h), mythic_(m), undead_(u) {}

bool Types::getBeast() const {
	return beast_;
}

void Types::setBeast(bool beast) {
	beast_ = beast;
}

bool Types::getElemental() const {
	return elemental_;
}

void Types::setElemental(bool elemental) {
	elemental_ = elemental;
}

bool Types::getHuman() const {
	return human_;
}

void Types::setHuman(bool human) {
	human_ = human;
}

bool Types::getMythic() const {
	return mythic_;
}

void Types::setMythic(bool mythic) {
	mythic_ = mythic;
}

bool Types::getUndead() const {
	return undead_;
}

void Types::setUndead(bool undead) {
	undead_ = undead;
}