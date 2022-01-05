#include "Header.h"
#include <iostream>
#include <string>
using namespace std;


TraitementSemence::TraitementSemence(string id, string dosageTraitementSemance) : TraitementPhytosanitaire(id) {
	this->dosageTraitementSemance = dosageTraitementSemance;
}

TraitementSemence::~TraitementSemence() {
	TraitementPhytosanitaire::~TraitementPhytosanitaire();

	this->dosageTraitementSemance = "";

}
double TraitementSemence::quantiteAppliquee()
{
	return ;
}