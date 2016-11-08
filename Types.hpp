#pragma once

// Déclaration

class Types {
private:
	// Type d'Entite
	bool beast_;
	bool elemental_;
	bool human_;
	bool mythic_;
	bool undead_;

public:
	// Constructeur
	Types(bool b = false, bool e = false, bool h = false, bool m = false, bool u = false);

	// Getters et Setters

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