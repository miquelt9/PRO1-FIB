#include <iostream>
using namespace std;

void girar(string paraula1){
	string paraula2;
	if(cin >> paraula2) girar(paraula2);
	cout << paraula1 << endl;
}

int main(){
	string paraula1;
	cin >> paraula1;
	girar(paraula1);
}