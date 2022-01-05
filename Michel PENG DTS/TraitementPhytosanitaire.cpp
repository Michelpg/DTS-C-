#include "Header.h"
#include <iostream>
#include <string>
using namespace std;


TraitementPhytosanitaire::TraitementPhytosanitaire(string id) {
	this->id = id;
}

TraitementPhytosanitaire::~TraitementPhytosanitaire() {
	this->id = "";
	
}
double TraitementPhytosanitaire::quantiteAppliquee()
	{
	return ;

	}


ProduitPhytoSanitaire* TraitementPhytosanitaire::getLeProduitPhytoSanitaire() {
	return this->LeProduitPhytoSanitaire;
}