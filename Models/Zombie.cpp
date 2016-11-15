// Implémentation

#include "Zombie.hpp"

Zombie::Zombie(int lvl) {
	switch (lvl) {
		case 1 : 	setName("Zombie fragile");
					setChara(Characteristics(1, 1, -2, 1, -4, -1));
					setType(Types(false, false, true, false, true));
		break;

		case 2 : 	setName("Zombie");
					setChara(Characteristics(2, 1, -1, 1, -4, -1));
					setType(Types(false, false, true, false, true));
		break;

		case 3 : 	setName("Zombie gluten-three");
					setChara(Characteristics(3, 2,  0, 2, -4,  0));
					setType(Types(false, false, true, false, true));
		break;

		case 4 : 	setName("Zombie solide");
					setChara(Characteristics(4, 2,  1, 2, -4,  0));
					setType(Types(false, false, true, false, true));
		break;

		case 5 : 	setName("Zombie affamé");
					setChara(Characteristics(5, 3,  2, 3, -3,  1));
					setType(Types(false, false, true, false, true));
		break;

		default : 	setName("Zombie fragile");
					setChara(Characteristics(1, 1, -2, 1, -4, -1));
					setType(Types(false, false, true, false, true));
		break;
	}
};