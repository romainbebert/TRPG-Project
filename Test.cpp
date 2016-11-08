#include <iostream>
#include <memory>
#include "FactoryNormal.hpp"

using namespace std;

void affChar(Characteristics stat){
	cout << endl << "Niveau = " << stat.getLvl() << "   ";
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
	
	cout << "Resistance = " << stat.getR() << endl;
}

void affType(Types type){
	cout << endl << "Bête ? " << type.getBeast() << "   ";
	cout << "Elemental ? " << type.getElemental() << "   ";
	cout << "Humain ? " << type.getHuman() << "   ";
	cout << "Mythique ? " << type.getMythic() << "   ";
	cout << "Mort-Vivant ? " << type.getUndead() << "   " << endl;
}

void affStats(Entity ent){
	cout  << endl << "Statistiques de " << ent.getName() << endl;
	affChar(ent.getChara());
	affType(ent.getType());
}

int main(){
	unique_ptr<Factory> normal(new FactoryNormal);
	for (int i = 1; i <= 5; ++i) {
		Entity a = normal->createEntity(1,i);
		affStats(a);
	}

	for (int j = 1; j <= 5; ++j) {
		Entity b = normal->createEntity(2,j);
		affStats(b);
	}

	Entity c = normal->createEntity();
	affStats(c);

	Entity d = normal->createEntity(18,28);
	affStats(d);
}