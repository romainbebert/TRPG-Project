#include "FactoryNormal.hpp"

// Implémentation

Entity FactoryNormal::createEntity(int ent, int lvl) {
	switch (ent) {
		case 1 : return Zombie(lvl);

		case 2 : return Loup(lvl);

		default : return Zombie();
	}
};