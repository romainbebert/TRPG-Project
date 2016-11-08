#pragma once

// Déclaration

class Characteristics {
private:
	// Niveau
	int lvl_;

	// Statistiques basiques
	int str_;	// Affecte les dégâts des armes au corps à corps et le nombre de points d'action
	int dex_;	// Affecte les dégâts des armes à distances, des armes de finesse, le nombre de points de déplacement et l'esquive
	int con_;	// Affecte les points de vie, les défenses physiques et les résistances
	int int_;	// Affecte les dégâts magiques et la précision
	int wis_;	// Affecte les points de corruption et les défenses magiques
 // int cha_;  	   Affectera les aspects sociaux du jeu

	// Statistiques secondaires
	int hpMax_; // Points de Vie
	int cpMax_; // Points de Corruption
	int hp_;
	int cp_;

	int mp_; 	// Points de Déplacement
	int ap_; 	// Points d'Action

	int pre_;	// Précision
	int dod_;	// Esquive
	int phyDef_;// Défenses Physiques
	int magDef_;// Défenses Magiques

	int res_;	// Résistances aux altérations d'Etat
	
	// Constantes
	
	static const int BHP = 10;
	static const int BCP = 10;
	static const int BMP = 5;
	static const int BAP = 8;
	static const int BPR = 100;
	static const int BDO = 5;
	static const int BPD = 0;
	static const int BMD = 0;
	static const int BR  = 0;

public:
	// Constructeur
	Characteristics(int l = 1, int s = 0, int d = 0, int c = 0, int i = 0, int w = 0);

	// Getters et Setters
	int getLvl() const;
	void setLvl(int lvl);

	int getStr() const;
	void setStr(int str);
	int getDex() const;
	void setDex(int dex);
	int getCon() const;
	void setCon(int con);
	int getInt() const;
	void setInt(int inte);
	int getWis() const;
	void setWis(int wis);
 // int getCha()const;
 // void setCha(int cha);

	int getHPM() const;
	void setHPM(int hpm);
	int getCPM() const;
	void setCPM(int cpm);
	int getHP() const;
	void setHP(int hp);
	int getCP() const;
	void setCP(int cp);

	int getMP() const;
	void setMP(int mp);
	int getAP() const;
	void setAP(int ap);

	int getPre() const;
	void setPre(int pre);
	int getDod() const;
	void setDod(int dod);
	int getPD() const;
	void setPD(int pd);
	int getMD() const;
	void setMD(int md);

	int  getR() const;
	void setR(int r);

	void updateStr();	// Met à jour toutes les valeurs affectées par la Force
	void updateDex();	// Met à jour toutes les valeurs affectées par la Dextérité
	void updateCon();	// Met à jour toutes les valeurs affectées par la Constitution
	void updateInt();	// Met à jour toutes les valeurs affectées par l'Intelligence
	void updateWis();	// Met à jour toutes les valeurs affectées par la Sagesse
 // void updateCha();	   Met à jour toutes les valeurs affectées par le Charisme	

	void updateAll();	// Met à jour toutes les valeurs
};