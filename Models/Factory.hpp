#pragma once

class Entity;

// Déclaration

class Factory {
public :
	virtual Entity *createEntity(int ent = 1, int lvl = 1) = 0;
};