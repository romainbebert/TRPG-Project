// Implémentation

#include "Decorator.hpp"

Decorator::Decorator(Entity *up) : base_(up) {}

//////////////////////////////////////////////////

string Decorator::getName() const {
	return base_->getName();
}

void Decorator::setName(string name){
	base_->setName(name);
}

Characteristics Decorator::getChara() const {
	return base_->getChara();
}

void Decorator::setChara(Characteristics chara) {
	base_->setChara(chara);
}

Types Decorator::getType() const {
	return base_->getType();
}

void Decorator::setType(Types type) {
	base_->setType(type);
}

//////////////////////////////////////////////////

int Decorator::getLvl() const {
	return base_->getLvl();
}

void Decorator::setLvl(int lvl) {
	base_->setLvl(lvl);
}

int Decorator::getDiff() const {
	return base_->getDiff();
}

void Decorator::setDiff(int diff) {
	base_->setDiff(diff);
}

//////////////////////////////////////////////////

int Decorator::getStr() const {
	return base_->getStr();
}

void Decorator::setStr(int str) {
	base_->setStr(str);
}

int Decorator::getDex() const {
	return base_->getDex();
}

void Decorator::setDex(int dex) {
	base_->setDex(dex);
}

int Decorator::getCon() const {
	return base_->getCon();
}

void Decorator::setCon(int con) {
	base_->setCon(con);
}

int Decorator::getInt() const {
	return base_->getInt();
}

void Decorator::setInt(int inte) {
	base_->setInt(inte);
}

int Decorator::getWis() const {
	return base_->getWis();
}

void Decorator::setWis(int wis) {
	base_->setWis(wis);
}

//////////////////////////////////////////////////

int Decorator::getHPM() const {
	return base_->getHPM();
}

void Decorator::setHPM(int hpm) {
	base_->setHPM(hpm);
}

int Decorator::getHP() const {
	return base_->getHP();
}

void Decorator::setHP(int hp) {
	base_->setHP(hp);
}

int Decorator::getCPM() const {
	return base_->getCPM();
}

void Decorator::setCPM(int cpm) {
	base_->setCPM(cpm);
}

int Decorator::getCP() const {
	return base_->getCP();
}

void Decorator::setCP(int cp) {
	base_->setCP(cp);
}

//////////////////////////////////////////////////

int Decorator::getMP() const {
	return base_->getMP();
}

void Decorator::setMP(int mp) {
	base_->setMP(mp);
}

int Decorator::getAP() const {
	return base_->getAP();
}

void Decorator::setAP(int ap) {
	base_->setAP(ap);
}

//////////////////////////////////////////////////

int Decorator::getPre() const {
	return base_->getPre();
}

void Decorator::setPre(int pre) {
	base_->setPre(pre);
}

int Decorator::getDod() const {
	return base_->getDod();
}

void Decorator::setDod(int dod) {
	base_->setDod(dod);
}

int Decorator::getPD() const {
	return base_->getPD();
}

void Decorator::setPD(int pd) {
	base_->setPD(pd);
}

int Decorator::getMD() const {
	return base_->getMD();
}

void Decorator::setMD(int md) {
	base_->setMD(md);
}

//////////////////////////////////////////////////

int Decorator::getRes() const {
	return base_->getRes();
}

void Decorator::setRes(int res) {
	base_->setRes(res);
}

//////////////////////////////////////////////////

void Decorator::updateDiff() {
	base_->updateDiff();
}

void Decorator::updateHPM() {
	base_->updateHPM();
}

void Decorator::updateCPM() {
	base_->updateCPM();
}

void Decorator::updateMP() {
	base_->updateMP();
}

void Decorator::updateAP() {
	base_->updateAP();
}

void Decorator::updatePre() {
	base_->updatePre();
}

void Decorator::updateDod() {
	base_->updateDod();
}

void Decorator::updatePD() {
	base_->updatePD();
}

void Decorator::updateMD() {
	base_->updateMD();
}

void Decorator::updateRes() {
	base_->updateRes();
}

//////////////////////////////////////////////////

void Decorator::updateStr() {
	base_->updateStr();
}

void Decorator::updateDex() {
	base_->updateDex();
}

void Decorator::updateCon() {
	base_->updateCon();
}

void Decorator::updateInt() {
	base_->updateInt();
}

void Decorator::updateWis() {
	base_->updateWis();
}
/*
void Decorator::updateCha() {
	base_->updateCha();
}
*/
void Decorator::updateAll() {
	base_->updateAll();
}

//////////////////////////////////////////////////

bool Decorator::getBeast() const {
	return base_->getBeast();
}

void Decorator::setBeast(bool beast) {
	base_->setBeast(beast);
}

bool Decorator::getElemental() const {
	return base_->getElemental();
}

void Decorator::setElemental(bool elemental) {
	base_->setElemental(elemental);
}

bool Decorator::getHuman() const {
	return base_->getHuman();
}

void Decorator::setHuman(bool human) {
	base_->setHuman(human);
}

bool Decorator::getMythic() const {
	return base_->getMythic();
}

void Decorator::setMythic(bool mythic) {
	base_->setMythic(mythic);
}

bool Decorator::getUndead() const {
	return base_->getUndead();
}

void Decorator::setUndead(bool undead) {
	base_->setUndead(undead);
}

//////////////////////////////////////////////////

void Decorator::applyDecorator() {
	base_->applyDecorator();
}

string Decorator::getAlt() {
	return base_->getAlt();
}

//////////////////////////////////////////////////
/*
Decorator::~Decorator() {
	delete base_;
}*/