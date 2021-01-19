#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef vector<vector<bool>> Tauler;

void colocar(Tauler& taula, int y, int x, int llargada, char posicio){
	if(posicio == 'h'){
		for(int i = 0; i < llargada; ++i){
			taula[x][y + i] = true;
		}
	}
	else if(posicio == 'v'){
		for(int i = 0; i < llargada; ++i){
			taula[x + i][y] = true;
		}
	}
}

bool inside(int& columnes, int& files, int&x, int& y){
	if(y >= 0 and y < columnes and x >= 0 and x < files){
		return true;
		//cerr << "pos: " << x << " " << y << "is inside";
	}
	return false;
}

int distancia(Tauler& taula, int yo, int xo){
	int files = taula.size();
	int columnes = taula[0].size();
	bool found = false;
	int counter = 1;
	while(not found){
		int x = xo - counter;
		int y = yo - counter;
		while(y != yo + counter){
			//cerr << "mov right - checking pos: " << x << " " << y << endl;
			if(inside(columnes, files, x , y) and taula[x][y]) return counter;
			++y;
		}
		while(x != xo + counter){
			//cerr << "mov down - checking pos: " << x << " " << y << endl;
			if(inside(columnes, files, x , y) and taula[x][y]) return counter;
			++x;
		}
		while(y != yo - counter){
			//cerr << "mov left - checking pos: " << x << " " << y << endl;
			if(inside(columnes, files, x , y) and taula[x][y]) return counter;
			--y;
		}
		while(x != xo - counter){
			//cerr << "mov up - checking pos: " << x << " " << y << endl;
			if(inside(columnes, files, x , y) and taula[x][y]) return counter;
			--x;
		}
		++counter;
	}
	return 0;
}

bool comprovar(const Tauler& taula, int y, int x){
	if(taula[x][y]) return	true;
	return false;
}

int main(){
	Tauler taula(10, vector<bool>(10, false));

	int x;
	char y;
	int llargada;
	char posicio;
	for(int i = 0; i < 10; ++i){
		cin >> y >> x >> llargada >> posicio;
		colocar(taula, x - 1, int(y - 'a'), llargada, posicio);
	}

	//Dibuixem la graella
	cout << "  12345678910" << endl;
	for(int i = 0; i < 10; ++i){
		cout << char(i + 'a') << " ";
		for(int j = 0; j < 10; ++j){
			if(taula[i][j]) cout << "X";
			else cout << ".";
		}
		cout << endl;
	}
	cout << endl;
	while(cin >> y >> x){
		if(comprovar(taula, x - 1, int(y - 'a'))) cout << y << x << " tocat!" << endl;
		else{
			cout << y << x << " aigua! vaixell mes proper a distancia " << distancia(taula, x - 1, int(y - 'a')) << endl;
		}
	}
}
