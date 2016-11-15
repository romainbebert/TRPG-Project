#include "NormalFactory.hpp"

// Implémentation

Entity *NormalFactory::createEntity(int ent, int lvl) {
	switch (ent) {
		case 1 : return new Zombie(lvl);

		case 2 : return new Loup(lvl);

		default : return new Zombie();
	}
};