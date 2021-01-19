#include <iostream>
using namespace std;

void convergeix(int n, int& k, int& lluny){
	k = 0;
	lluny = n;
	while(n != 1){
		if(n%2 == 0) n /= 2;
		else n = (3*n) + 1;
		if(n > lluny) lluny = n;
		++k;
	}
}

int main(){
	int m, p, k , lluny;
	cin >> m >> p;
	int max = 0;
	for(int i = 1; i <= m; ++i){
		convergeix(i, k, lluny);
		if(k >= p) cout << i << endl;
		if(lluny > max) max = lluny;
	}
	cout << "S'arriba a " << max << "." << endl;
}