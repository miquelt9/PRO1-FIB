#include <iostream>
using namespace std;

void girar(){
	string paraula;
	cin >> paraula;
	if(paraula != "fi"){
		girar();
		cout << paraula << endl;
	}
}

int main(){
	girar();
}