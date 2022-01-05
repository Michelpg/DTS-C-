#pragma once
#include <iostream>
#include <string>
using namespace std;


class Parcelle;
class Exploitation
{
public:
	Exploitation(string id, string nomExploitant, string melExplaitant);
	~Exploitation();
	Parcelle* LeParcelle;

private:
	string id;
	string nomExploitant;
	string melExplaitant;
	Parcelle* getLeParcelle();


};


class EspeceCultivee;
class Parcelle
{
public:
	Parcelle(string id, string dateSemis, string dateRecoltePrevue, string surface);
	~Parcelle();
	string ajouterUnTraitement();
	EspeceCultivee* LEspeceCultivee;

private:
	string id;
	string dateSemis;
	string dateRecoltePrevue;
	string surface;
	
	EspeceCultivee* getLEspeceCultivee();

};


class EspeceCultivee
{
public:
	EspeceCultivee(string id, string libelle, string type);
	~EspeceCultivee();

private:
	string id;
	string libelle;
	string type;

};


class ProduitPhytoSanitaire;
class TraitementPhytosanitaire
{
public:
	TraitementPhytosanitaire(string id);
	~TraitementPhytosanitaire();
	double quantiteAppliquee();
	ProduitPhytoSanitaire* LeProduitPhytoSanitaire;

private:
	string id;

	ProduitPhytoSanitaire* getLeProduitPhytoSanitaire();


};



class ProduitPhytoSanitaire 
{

public:
	ProduitPhytoSanitaire(string id, string libelle);
	~ProduitPhytoSanitaire();

private:
	string id;
	string libelle;


};



class TraitementPhytosanitaire;
class TraitementSemence : public TraitementPhytosanitaire
{
public:
	TraitementSemence(string id, string dosageTraitementSemance);
	~TraitementSemence();
	double quantiteAppliquee();

private:
	string dosageTraitementSemance;

};


class TraitementPhytosanitaire;
class Pulverisation;
class TraitementEnChamp : public TraitementPhytosanitaire
{
public:
	TraitementEnChamp(string id);
	~TraitementEnChamp();
	double quantiteAppliquee();

	Pulverisation* LePulverisation;

private:

	Pulverisation* getLePulverisation();


};

class Pulverisation
{
public:
	Pulverisation(string id, string dosage, string datePulverisation);
	~Pulverisation();

private:
	string id;
	string dosage;
	string datePulverisation;


};

