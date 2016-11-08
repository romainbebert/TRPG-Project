#include "Entity.hpp"

// Implémentation

Entity::Entity(string n, Characteristics c, Types t)  : name_(n), chara_(c), type_(t) {}

string Entity::getName() const {
	return name_;
}

void Entity::setName(string name) {
	name_ = name;
}


Characteristics Entity::getChara() const {
	return chara_;
}

void Entity::setChara(Characteristics chara) {
	chara_ = chara;
}


Types Entity::getType() const {
	return type_;
}

void Entity::setType(Types type) {
	type_ = type;
}


int Entity::getLvl() const {
	return chara_.getLvl();
}

void Entity::setLvl(int lvl) {
	chara_.setLvl(lvl);
}

int Entity::getStr() const {
	return chara_.getStr();
}

void Entity::setStr(int str) {
	chara_.setStr(str);
}

int Entity::getDex() const {
	return chara_.getDex();
}

void Entity::setDex(int dex) {
	chara_.setDex(dex);
}

int Entity::getCon() const {
	return chara_.getCon();
}

void Entity::setCon(int con) {
	chara_.setCon(con);
}

int Entity::getInt() const {
	return chara_.getInt();
}

void Entity::setInt(int inte) {
	chara_.setInt(inte);
}

int Entity::getWis() const {
	return chara_.getWis();
}

void Entity::setWis(int wis) {
	chara_.setWis(wis);
}
/*
int Entity::getCha() const {
	return chara_.getCha();
}
void Entity::setCha(int cha){
	chara_.setCha(cha);
}
*/

int Entity::getHPM() const {
	return chara_.getHPM();
}

void Entity::setHPM(int hpm) {
	chara_.setHPM(hpm);
}

int Entity::getCPM() const {
	return chara_.getCPM();
}

void Entity::setCPM(int cpm) {
	chara_.setCPM(cpm);
}

int Entity::getHP() const {
	return chara_.getHP();
}

void Entity::setHP(int hp) {
	chara_.setHP(hp);
}

int Entity::getCP() const {
	return chara_.getCP();
}

void Entity::setCP(int cp) {
	chara_.setCP(cp);
}


int Entity::getMP() const {
	return chara_.getMP();
}

void Entity::setMP(int mp) {
	chara_.setMP(mp);
}

int Entity::getAP() const {
	return chara_.getAP();
}

void Entity::setAP(int ap) {
	chara_.setAP(ap);
}


int Entity::getPre() const {
	return chara_.getPre();
}

void Entity::setPre(int pre) {
	chara_.setPre(pre);
}

int Entity::getDod() const {
	return chara_.getDod();
}

void Entity::setDod(int dod) {
	chara_.setDod(dod);
}

int Entity::getPD() const {
	return chara_.getPD();
}

void Entity::setPD(int pd){
	chara_.setPD(pd);
}

int Entity::getMD() const {
	return chara_.getMD();
}

void Entity::setMD(int md) {
	chara_.setMD(md);
}


int  Entity::getR() const {
	return chara_.getR();
}

void Entity::setR(int r) {
	chara_.setR(r);
}


void Entity::updateStr() {
	chara_.updateStr();
}

void Entity::updateDex() {
	chara_.updateDex();
}

void Entity::updateCon() {
	chara_.updateCon();
}

void Entity::updateInt() {
	chara_.updateInt();
}

void Entity::updateWis() {
	chara_.updateWis();
}
/*
void Entity::updateCha() {
	chara_.updateCha();
}
*/
void Entity::updateAll() {
	chara_.updateAll();
}


bool Entity::getBeast() const {
	return type_.getBeast();
}

void Entity::setBeast(bool beast) {
	type_.setBeast(beast);
}

bool Entity::getElemental() const {
	return type_.getElemental();
}

void Entity::setElemental(bool elemental) {
	type_.setElemental(elemental);
}

bool Entity::getHuman() const {
	return type_.getHuman();
}

void Entity::setHuman(bool human) {
	type_.setHuman(human);
}

bool Entity::getMythic() const {
	return type_.getMythic();
}

void Entity::setMythic(bool mythic) {
	type_.setMythic(mythic);
}

bool Entity::getUndead() const {
	return type_.getUndead();
}

void Entity::setUndead(bool undead) {
	type_.setUndead(undead);
}