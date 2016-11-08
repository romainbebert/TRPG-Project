// Implémentation

#include "Loup.hpp"

Loup::Loup(int lvl) {
	switch (lvl) {
		case 1 : 	setName("Louveteau");
					setChara(Characteristics(1, 1, 2, -1, 1, -1));
					setType(Types(true, false, false, false, false));
		break;

		case 2 : 	setName("Loup");
					setChara(Characteristics(2, 2, 3,  1, 1, -1));
					setType(Types(true, false, false, false, false));
		break;

		case 3 : 	setName("Loup-Tari");
					setChara(Characteristics(3, 3, 4,  2, 1,  0));
					setType(Types(true, false, false, false, false));
		break;

		case 4 : 	setName("Re-Loup-table");
					setChara(Characteristics(4, 4, 5,  2, 1,  0));
					setType(Types(true, false, false, false, false));
		break;

		case 5 : 	setName("Loup pour toujours");
					setChara(Characteristics(5, 5, 6,  3, 2,  1));
					setType(Types(true, false, false, false, false));
		break;

		default : 	setName("Loup peureux");
					setChara(Characteristics(1, 1, 2,  -1, 0, -1));
					setType(Types(true, false, false, false, false));
		break;
	}
};