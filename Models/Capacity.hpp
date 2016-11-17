#pragma once

#include <string>
#include "Entity.hpp"
#include "Decorator.hpp"
#include "Burnt.hpp"

using namespace std;

class Capacity {
private:
	string name_;
	int range_;
	int area_;
	int apCost_;
	int cpCost_;

public:
	Capacity(string n = "spell", int r = 1, int a = 0, int aC = 2, int cC = 0);

	virtual string getName() const;
	virtual void setName(string name);

	virtual int getRange() const;
	virtual void setRange(int range);

	virtual int getArea() const;
	virtual void setArea(int area);

	virtual int getAPCost() const;
	virtual void setAPCost(int cost);

	virtual int getCPCost() const;
	virtual void setCPCost(int cost);

	virtual void onHit(Entity *launcher, Entity *receiver) = 0;
};