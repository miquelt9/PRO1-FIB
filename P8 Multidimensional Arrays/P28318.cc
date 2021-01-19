#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

void fila(const Matrix& matriu){
	int fil;
	cin >> fil;
	cout << "fila " << fil << ":";
	fil -= 1;
	int size = matriu[0].size();
	for(int i = 0; i < size; ++i){
		cout << " " << matriu[fil][i];
	}
	cout << endl;
}

void columna(const Matrix& matriu){
	int col;
	cin >> col;
	cout << "columna " << col << ":";
	col -= 1;
	int size = matriu.size();
	for(int i = 0; i < size; ++i){
		cout << " " << matriu[i][col];
	}
	cout << endl;
}

void element(const Matrix& matriu){
	int fil, col;
	cin >> fil >> col;
	cout << "element " << fil << " " << col << ": " << matriu[fil - 1][col - 1] << endl;
}

int main(){
	int fil, col;
	cin >> fil >> col;

	Matrix my_matrix(fil,Row(col));
	for (int i = 0; i < fil; ++i){
		for (int j = 0; j < col; ++j){
			cin >> my_matrix[i][j];
		}
	}
	string codi;
	while (cin >> codi){
		if(codi == "fila") fila(my_matrix);
		else if(codi == "columna") columna(my_matrix);
		else if(codi == "element") element(my_matrix);
	}
}