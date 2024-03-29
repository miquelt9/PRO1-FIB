#include <typeinfo>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

struct Estudiant{
	int dni;
	string nom;
	double nota;
	bool repetidor;
};

void informacio(const vector<Estudiant>& es, double& min, double& max, double& mitj){
	double count = 0;
	min = 10;
	max = 0;
	int aux = es.size();

	mitj = 0;
	for(int i = 0; i < aux; ++i){
		if(not es[i].repetidor and es[i].nota != -1){
			if(es[i].nota > max) max = es[i].nota;
			if(es[i].nota < min) min = es[i].nota;
			mitj += es[i].nota;
			++count;
		}
	}
	
	if(count != 0) mitj = mitj/count;
	else{
		min = max = mitj = -1;
	}
}
