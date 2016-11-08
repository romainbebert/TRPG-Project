#pragma once

#include <string>
#include "Characteristics.hpp"
#include "Types.hpp"

using namespace std;

// Déclaration

class Entity {
private:
	string name_;
	Characteristics chara_;
	Types type_;

public:
	// Constructeur
	Entity(string n = "Dummy", Characteristics c = Characteristics(), Types t = Types());

	// Getters et Setters

	string getName() const;
	void setName(string name);

	Characteristics getChara() const;
	void setChara(Characteristics chara);

	Types getType() const;
	void setType(Types type);

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

    void updateStr();
    void updateDex();
    void updateCon();
    void updateInt();
    void updateWis();
 // void updateCha();

    void updateAll();

    bool getBeast() const;
	void setBeast(bool beast);

	bool getElemental() const;
	void setElemental(bool elemental);

	bool getHuman() const;
	void setHuman(bool human);

	bool getMythic() const;
	void setMythic(bool mythic);
	
	bool getUndead() const;
	void setUndead(bool undead);
};