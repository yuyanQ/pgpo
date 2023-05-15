/*
 * table.h
 *
 *  Created on: 15 mai 2023
 *      Author: isha
 */
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

#ifndef TABLE_H_
#define TABLE_H_

class table{
public:
	// les quatre paramètres par défaut
	string matricule;
	string nom;
	string grade;
	string telephone;
	// valeur : graade + telephone
	vector<string>infos;
	// clé :matricule + nom
	map<string,string>identifiant;
	// la constructeur par défaut
	table();
	// la constructeur avec paramètres
	table(string matricule,string nom,string grade,string telephone);
	//la méthode d'afficher le contenu
	void afficher();
};


#endif /* TABLE_H_ */
