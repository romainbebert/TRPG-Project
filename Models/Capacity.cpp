#include "Capacity.hpp"

Capacity::Capacity(string n, int r, int a, int aC, int cC) : name_(n), range_(r), area_(a), apCost_(aC), cpCost_(cC) {}

string Capacity::getName() const {
	return name_;
}

void Capacity::setName(string name) {
	name_ = name;
}

int Capacity::getRange() const {
	return range_;
}

void Capacity::setRange(int range) {
	range_ = range;
}

int Capacity::getArea() const {
	return area_;
}

void Capacity::setArea(int area) {
	area_ = area;
}

int Capacity::getAPCost() const {
	return apCost_;
}

void Capacity::setAPCost(int cost) {
	apCost_ = cost;
}

int Capacity::getCPCost() const {
	return cpCost_;
}

void Capacity::setCPCost(int cost) {
	cpCost_ = cost;
}
