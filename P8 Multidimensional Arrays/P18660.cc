#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<char> Rows;
typedef vector<Rows> Matriu;           //Utilitzerem per la sopa de caràcters

typedef vector<vector<bool>> Matrix;   //Utilitzarem per la sopa de booleans

void marcar(Matrix& soup, int size, string codi, int fil, int col){
	if(codi == "horitzontal"){
		for(int i = 0; i < size; ++i){
			soup[fil][col + i] = true;
		}
	}
	if(codi == "vertical"){
		for(int i = 0; i < size; ++i){
			soup[fil + i][col] = true;
		}
	}
	if(codi == "diagonal"){
		for(int i = 0; i < size; ++i){
			soup[fil + i][col + i] = true;
		}
	}
}

void buscar_horitzontal(const Matriu& sopa, Matrix& soup, string& paraula, int size, int fil, int col){

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
				if(looking) marcar(soup, size, "horitzontal", i, j);
			}
		}
	}
}

void buscar_vertical(const Matriu& sopa, Matrix& soup, string& paraula, int size, int fil, int col){

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
				if(looking) marcar(soup, size, "vertical", i, j);
					//cout << "found !!" << paraula << endl;
			}
		}
	}
	//cerr << "vertical finished" << endl;
}

void buscar_diagonal(const Matriu& sopa, Matrix& soup, string& paraula, int size, int fil, int col){

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
}

int main(){
	int n, fil, col;
	bool first = true;
	while(cin >> n >> fil >> col){

		vector<string> paraules(n);
		for(int i = 0; i < n; ++i) cin >> paraules[i];

		Matrix soup(fil, vector<bool>(col));

		Matriu sopa(fil, Rows(col));

		for(int i = 0; i < fil; ++i){
			for(int j = 0; j < col; ++j){
				cin >> sopa[i][j];
			}
		}

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
			buscar_horitzontal(sopa, soup, paraules[i], paraules[i].size(), fil, col);
			//cerr << "vertical : " << endl;
			buscar_vertical(sopa, soup, paraules[i], paraules[i].size(), fil, col);
			//cerr << "diagonal : " << endl;
			buscar_diagonal(sopa, soup, paraules[i], paraules[i].size(), fil, col);
		}

		if(not first) cout << endl;
		else first = false;

		for(int i = 0; i < fil; ++i){
			for(int j = 0; j < col; ++j){   
				if(soup[i][j]) sopa[i][j] += 'A' - 'a';
				if(j != 0) cout << " " << sopa[i][j];
				else cout << sopa[i][j];
			}
			cout << endl;
		}
	}
}