#include "Header.h"
#include <iostream>
#include <string>
using namespace std;


ProduitPhytoSanitaire::ProduitPhytoSanitaire(string id, string libelle) {
	this->id = id;
	this->libelle = libelle;
}

ProduitPhytoSanitaire::~ProduitPhytoSanitaire() {
	this->id = "";
	this->libelle = "";
}
