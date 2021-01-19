#include <iostream>
#include <vector>
using namespace std;

struct Assignatura{
	string nom;
	double nota;
};

struct Alumne{
	string nom;
	int dni;
	vector<Assignatura> ass;
};

double nota(const vector<Alumne>& alums, int dni, string nom){
	for(int i = 0; i < (int)alums.size(); ++i){
		if(alums[i].dni == dni){
			for(int j = 0; j < (int)alums[i].ass.size(); ++j){
				if(alums[i].ass[j].nom == nom){
					return alums[i].ass[j].nota;
				}
			}
		}
	}
	return -1;
}

double mitjana(const vector<Assignatura>& ass){
	double total = 0;
	double count = 0;
	bool participa_a_clase = false;
	for(int i = 0; i < (int)ass.size(); ++i){
		if(ass[i].nota != -1){
			++count;
			total += ass[i].nota;
			participa_a_clase = true;
		}
	}
	total /= count;
	if(participa_a_clase) return total;
	else return -1;
}

void compta(const vector<Alumne>& alums, int dni, string nom, int& com){
	double a_superar = nota(alums, dni, nom);
	com = 0;
	for(int i = 0; i < (int)alums.size(); ++i){
		if(mitjana(alums[i].ass) > a_superar) ++com;
	}
}

int main(){
	int n1;
	cin >> n1;
	vector<Alumne> alums(n1);
	for(int i = 0; i < n1; ++i){
		//cerr << "reading " << i << endl;
		cin >> alums[i].nom >> alums[i].dni;
		int n2;
		cin >> n2;
		Assignatura assig;
		for(int j = 0; j < n2; ++j){
			cin >> assig.nom >> assig.nota;
			alums[i].ass.push_back(assig);
		}
		//cerr << "ended " << i << endl;
	}
	int dni;
	string nom;
	int com;
	while(cin >> dni){
		cin >> nom;
		compta(alums, dni, nom, com);
		cout << com << endl;
	}
}