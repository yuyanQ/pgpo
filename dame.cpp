/*
 * dame.cpp
 *
 *  Created on: 15 mai 2023
 *      Author: isha
 */

#include "dame.h"
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;
static map<map<string,string>,vector<pair<int,int> > > total;
dame::dame() {
	string joueur1;
	string joueur2;
	int position1;
	int position2;
	map<string,string> joueur_couleur;
	vector<pair<int,int> > position;

}
dame::dame(string joueur1_, string joueur2_, int position1_, int position2_){
	joueur1=joueur1_;
	joueur2 = joueur2_;
	position1 =  position1_;
	position2 = position2_;

}
dame::~dame() {
	// TODO Auto-generated destructor stub
}

