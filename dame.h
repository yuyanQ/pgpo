/*
 * dame.h
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

#ifndef DAME_H_
#define DAME_H_

class dame {
public:
	dame();
	string joueur1;
	string joueur2;
	int position1;
	int position2;
	map<string,string> joueur_couleur;
	vector<pair<int,int> > position;
	dame(string joueur1, string joueur2, int position1, int position2);
    ~dame();
	void deplacer();
};

#endif /* DAME_H_ */
