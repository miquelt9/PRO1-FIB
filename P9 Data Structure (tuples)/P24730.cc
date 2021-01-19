#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Professor{
	string nom;
	int pastanagues, caramels;
};

typedef vector<Professor> Professorat;

bool professor_pastanaga(const Professor& a, const Professor& b){
	if(a.caramels != b.caramels){
		return a.caramels > b.caramels;
	}
	if(a.pastanagues != b.pastanagues){
		return a.pastanagues > b.pastanagues;
	}
	if(a.nom.size() != b.nom.size()){
		return a.nom.size() < b.nom.size();
	}
	return a.nom < b.nom;	
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i){
		int m;
		cin >> m;
		Professorat llista(m);
		for(int j = 0; j < m; ++j){
			cin >> llista[j].nom >> llista[j].caramels >> llista[j].pastanagues;
		}
		sort(llista.begin(), llista.end(), professor_pastanaga);
		for(int j = 0; j < m; ++j){
			cout << llista[j].nom << endl;
		}
		cout << endl;
	}
}