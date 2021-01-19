#include <iostream>
using namespace std;

void girar(int contador, int& num){
	string paraula;
	if(cin >> paraula){
		++num;
		girar(contador + 1, num);
	}
	if(num/2 > contador) cout << paraula << endl;
}

int main(){
	int num = 0;
	girar(0, num);
}