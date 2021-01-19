#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef vector<char> Rows;
typedef vector<Rows> Matrix;

void actualitza(Matrix& dibuix, int x, int y, int n){
	if (n == 1){
	    dibuix[x][y] = 'O';
	    dibuix[x + 1][y] = '|';
	    dibuix[x - 1][y] = '|';
	    dibuix[x][y + 1] = '-';
	    dibuix[x][y -1] = '-';
	}
	else{
		actualitza(dibuix, x + pow(3, n-1), y, n - 1);
		actualitza(dibuix, x - pow(3, n-1), y, n - 1);
		actualitza(dibuix, x, y + pow(3, n-1), n - 1);
		actualitza(dibuix, x, y - pow(3, n-1), n - 1);
		actualitza(dibuix, x, y, n - 1);
	}
}

int main(){
    int n1;
    cin >> n1;
    int n = n1;
    n1 = pow(3, n1);
    int n2 = n1+2;
    Matrix dibuix(n1, Rows(n2,' '));

    for(int i = 0; i < n1; ++i){
        dibuix[i][0] = '|';
    }
    for(int i = 0; i < n1; ++i){
        dibuix[i][n2 - 1] = '|';
    }
    
    int x = n1/2;
    int y = n1/2 + 1;

    actualitza(dibuix, x, y, n);
    
    for(int i = 0; i < n1; ++i){
        for(int j = 0; j < n2; ++j){
            cout << dibuix[i][j];
        }
        cout << endl;
    }
}
