#include <iostream>
using namespace std;

int main(){
	int n, base;
	cin >> base;
	while(cin >> n){
		int total = 0, aux = n;
		while(aux >= base){
			total += (aux%base);
			aux /= base;
		}
		total += aux;
		cout << n << ": " << total << endl;
	}
}