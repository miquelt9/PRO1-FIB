#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Punt{
	int x, y, distancia;
};

int distancia_manhattan(const Punt& p1, const Punt& p2){
	return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

bool ordenar(const Punt& a, const Punt& b){
	if(a.distancia == b.distancia){
		if(a.x == b.x) return a.y < b.y;
		return a.x < b.x;
	}
	return a.distancia < b.distancia;
}

void escriu_punt(const Punt& a){
	cout << a.x << " " << a.y << endl;
}

void escriu_titol(int n){
	cout << "punts a distancia " << n << endl;
}

int main(){
	Punt origen;
	cin >> origen.x >> origen.y;
	origen.distancia = 0;
	int n;
	cin >> n;
	vector<Punt> llista(n);
	for(int i = 0; i < n; ++i){
		cin >> llista[i].x >> llista[i].y;
		llista[i].distancia = distancia_manhattan(origen, llista[i]);
	}

	sort(llista.begin(), llista.end(), ordenar);

	if(n != 0){
		escriu_titol(llista[0].distancia);
		escriu_punt(llista[0]);
	}
	for(int i = 1; i < n; ++i){
		if(llista[i].distancia != llista[i-1].distancia) escriu_titol(llista[i].distancia);
		escriu_punt(llista[i]);
	}
	
}