#include "Header.h"
#include <iostream>
#include <string>
using namespace std;


Parcelle::Parcelle(string id,string dateSemis,string dateRecoltePrevue,string surface) {
	this->id = id;
	this->dateSemis = dateSemis;
	this->dateRecoltePrevue = dateRecoltePrevue;
	this->surface = surface;
}

Parcelle::~Parcelle() {
	this->id = "";
	this->dateSemis = "";
	this->dateRecoltePrevue = "";
	this->surface = "";
}

string Parcelle::ajouterUnTraitement()
	{
	return ;


	}

EspeceCultivee* Parcelle::getLEspeceCultivee() {
	return this->LEspeceCultivee;
}