#include <iostream>
#include <vector>
using namespace std;

//donat que l'abecedari és limitat i no tant llarg, per augmentar l'eficiència del programa crearem un vector de puntuació

int main(){
	vector<int> puntuacio = {1, 6, 4, 3, 1, 6, 6, 6, 3, 6, 7, 4, 5, 3, 2, 5, 6, 3, 2, 4, 4, 6, 7, 6, 6, 6};
	int total = 0;
	char c;
	while(cin >> c){
		total += puntuacio[c - 'a'];
	}
}