#include <iostream>
#include <vector>
using namespace std;

struct Coord{
	int x, y;
};

typedef vector<vector<char>> Matriu;

Coord seguentD(const Coord& p, int n) {
	Coord r;
	if (p.x-1 < 0 and p.y+1 > n-1) {
		r.x = n-1;
		r.y = p.x+1;
	} 
	else if (p.x == n-1 and p.y == n-1) {
		r.x = 0;
		r.y = 0;
	}
	else if (p.x-1 < 0) {
		r.y = 0;
		r.x = p.y+1;
	} 
	else if (p.y+1 > n-1) {
		r.y = p.x+1;
		r.x = n-1;
	} 
	else {
		r.x = p.x-1;
		r.y = p.y+1;
	}

	return r;
}

int main(){
	//l --> caracters del missatge ocult
	//p --> posicio primera lletra (f,c)
	//d --> nº posicions a saltar
	int n, d, l;
	while(cin >> n){
		Matriu missatge_ocult(n, vector<char>(n));
		Coord posicio_actual;
		cin >> d >> l >> posicio_actual.x >> posicio_actual.y;

		for(int i = 0; i < n; ++i){
			for(int j = 0; j < n; ++j){
				cin >> missatge_ocult[i][j];
			}
		}

		vector<char> resulucio(l);
		int s = 0;
		resulucio[s] = missatge_ocult[posicio_actual.x][posicio_actual.y];
		++s;
		--l;
		while(l > 0){
			//cerr << "posicio actual = " << posicio_actual.x << "  " << posicio_actual.y << endl;
			for(int i = 0; i < d + 1; ++i){
				posicio_actual = seguentD(posicio_actual, n);
			}
			//cerr << "posicio actual = " << posicio_actual.x << "  " << posicio_actual.y << endl;
			resulucio[s] = missatge_ocult[posicio_actual.x][posicio_actual.y];
			++s;
			--l;
		}
		for(int i = 0; i < s - 1; ++i){
			if(resulucio[i] == 'X' and resulucio[i + 1] == 'X' ){
				cout << " ";
				++i;
			}
			else cout << resulucio[i];
		}
		cout << resulucio[s-1];
		cout << endl;
		
	}
}