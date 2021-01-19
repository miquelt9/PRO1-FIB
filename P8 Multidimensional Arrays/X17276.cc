#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Rows;
typedef vector<Rows> Matrix;

bool diagonal_1(const Matrix& matriu, int x, int y){ 
	int lastone = matriu[x][y];

	--x, --y;
    while(x >= 0 and y >= 0){
      if(matriu[x--][y--] <= lastone) return false;
      else lastone = matriu[x+1][y+1];
    }

	return true;
}

bool diagonal_2(const Matrix& matriu, int x, int y, int& files, int& columnes){ 
	int lastone = matriu[x][y];

	++x,++y;
    while(x < files and y < columnes){
      if(matriu[x++][y++] <= lastone) return false;
      else lastone = matriu[x-1][y-1];
    }

	return true;
}

bool diagonal_3(const Matrix& matriu, int x, int y, int& files){ 
	int lastone = matriu[x][y];

	++x, --y;
    while(x < files and y >= 0){
      if(matriu[x++][y--] <= lastone) return false;
      else lastone = matriu[x-1][y+1];
    }

	return true;
}

bool diagonal_4(const Matrix& matriu, int x, int y, int& columnes){
	int lastone = matriu[x][y];

	--x, ++y;
    while(x >= 0 and y < columnes){
      if(matriu[x--][y++] <= lastone) return false;
      else lastone = matriu[x+1][y-1];
    }

	return true;
}

int main(){
	int files, columnes;
	while(cin >> files >> columnes){
		bool compleix;
		Matrix matriu(files, Rows(columnes));
		for(int i = 0; i < files; ++i){
			for(int j = 0; j < columnes; ++j){
				cin >> matriu[i][j];
			}
		}
		int x, y; //posicio inicial
		cin >> x >> y;
		if(diagonal_1(matriu, x, y) and diagonal_2(matriu, x, y, files, columnes) and diagonal_3(matriu, x, y, files) and diagonal_4(matriu, x, y, columnes)){
			compleix = true;
		}
		else {
			compleix = false;
		}
		if(compleix) cout << "si" << endl;
		else cout << "no" << endl;
	}
}