#include "Header.h"
#include <iostream>
#include <string>
using namespace std;


TraitementEnChamp::TraitementEnChamp(string id) : TraitementPhytosanitaire(id) {
	
}

TraitementEnChamp::~TraitementEnChamp() {
	TraitementPhytosanitaire::~TraitementPhytosanitaire();


}
double TraitementEnChamp::quantiteAppliquee()
{
	return 1;

}

Pulverisation* TraitementEnChamp::getLePulverisation() {
	return this->LePulverisation;
}
