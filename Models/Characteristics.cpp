#include "Characteristics.hpp"

// Implémentation

Characteristics::Characteristics(int l, int s, int d, int c, int i, int w) : lvl_(l), str_(s), dex_(d), con_(c), int_(i), wis_(w) { updateAll(); }

//////////////////////////////////////////////////

int Characteristics::getLvl() const {
	return lvl_;
}

void Characteristics::setLvl(int lvl) {
	lvl_ = lvl;
}

int Characteristics::getDiff() const {
	return diff_;
}

void Characteristics::setDiff(int diff){
	diff_ = diff;
}

//////////////////////////////////////////////////

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

//////////////////////////////////////////////////

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

//////////////////////////////////////////////////

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

//////////////////////////////////////////////////

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

//////////////////////////////////////////////////

int Characteristics::getRes() const {
	return res_;
}

void Characteristics::setRes(int r) {
	res_ = r;
}

//////////////////////////////////////////////////

void Characteristics::updateDiff() {
	int a [5] = {str_, dex_, con_, int_, wis_};
	int b;
	int c = 0;
	for (int i = 0; i < 5; ++i) {
		switch (a[i]) {
			case -4 : 	b = -10;	break;
			case -3 : 	b = -6;		break;
			case -2 : 	b = -3;		break;
			case -1 : 	b = -1;		break;
			case 0 : 	b = 0;		break;
			case 1 : 	b = 1;		break;
			case 2 : 	b = 2;		break;
			case 3 : 	b = 3;		break;
			case 4 : 	b = 4;		break;
			case 5 : 	b = 5;		break;
			case 6 : 	b = 7;		break;
			case 7 : 	b = 9;		break;
			case 8 : 	b = 11;		break;
			case 9 : 	b = 13;		break;
			case 10 : 	b = 15;		break;
			case 11 : 	b = 18;		break;
			case 12 : 	b = 21;		break;				
			case 13 : 	b = 24;		break;
			case 14 : 	b = 27;		break;
			case 15 : 	b = 30;		break;
			case 16 : 	b = 34;		break;
			case 17 : 	b = 38;		break;
			case 18 : 	b = 42;		break;
			case 19 : 	b = 46;		break;
			case 20 : 	b = 51;		break;
			default : 	b = 0;		break;
		}

		c += b;
	}

	diff_ = c;
}

void Characteristics::updateHPM() {
	hpMax_ = lvl_ * (BHP + (con_ * 2));
	hp_ = hpMax_;
}

void Characteristics::updateCPM() {
	cpMax_ = lvl_ * (BCP + (wis_ * 2));
	cp_ = cpMax_;
}

void Characteristics::updateMP() {
	mp_ = BMP + dex_ / 2;
}

void Characteristics::updateAP() {
	ap_ = BAP + str_ / 2;
}

void Characteristics::updatePre() {
	pre_ = BPR + int_ * 1.25;
}

void Characteristics::updateDod() {
	dod_ = BDO + dex_ * 2;
}

void Characteristics::updatePD() {
	phyDef_ = BPD + con_;
}

void Characteristics::updateMD() {
	magDef_ = BMD + wis_;
}

void Characteristics::updateRes() {
	res_ = BR + con_ / 5;
}

//////////////////////////////////////////////////

void Characteristics::updateStr() {
	updateAP();
}

void Characteristics::updateDex() {
	updateMP();
	updateDod();
}

void Characteristics::updateCon() {
	updateHPM();
	updatePD();
	updateRes();
}

void Characteristics::updateInt() {
	updatePre();
}

void Characteristics::updateWis() {
	updateCPM();
	updateMD();
}
/*
void Characteristics::updateCha(){
	kek
}
*/
void Characteristics::updateAll() {
	updateStr();
	updateDex();
	updateCon();
	updateInt();
	updateWis();
 // updateCha();
	updateDiff();
}
