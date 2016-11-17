#include <iostream>
#include <memory>

#include "NormalFactory.hpp"
#include "Burnt.hpp"
#include "Poisoned.hpp"
#include "Cecity.hpp"
#include "Capacities.hpp"
using namespace std;

void affChar(Characteristics stat) {
	cout << endl << "Niveau = " << stat.getLvl() << "   ";
	cout << "Difficulté = " << stat.getDiff() << endl;
	cout << "Force = " << stat.getStr() << "   ";
	cout << "Dextérité = " << stat.getDex() << "   ";
	cout << "Constitution = " << stat.getCon() << "   ";
	cout << "Intelligence   = " << stat.getInt() << "   ";
	cout << "Sagesse   = " << stat.getWis() << endl;
	
	cout << "PV max = " << stat.getHPM() << "   ";
	cout << "PV = " << stat.getHP() << "   ";
	cout << "PC max = " << stat.getCPM() << "   ";
	cout << "PC = " << stat.getCP() << endl;
	
	cout << "PM = " << stat.getMP() << "   ";
	cout << "PA = " << stat.getAP() << endl;

	cout << "Précision = " << stat.getPre() << "   ";
	cout << "Esquive = " << stat.getDod() << "   ";
	cout << "Défense Physique = " << stat.getPD() << "   ";
	cout << "Défense Magique = " << stat.getMD() << endl;
	
	cout << "Resistance = " << stat.getRes() << endl;
}

void affType(Types type) {
	cout << endl << "Bête ? " << type.getBeast() << "   ";
	cout << "Elemental ? " << type.getElemental() << "   ";
	cout << "Humain ? " << type.getHuman() << "   ";
	cout << "Mythique ? " << type.getMythic() << "   ";
	cout << "Mort-Vivant ? " << type.getUndead() << "   " << endl;
}

void affStats(Entity *ent) {
	cout  << endl << "Statistiques de " << ent->getName() << endl;

	cout << endl << "Niveau = " << ent->getLvl() << "   ";
	cout << "Difficulté = " << ent->getDiff() << endl;
	cout << "Force = " << ent->getStr() << "   ";
	cout << "Dextérité = " << ent->getDex() << "   ";
	cout << "Constitution = " << ent->getCon() << "   ";
	cout << "Intelligence   = " << ent->getInt() << "   ";
	cout << "Sagesse   = " << ent->getWis() << endl;
	
	cout << "PV max = " << ent->getHPM() << "   ";
	cout << "PV = " << ent->getHP() << "   ";
	cout << "PC max = " << ent->getCPM() << "   ";
	cout << "PC = " << ent->getCP() << endl;
	
	cout << "PM = " << ent->getMP() << "   ";
	cout << "PA = " << ent->getAP() << endl;

	cout << "Précision = " << ent->getPre() << "   ";
	cout << "Esquive = " << ent->getDod() << "   ";
	cout << "Défense Physique = " << ent->getPD() << "   ";
	cout << "Défense Magique = " << ent->getMD() << endl;
	
	cout << "Resistance = " << ent->getRes() << endl;

	cout << endl << "Bête ? " << ent->getBeast() << "   ";
	cout << "Elémental ? " << ent->getElemental() << "   ";
	cout << "Humain ? " << ent->getHuman() << "   ";
	cout << "Mythique ? " << ent->getMythic() << "   ";
	cout << "Mort-Vivant ? " << ent->getUndead() << "   " << endl;

	cout << "Etat : ";
	if (ent->getAlt() == "") {
		cout << "sain";
	} else {
		cout << ent->getAlt();
	}
	cout << "   " << endl;
}

int main(){
	unique_ptr<Factory> normal(new NormalFactory);

	Entity *a = normal->createEntity(2,5);

	Entity *c = normal->createEntity(1,1);
	affStats(c);
	
	Capacity *b = new Fireball();

	b->onHit(a,c);

	affStats(c);
}
