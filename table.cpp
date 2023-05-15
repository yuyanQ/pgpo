//============================================================================
// Name        : POG2023.cpp
// Author      : Yuyan
// Version     :
// Copyright   : Your copyright notice
// Description : C++, Ansi-style
//============================================================================
#include <map>
#include <vector>
#include <string>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include "table.h"
using namespace std;

static map<map<string,string>,vector<string> > total;

table::table(){
	 matricule ="";
	 nom ="";
	 grade ="";//par défaut
	 telephone ="";

}
table::table(string matricule_,string nom_,string grade_,string telephone_){
	 matricule = matricule_;
	 nom = nom_;
	 grade = grade_;
	 telephone = telephone_;
	 infos.push_back(grade);
	 infos.push_back(telephone);
	 identifiant.insert(pair<string,string>(matricule,nom));
	 total.insert(pair<map<string,string>,vector<string> >(identifiant,infos));
}
void afficher(){
	map<map<string,string>,vector<string> >::iterator iter;
	for(iter=total.begin();iter!=total.end();++iter){
		map<string,string>m;
		m = iter->first; //matricule + nom
		map<string,string>::iterator it=m.begin();
		cout<<it->first<<"\t"<<it->second<<"\t";
		vector<string>v = iter->second; //grade + telephone
		cout<<v[0]<<"\t"<<v[1]<<endl;
		}
}

int main() {
	// jeu de test pour ajouter un élément
	table p1("0079","Henrion ","Lieutenant","2111");
	// jeu de test pour ajouter l'ensemble des éléments de la table
	table  p2("0101","Pierre  ","Capitaine","2211");
	table  p3("0126","Martin  ","Lieutenant","6312");
	table  p4("0846","Jeancard ","Lieutenant","2112");
	table  p5("2312","Baron   ","Lieutenant","3756");
	table  p6("4684","Denis   ","Capitaine","3855");
	table  p7("6587","Dupont  ","Colonel ","4422");
	afficher();
	cout<<endl;
	return 0;
}
