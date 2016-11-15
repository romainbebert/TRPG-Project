#pragma once

#include "Entity.hpp"

// Déclaration

class Decorator : public Entity {
private:
	Entity *base_;

public:
	// Constructeur
	Decorator(Entity *up);

	virtual string getName() const;
	virtual void setName(string name);
	virtual Characteristics getChara() const;
	virtual void setChara(Characteristics chara);
	virtual Types getType() const;
	virtual void setType(Types type);

	virtual int getLvl() const;
    virtual void setLvl(int lvl);
	virtual int getDiff() const;
    virtual void setDiff(int diff);

	virtual int getStr() const;
    virtual void setStr(int str);
	virtual int getDex() const;
    virtual void setDex(int dex);
	virtual int getCon() const;
    virtual void setCon(int con);
	virtual int getInt() const;
    virtual void setInt(int inte);
	virtual int getWis() const;
    virtual void setWis(int wis);
 // virtual int getCha()const;
 // virtual void setCha(int cha);

	virtual int getHPM() const;
    virtual void setHPM(int hpm);
	virtual int getHP() const;
	virtual void setHP(int hp);
	virtual int getCPM() const;
	virtual void setCPM(int cpm);
	virtual int getCP() const;
    virtual void setCP(int cp);

	virtual int getMP() const;
    virtual void setMP(int mp);
	virtual int getAP() const;
    virtual void setAP(int ap);

	virtual int getPre() const;
    virtual void setPre(int pre);
	virtual int getDod() const;
    virtual void setDod(int dod);
	virtual int getPD() const;
    virtual void setPD(int pd);
	virtual int getMD() const;
    virtual void setMD(int md);
	
	virtual int getRes() const;
    virtual void setRes(int res);

    virtual void updateDiff();
    virtual void updateHPM();
    virtual void updateCPM();
    virtual void updateMP();
    virtual void updateAP();
    virtual void updatePre();
    virtual void updateDod();
    virtual void updatePD();
    virtual void updateMD();
    virtual void updateRes();

    virtual void updateStr();
    virtual void updateDex();
    virtual void updateCon();
    virtual void updateInt();
    virtual void updateWis();
 // virtual void updateCha();

    virtual void updateAll();

    virtual bool getBeast() const;
	virtual void setBeast(bool beast);
	virtual bool getElemental() const;
	virtual void setElemental(bool elemental);
	virtual bool getHuman() const;
	virtual void setHuman(bool human);
	virtual bool getMythic() const;
	virtual void setMythic(bool mythic);
	virtual bool getUndead() const;
	virtual void setUndead(bool undead);

	virtual void applyDecorator();
	virtual string getAlt();

	~Decorator();
};