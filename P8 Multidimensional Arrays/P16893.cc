#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Line;
typedef vector<Line> Plane;

bool check_quadrat(const Plane& quadrat, int x, int y){
	Line linia(10, 0);
	for(int i = 0; i < 3; ++i){
		for(int j = 0; j < 3; ++j){
			++linia[quadrat[x + i][y + j]];
		}
	}
	for(int j = 1; j < 10; ++j){
		if(linia[j] != 1) return false;
	}
	return true;
}

int main(){
	int n;
	cin >> n;
	Plane sudoku(9, Line(9));
	for(int i = 0; i < n; ++i){
		bool correcte = true;
		for(int j = 0; j < 9; ++j){
			for(int k = 0; k < 9; ++k){
				cin >> sudoku[j][k];
			}
		}
		/*cout << endl;   // Imprimir 
		for(int j = 0; j < 9; ++j){
			for(int k = 0; k < 9; ++k){
				cout << " " << sudoku[j][k];
			}
			cout << endl;
		}*/

		//Comprovarem les linies

		for(int k = 0; k < 9 and correcte; ++k){
			Line linia(10, 0); //Tot i que només necessitem 9 nº el 0 no hi surt mai
			for(int j = 0; j < 9; ++j){
				++linia[sudoku[k][j]];
			}
			for(int j = 1; j < 10 and correcte; ++j){
				if(linia[j] != 1) correcte = false;
			}
		}

		for(int k = 0; k < 9 and correcte; ++k){
			Line linia(10, 0); //Tot i que només necessitem 9 nº el 0 no hi surt mai
			for(int j = 0; j < 9; ++j){
				++linia[sudoku[j][k]];
			}
			for(int j = 1; j < 10 and correcte; ++j){
				if(linia[j] != 1) correcte = false;
			}
		}

		for(int k = 0; k < 9 and correcte; k += 3){
			for(int j = 0; j < 9 and correcte; j += 3){
				correcte = check_quadrat(sudoku, k, j);
			}
		}



		if(correcte) cout << "si" << endl;
		else cout << "no" << endl;
	}
}