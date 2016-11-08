#include "Characteristics.hpp"

// Implémentation

Characteristics::Characteristics(int l, int s, int d, int c, int i, int w) : lvl_(l), str_(s), dex_(d), con_(c), int_(i), wis_(w) { updateAll(); }

int Characteristics::getLvl() const {
	return lvl_;
}

void Characteristics::setLvl(int lvl) {
	lvl_ = lvl;
}


int Characteristics::getStr() const {
	return str_;
}

void Characteristics::setStr(int str) {
	str_ = str;
}

int Characteristics::getDex() const {
	return dex_;
}

void Characteristics::setDex(int dex) {
	dex_ = dex;
}

int Characteristics::getCon() const {
	return con_;
}

void Characteristics::setCon(int con) {
	con_ = con;
}

int Characteristics::getInt() const {
	return int_;
}

void Characteristics::setInt(int inte) {
	int_ = inte;
}

int Characteristics::getWis() const {
	return wis_;
}

void Characteristics::setWis(int wis) {
	wis_ = wis;
}
/*
int Characteristics::getCha() const {
	return cha_;
}

void Characteristics::setCha(int cha){
	cha_ = cha;
}
*/

int Characteristics::getHPM() const {
	return hpMax_;
}

void Characteristics::setHPM(int hpm) {
	hpMax_ = hpm;
}

int Characteristics::getCPM() const {
	return cpMax_;
}

void Characteristics::setCPM(int cpm) {
	cpMax_ = cpm;
}

int Characteristics::getHP() const {
	return hp_;
}

void Characteristics::setHP(int hp) {
	hp_ = hp;
}

int Characteristics::getCP() const {
	return cp_;
}

void Characteristics::setCP(int cp) {
	cp_ = cp;
}


int Characteristics::getMP() const {
	return mp_;
}

void Characteristics::setMP(int mp) {
	mp_ = mp;
}

int Characteristics::getAP() const {
	return ap_;
}

void Characteristics::setAP(int ap) {
	ap_ = ap;
}


int Characteristics::getPre() const {
	return pre_;
}

void Characteristics::setPre(int pre) {
	pre_ = pre;
}

int Characteristics::getDod() const {
	return dod_;
}

void Characteristics::setDod(int dod) {
	dod_ = dod;
}

int Characteristics::getPD() const {
	return phyDef_;
}

void Characteristics::setPD(int pd){
	phyDef_ = pd;
}

int Characteristics::getMD() const {
	return magDef_;
}

void Characteristics::setMD(int md) {
	magDef_ = md;
}


int Characteristics::getR() const {
	return res_;
}

void Characteristics::setR(int r) {
	res_ = r;
}


void Characteristics::updateStr() {
	ap_ = BAP + str_ / 2;
}

void Characteristics::updateDex() {
	mp_ = BMP + dex_;
	dod_ = BDO + dex_ * 2;
}

void Characteristics::updateCon() {
	hpMax_ = lvl_ * (BHP + (con_ * 2));
	hp_ = hpMax_;
	phyDef_ =  BPD + con_;
	res_ = BR + (con_ / 5);
}

void Characteristics::updateInt() {
	pre_ = BPR + int_ * 1.25
	;
}

void Characteristics::updateWis() {
	cpMax_ = lvl_ * (BCP + (wis_ * 2));
	cp_ = cpMax_;
	magDef_ =  BMD + wis_;
}
/*
void Characteristics::updateCha(){
	  double kek
}
*/
void Characteristics::updateAll() {
	updateStr();
	updateDex();
	updateCon();
	updateInt();
	updateWis();
 // updateCha();
}