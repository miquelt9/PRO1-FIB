#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

typedef vector<char> Rows;
typedef vector<Rows> Matriu;           //Utilitzerem per la sopa de caràcters

typedef vector<vector<int>> Matrix;   //Utilitzarem per la sopa de punts

int sumar(Matrix& soup, int size, string codi, int fil, int col){
	int suma = 0;
	if(codi == "horitzontal"){
		for(int i = 0; i < size; ++i){
			suma += soup[fil][col + i];
		}
	}
	if(codi == "vertical"){
		for(int i = 0; i < size; ++i){
			suma += soup[fil + i][col];
		}
	}
	/*if(codi == "diagonal"){
		for(int i = 0; i < size; ++i){
			suma += soup[fil + i][col + i];
		}
	}*/
	return suma;
}

int buscar_horitzontal(const Matriu& sopa, Matrix& soup, string& paraula, int size, int fil, int col){
	bool found = false;
	int maxim;
	for(int i = 0; i < fil; ++i){
		for(int j = 0; j < col; ++j){
			int count = 0;

			if(sopa[i][j] == paraula[count]){

				bool looking = true;
				++count;
				while(looking and count != size){

					if(not(count + j < col and sopa[i][j + count] == paraula[count])) looking = false;
					++count;
				}
				if(looking){
					if(not found) maxim = sumar(soup, size, "horitzontal", i, j), found = true;
					else maxim = max(sumar(soup, size, "horitzontal", i, j), maxim);
				}
			}
		}
	}
	if(found) return maxim;
	return -1;
}

int buscar_vertical(const Matriu& sopa, Matrix& soup, string& paraula, int size, int fil, int col){
	bool found = false;
	int maxim;
	for(int i = 0; i < fil; ++i){
		for(int j = 0; j < col; ++j){
			int count = 0;
			//cerr << "cheking vertical  " << sopa[i][j] << " " << paraula[count] << endl;
			if(sopa[i][j] == paraula[count]){
				bool looking = true;
				++count;
				while(looking and count != size){
					//cerr << "cheking inside " << sopa[i + count][j] << " " << paraula[count] << endl;
					if(not(count + i < fil and sopa[i + count][j] == paraula[count])) looking = false;
					++count;
				}
				if(looking){
					if(not found) maxim = sumar(soup, size, "vertical", i, j), found = true;
					else maxim = max(sumar(soup, size, "vertical", i, j), maxim);
					//cout << "found !!" << paraula << endl;
				}
			}
		}
	}
	//cerr << "vertical finished" << endl;
	if(found) return maxim;
	return -1;
}

/*void buscar_diagonal(const Matriu& sopa, Matrix& soup, string& paraula, int size, int fil, int col){

	for(int i = 0; i < fil; ++i){
		for(int j = 0; j < col; ++j){
			int count = 0;
			if(sopa[i][j] == paraula[count]){

				bool looking = true;
				++count;
				while(looking and count != size){

					if(not((count + i < fil and count + j < col) and sopa[i + count][j + count] == paraula[count])) looking = false;
					++count;
				}
				if(looking) marcar(soup, size, "diagonal", i, j);
			}
		}
	}
}*/

int main(){
	int n, fil, col;
	//bool first = true;
	while(cin >> fil >> col){

		Matrix soup(fil, vector<int>(col));

		Matriu sopa(fil, Rows(col));

		for(int i = 0; i < fil; ++i){
			for(int j = 0; j < col; ++j){
				cin >> sopa[i][j];
			}
		}

		for(int i = 0; i < fil; ++i){
			for(int j = 0; j < col; ++j){
				cin >> soup[i][j];
			}
		}

		cin >> n;
		vector<string> paraules(n);
		for(int i = 0; i < n; ++i) cin >> paraules[i];

		//cerr << endl << "matriu sopa creada" << endl;

		/*for(int i = 0; i < fil; ++i){
			for(int j = 0; j < col; ++j){     //imprimir vector sopa
				cout << " " << sopa[i][j];
			}
			cout << endl;
		}*/

		//cerr << endl;

		for(int i = 0; i < n; ++i){
			//cerr << "checking: " << paraules[i] << endl;
			//cerr << "horitzontal : " << endl;
			int punts = max(buscar_horitzontal(sopa, soup, paraules[i], paraules[i].size(), fil, col), buscar_vertical(sopa, soup, paraules[i], paraules[i].size(), fil, col));
			//cerr << "vertical : " << endl;
			if(punts == -1) cout << "no" << endl;
			else cout << punts << endl;
			//cerr << "diagonal : " << endl;
			//buscar_diagonal(sopa, soup, paraules[i], paraules[i].size(), fil, col);
		}
	}
}