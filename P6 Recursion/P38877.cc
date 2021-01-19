#include <iostream>
using namespace std;

void girar(int& n, int& contador){
	string paraula;
	if(cin >> paraula){
		++contador;
		girar(n, contador);
	}
	if(contador >= n) cout << paraula << endl;
	--contador;
}

int main(){
	int n;
	int contador = 1;
	cin >> n;
	girar(n, contador);
}