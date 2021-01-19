#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Rows;
typedef vector<Rows> Matriu;

bool conreus(const Matriu& camp, int& files, int& columnes){
	for(int i = 0; i < files; ++i){
		for(int j = 0; j < columnes; ++j){
			if(camp[i][j] != 0) return true;
		}
	}
	return false;
}

void posicio(const Matriu& camp, int& files, int& columnes, int& x, int& y){
	bool found = false;
	for(int i = 0; i < files and not found; ++i){
		for(int j = 0; j < columnes and not found; ++j){
			if(camp[i][j] != 0){
				x = i;
				y = j;
				found = true;
			}
		}
	}
}

int main(){
	int files, columnes;
	while(cin >> files >> columnes){
		Matriu camp_de_cols(files, Rows(columnes));

		for(int i = 0; i < files; ++i){
			for (int j = 0; j < columnes; ++j){
				cin >> camp_de_cols[i][j];
			}
		}

		int count, x, y; // x, y serviran per saber on esta el conreu següent
		count = 0;
		while(conreus(camp_de_cols, files, columnes)){

			//cerr << "encara hi ha conreus" << endl;
			posicio(camp_de_cols, files, columnes, x, y);
			//cerr << endl << x << "   " << y << endl;
			bool wip = true;
			int llargada = 0;

			while(wip){ // aquest bucle va mirant si el camp segueix i si és així va marcant-los amb 0 per indentificar que ja han estat contats
				if(y + 1 < columnes and camp_de_cols[x][y + 1] != 0){
					camp_de_cols[x][y] = 0;
					++y;
					++llargada;
				}
				else if(x + 1 < files and camp_de_cols[x + 1][y - llargada] != 0){
					camp_de_cols[x][y] = 0;
					++x;
					y -= llargada;
					llargada = 0;
				}
				else{
					camp_de_cols[x][y] = 0;
					wip = false;
					++count;
				}
			}
			//cerr << endl << "actualizacio" << endl;
			for(int i = 0; i < files; ++i){
				for(int j = 0; j < columnes; ++j){     
					//cerr << " " << camp_de_cols[i][j];
				}
				//cerr << endl;
			}
			//cout << endl;
		}

		cout << count << endl;
	}
}