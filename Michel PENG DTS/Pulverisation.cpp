#include "Header.h"
#include <iostream>
#include <string>
using namespace std;


Pulverisation::Pulverisation(string id, string dosage, string datePulverisation) {
	this->id = id;
	this->dosage = dosage;
	this->datePulverisation = datePulverisation;
}

Pulverisation::~Pulverisation() {
	this->id = "";
	this->dosage = "";
	this->datePulverisation = "";
}
