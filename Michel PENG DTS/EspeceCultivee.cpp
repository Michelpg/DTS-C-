#include "Header.h"
#include <iostream>
#include <string>
using namespace std;


EspeceCultivee::EspeceCultivee(string id, string libelle, string type) {
	this->id = id;
	this->libelle = libelle;
	this->type = type;
}

EspeceCultivee::~EspeceCultivee() {
	this->id = "";
	this->libelle = "";
	this->type = "";
}
