#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char>> Matriu;

bool inside(int columnes, int files, int x, int y){
	if(y >= 0 and y < columnes and x >= 0 and x < files){
		return true;
		//cerr << "pos: " << x << " " << y << "is inside";
	}
	return false;
}

char estat_seguent(const Matriu& joc, int fila, int columna){
	int count = 0;
	int files = joc.size();
	int columnes = joc[0].size();
	if(inside(columnes, files, fila - 1, columna - 1) and joc[fila-1][columna-1] == 'B') ++count;
	if(inside(columnes, files, fila - 1, columna) and joc[fila-1][columna] == 'B') ++count;
	if(inside(columnes, files, fila - 1, columna + 1) and joc[fila-1][columna+1] == 'B') ++count;
	if(inside(columnes, files, fila, columna + 1) and joc[fila][columna+1] == 'B') ++count;
	if(inside(columnes, files, fila + 1, columna + 1) and joc[fila+1][columna+1] == 'B') ++count;
	if(inside(columnes, files, fila + 1, columna) and joc[fila+1][columna] == 'B') ++count;
	if(inside(columnes, files, fila + 1, columna - 1) and joc[fila+1][columna-1] == 'B') ++count;
	if(inside(columnes, files, fila, columna - 1) and joc[fila][columna-1] == 'B') ++count;
	//cerr << "Fila : " << fila << "   Columna << " << columna << "   Count = " << count << endl;
	if(joc[fila][columna] == '.' and count == 3) return 'B';
	if(joc[fila][columna] == 'B' and (count == 2 or count == 3)) return 'B';
	return  '.';
}

int main(){
	int n, m;
	bool primer = false;
	while(cin >> n >> m and n != 0 and m != 0){
		Matriu joc(n, vector<char>(m));
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				cin >> joc[i][j];
			}
		}

		Matriu joc_futur(n, vector<char>(m));
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j){
				joc_futur[i][j] = estat_seguent(joc, i, j);
			}
		}

		joc = joc_futur;
		if(primer) cout << endl;
		for(int i = 0; i < (int)joc.size(); ++i){
			for(int j = 0; j < (int)joc[0].size(); ++j){
				cout << joc[i][j];
			}
			cout << endl;
		}
		primer = true;
	}	
}